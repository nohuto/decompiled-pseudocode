/*
 * XREFs of GreGetBitmapDpiScaleValue @ 0x1C02A7534
 * Callers:
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00A47A4 (zzzUpdateWindowsAfterModeChange.c)
 *     NtGdiGetBitmapDpiScaleValue @ 0x1C02C1CE0 (NtGdiGetBitmapDpiScaleValue.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004CC34 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     bFToL @ 0x1C0078740 (bFToL.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C007E42C (--1SURFREF@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBitmapDpiScaleValue(HSURF a1)
{
  __int64 v1; // rbx
  _BYTE v3[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]
  unsigned int v5; // [rsp+68h] [rbp+10h] BYREF

  SURFREF::SURFREF((SURFREF *)v3, a1);
  v5 = 0;
  v1 = v4;
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 116) & 0x800) != 0 && (unsigned int)bFToL(*(float *)(v4 + 660), (int *)&v5, 6u) )
    {
      SURFREF::~SURFREF((SURFREF *)v3);
      return v5;
    }
    if ( v1 )
      DEC_SHARE_REF_CNT(v1);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v3);
  return 1LL;
}
