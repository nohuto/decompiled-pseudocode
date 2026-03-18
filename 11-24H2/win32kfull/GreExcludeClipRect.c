/*
 * XREFs of GreExcludeClipRect @ 0x140039FD0
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x140039ADC (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     NtGdiExcludeClipRect @ 0x140039FB0 (NtGdiExcludeClipRect.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     bCvtPts1 @ 0x1400C5774 (bCvtPts1.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GreExcludeClipRect(HDC a1, LONG left, LONG top, LONG right, LONG a5)
{
  unsigned int v8; // r14d
  int v9; // ebx
  __int64 v10; // r9
  LONG bottom; // edx
  DC *v12; // rbx
  int v13; // eax
  ULONG v15; // ecx
  int v16; // eax
  __int64 v17; // [rsp+28h] [rbp-79h] BYREF
  __int64 v18; // [rsp+30h] [rbp-71h] BYREF
  bool v19; // [rsp+38h] [rbp-69h]
  DC *v20[14]; // [rsp+40h] [rbp-61h] BYREF
  struct _RECTL v21; // [rsp+B0h] [rbp+Fh] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v20, a1);
  v8 = 0;
  if ( !v20[0] )
  {
    v15 = 6;
LABEL_15:
    EngSetLastError(v15);
    goto LABEL_13;
  }
  v9 = *(_DWORD *)(*((_QWORD *)v20[0] + 122) + 208LL);
  DC::QuickInitXform(v20[0], &v17, 2147484164LL);
  bottom = a5;
  v18 = v17;
  v19 = v9 != 2;
  v21.left = left;
  v21.top = top;
  v21.right = right;
  v21.bottom = a5;
  if ( (*(_BYTE *)(v17 + 32) & 1) != 0 )
  {
    v12 = v20[0];
    if ( (*(_BYTE *)(v17 + 32) & 0x43) == 0x43
      || (v16 = bCvtPts1(v17, &v21, 2LL, v10),
          bottom = v21.bottom,
          right = v21.right,
          top = v21.top,
          left = v21.left,
          v16) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)v12 + 122) + 108LL) & 1) != 0 )
      {
        ++left;
        ++right;
        v21.left = left;
        v21.right = right;
      }
    }
    if ( left > right )
    {
      v21.left = right;
      v21.right = left;
    }
    if ( top > bottom )
    {
      v21.top = bottom;
      v21.bottom = top;
    }
    v13 = DC::iCombine(v20[0], &v21, 4);
    goto LABEL_11;
  }
  if ( (left & 0xF8000000) != 0 && (left & 0xF8000000) != -134217728
    || (((a5 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((top & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    v15 = 87;
    goto LABEL_15;
  }
  v13 = DC::iCombine(v20[0], (struct EXFORMOBJR *)&v18, &v21, 4);
LABEL_11:
  v8 = v13;
  if ( v13 > 1 )
    v8 = 3;
LABEL_13:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v20);
  return v8;
}
