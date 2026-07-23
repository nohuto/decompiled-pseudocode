/*
 * XREFs of PipDmgSaveDeviceDmarPolicy @ 0x140730310
 * Callers:
 *     PiDmaGuardProcessPreAddDevice @ 0x140981740 (PiDmaGuardProcessPreAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpSetObjectProperty @ 0x1408B6258 (_PnpSetObjectProperty.c)
 *     PnpTraceDmaGuardDevicePolicy @ 0x140AB2F78 (PnpTraceDmaGuardDevicePolicy.c)
 */

__int64 __fastcall PipDmgSaveDeviceDmarPolicy(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  __int64 v5; // rdx
  char v6; // di
  __int64 v7; // rbx
  unsigned int v9; // [rsp+70h] [rbp+18h] BYREF

  v9 = a3;
  v3 = 0;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = 1;
  if ( a3 )
    v3 = PnpSetObjectProperty(
           PiPnpRtlCtx,
           v5,
           1,
           0LL,
           (__int64)&DEVPKEY_Device_DmaRemappingPolicy,
           7,
           (__int64)&v9,
           4,
           0);
  else
    PnpSetObjectProperty(PiPnpRtlCtx, v5, 1, 0LL, (__int64)&DEVPKEY_Device_DmaRemappingPolicy, 0, 0LL, 0, 0);
  PnpTraceDmaGuardDevicePolicy(a1, v9);
  v7 = *(_QWORD *)(a1 + 720);
  if ( v7 )
  {
    if ( v9 != 2 || !(unsigned __int8)guard_dispatch_icall_no_overrides(*(_QWORD *)v7, 0LL) )
      v6 = 0;
    *(_BYTE *)(v7 + 16) = v6 | *(_BYTE *)(v7 + 16) & 0xFE;
  }
  return v3;
}
