/*
 * XREFs of GreForceUFIMapping @ 0x1C02772CC
 * Callers:
 *     NtGdiForceUFIMapping @ 0x1C02C1B60 (NtGdiForceUFIMapping.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreForceUFIMapping(HDC a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v3 = v6[0];
  if ( v6[0] )
  {
    v5 = *a2;
    *(_DWORD *)(v6[0] + 252LL) |= 4u;
    *(_QWORD *)(v3 + 256) = v5;
    if ( v6[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v6);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v7);
    return 1LL;
  }
  else
  {
    DCOBJ::~DCOBJ((DCOBJ *)v6);
    return 0LL;
  }
}
