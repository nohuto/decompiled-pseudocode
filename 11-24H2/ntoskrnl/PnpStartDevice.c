/*
 * XREFs of PnpStartDevice @ 0x1404887B4
 * Callers:
 *     PnpStartDeviceNode @ 0x1409BEB50 (PnpStartDeviceNode.c)
 * Callees:
 *     PnpSendIrp @ 0x14025DB5C (PnpSendIrp.c)
 *     PoFxPrepareDevice @ 0x140488860 (PoFxPrepareDevice.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PnpStartDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v6; // rdi
  __int64 v7; // r8
  __int16 v9; // [rsp+30h] [rbp-58h] BYREF
  __int64 v10; // [rsp+38h] [rbp-50h]
  __int64 v11; // [rsp+40h] [rbp-48h]

  v4 = a2;
  if ( a1 )
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v6 = 0LL;
  LOBYTE(a2) = 1;
  PoFxPrepareDevice(v6, a2);
  *(_DWORD *)(v6 + 156) = 1;
  memset_0(&v9, 0, 0x48uLL);
  v10 = *(_QWORD *)(v6 + 416);
  v11 = *(_QWORD *)(v6 + 424);
  v9 = 27;
  return PnpSendIrp(a1, (__int64)&v9, v7, v4, a3);
}
