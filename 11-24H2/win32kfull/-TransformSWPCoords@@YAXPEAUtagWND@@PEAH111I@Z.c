/*
 * XREFs of ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1401E98D0
 * Callers:
 *     NtUserDeferWindowPosAndBand @ 0x140241080 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetWindowPos @ 0x140247430 (NtUserSetWindowPos.c)
 * Callees:
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14004544C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     ScaleDpiValueWithSubpixel @ 0x140281A08 (ScaleDpiValueWithSubpixel.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall TransformSWPCoords(struct tagWND *a1, int *a2, int *a3, int *a4, int *a5, char a6)
{
  int *v7; // rbx
  int v10; // r9d
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  INT v15; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  unsigned __int16 v19; // di
  unsigned __int16 v20; // ax
  INT v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rbx
  unsigned __int16 v25; // r14
  unsigned __int16 v26; // si
  INT v27; // eax
  int *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r10
  int *v32; // [rsp+20h] [rbp-30h] BYREF
  INT *v33; // [rsp+28h] [rbp-28h]
  int *v34; // [rsp+30h] [rbp-20h] BYREF
  int v35; // [rsp+38h] [rbp-18h]
  int v36; // [rsp+3Ch] [rbp-14h]

  v32 = a4;
  v7 = a3;
  v34 = a3;
  v33 = a5;
  if ( !IsTopLevelWindow((__int64)a1) )
  {
    if ( v10 != 3 )
    {
      v22 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
      if ( v22 )
      {
        v23 = *((_QWORD *)a1 + 5);
        v24 = v22 + 40;
        v25 = (*(_DWORD *)(v23 + 288) >> 8) & 0x1FF;
        if ( !v25 )
          v25 = *(_WORD *)(*(_QWORD *)v24 + 60LL);
        v26 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v23) >> 8) & 0x1FF;
        if ( !v26 )
          v26 = *(_WORD *)(*(_QWORD *)v24 + 60LL);
        if ( (a6 & 2) == 0 )
        {
          *a2 = EngMulDiv(*a2, v25, v26);
          *v34 = EngMulDiv(*v34, v25, v26);
        }
        if ( (a6 & 1) == 0 )
        {
          if ( !IsChildWindowDpiBoundary(a1) )
          {
            *v32 = EngMulDiv(*v32, v25, v26);
            v7 = v33;
            v27 = EngMulDiv(*v33, v25, v26);
LABEL_25:
            *v7 = v27;
            return;
          }
          v28 = v32;
          *((_DWORD *)a1 + 58) = 0;
          *((_DWORD *)a1 + 59) = 0;
          ScaleDpiValueWithSubpixel(v28, (char *)a1 + 232, v25, v26);
          ScaleDpiValueWithSubpixel(v33, v31, v29, v30);
        }
      }
    }
    return;
  }
  if ( !v10 )
  {
    v11 = *v7;
    LODWORD(v34) = *a2;
    v35 = *a4 + (_DWORD)v34;
    v12 = v11 + *a5;
    HIDWORD(v34) = v11;
    v36 = v12;
    TransformRectBetweenCoordinateSpaces(&v34, &v34, a1, 0LL);
    v13 = HIDWORD(v34);
    v14 = v35 - (_DWORD)v34;
    *a2 = (int)v34;
    *v7 = v13;
    *a4 = v14;
    v15 = v36 - v13;
LABEL_14:
    *a5 = v15;
    return;
  }
  if ( (a6 & 2) == 0 )
  {
    LODWORD(v32) = *a2;
    HIDWORD(v32) = *v7;
    TransformPointBetweenCoordinateSpaces(&v32, &v32, a1, 0LL);
    *a2 = (int)v32;
    v27 = HIDWORD(v32);
    goto LABEL_25;
  }
  if ( (a6 & 1) == 0 )
  {
    v16 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    if ( v16 )
    {
      v17 = *((_QWORD *)a1 + 5);
      v18 = v16 + 40;
      v19 = (*(_DWORD *)(v17 + 288) >> 8) & 0x1FF;
      if ( !v19 )
        v19 = *(_WORD *)(*(_QWORD *)v18 + 60LL);
      v20 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v17) >> 8) & 0x1FF;
      if ( !v20 )
        v20 = *(_WORD *)(*(_QWORD *)v18 + 60LL);
      v21 = v20;
      *a4 = EngMulDiv(*a4, v19, v20);
      v15 = EngMulDiv(*a5, v19, v21);
      goto LABEL_14;
    }
  }
}
