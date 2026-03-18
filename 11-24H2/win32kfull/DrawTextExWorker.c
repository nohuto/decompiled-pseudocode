/*
 * XREFs of DrawTextExWorker @ 0x14007C800
 * Callers:
 *     xxxDrawCaptionTemp @ 0x14007B5FC (xxxDrawCaptionTemp.c)
 * Callees:
 *     GreSetTextAlign @ 0x140038C8C (GreSetTextAlign.c)
 *     GreExtSelectClipRgn @ 0x140038DAC (GreExtSelectClipRgn.c)
 *     GreGetRandomRgn @ 0x140038FA0 (GreGetRandomRgn.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x14007DB7C (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 *     ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x14007DD88 (-AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z.c)
 *     GreGetTextAlign @ 0x1401F1C90 (GreGetTextAlign.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall DrawTextExWorker(
        HDC a1,
        unsigned __int16 *a2,
        int a3,
        struct tagRECT *a4,
        unsigned int a5,
        struct tagDRAWTEXTPARAMS *a6)
{
  __int64 v6; // rdi
  __int64 v10; // rbx
  int top; // esi
  int v12; // eax
  int v13; // eax
  int v14; // esi
  int v15; // edi
  LONG v16; // ecx
  __int64 result; // rax
  HRGN RectRgn; // rax
  int TextAlign; // eax
  int v20; // [rsp+30h] [rbp-C8h]
  int v21; // [rsp+40h] [rbp-B8h]
  int v23; // [rsp+50h] [rbp-A8h] BYREF
  char v24[24]; // [rsp+54h] [rbp-A4h] BYREF
  int v25; // [rsp+6Ch] [rbp-8Ch]
  int v26; // [rsp+90h] [rbp-68h]

  LODWORD(v6) = a3;
  v23 = 0;
  memset_0(v24, 0, 0x44uLL);
  v21 = 0;
  if ( !a2 )
    return 0LL;
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 == -1 )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( a2[v6] );
    }
  }
  else if ( *a2 )
  {
    return 1LL;
  }
  if ( a6 && *(_DWORD *)a6 != 20 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  if ( !(unsigned int)DT_InitDrawTextInfo(a1, a4, a5, (struct DRAWTEXTDATA *)&v23, a6) )
    return 0LL;
  v26 = -1;
  if ( (a5 & 0x20000) != 0 )
  {
    TextAlign = GreGetTextAlign(a1);
    v21 = GreSetTextAlign(a1, TextAlign | 0x100u);
  }
  if ( (a5 & 0x100) != 0 )
  {
    v10 = 0LL;
  }
  else
  {
    RectRgn = (HRGN)GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
    v10 = (__int64)RectRgn;
    if ( RectRgn )
    {
      if ( (unsigned int)GreGetRandomRgn(a1, RectRgn, 1) != 1 )
      {
        GreDeleteObject(v10);
        v10 = -1LL;
      }
      GreIntersectClipRect(
        a1,
        *(_QWORD *)&a4->left,
        HIDWORD(*(_QWORD *)&a4->left),
        *(_QWORD *)&a4->right,
        HIDWORD(*(_QWORD *)&a4->right));
    }
  }
  top = a4->top;
  v12 = a5 & 0xC;
  if ( v12 == 4 )
  {
    top += (a4->bottom - top - v25) / 2;
  }
  else if ( v12 == 8 )
  {
    top = a4->bottom - v25;
  }
  v13 = AddEllipsisAndDrawLine(a1, top, a2, v6, a5, (struct DRAWTEXTDATA *)&v23, v20);
  v14 = v25 + top;
  v15 = (_DWORD)a2 + 2 * v13;
  if ( v10 )
  {
    if ( v10 == -1 )
    {
      GreExtSelectClipRgn(a1, 0LL);
    }
    else
    {
      GreExtSelectClipRgn(a1, (HRGN)v10);
      GreDeleteObject(v10);
    }
  }
  if ( (a5 & 0x20000) != 0 )
    GreSetTextAlign(a1, v21);
  if ( a6 )
    *((_DWORD *)a6 + 4) = (unsigned int)(v15 - (_DWORD)a2) >> 1;
  v16 = a4->top;
  result = (unsigned int)(v14 - v16);
  if ( v14 == v16 )
    return 1LL;
  return result;
}
