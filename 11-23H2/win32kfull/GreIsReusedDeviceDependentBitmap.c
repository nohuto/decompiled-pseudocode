/*
 * XREFs of GreIsReusedDeviceDependentBitmap @ 0x1C00A3AA4
 * Callers:
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00A47A4 (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004CC34 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C007E42C (--1SURFREF@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreIsReusedDeviceDependentBitmap(HSURF a1)
{
  unsigned int v2; // ebx
  _BYTE v3[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v3, a1);
  if ( v4 )
  {
    v2 = *(_DWORD *)(v4 + 116) & 0x2000;
    DEC_SHARE_REF_CNT(v4);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v3);
    return v2;
  }
  else
  {
    SURFREF::~SURFREF((SURFREF *)v3);
    return 0LL;
  }
}
