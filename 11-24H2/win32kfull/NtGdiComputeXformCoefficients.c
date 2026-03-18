/*
 * XREFs of NtGdiComputeXformCoefficients @ 0x1401D56F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

_BOOL8 __fastcall NtGdiComputeXformCoefficients(HDC a1)
{
  BOOL v1; // ebx
  _QWORD v3[15]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v4; // [rsp+A8h] [rbp+10h] BYREF

  v1 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v3, a1);
  if ( v3[0] )
  {
    DC::QuickInitXform(v3[0], &v4, 516LL);
    v1 = (*(_BYTE *)(v4 + 32) & 1) != 0;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
  return v1;
}
