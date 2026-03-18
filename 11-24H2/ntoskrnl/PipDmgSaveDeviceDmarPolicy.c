/*
 * XREFs of PipDmgSaveDeviceDmarPolicy @ 0x140732300
 * Callers:
 *     PiDmaGuardProcessPreAddDevice @ 0x1409C6A98 (PiDmaGuardProcessPreAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpSetObjectProperty @ 0x1408B88E8 (_PnpSetObjectProperty.c)
 *     PnpTraceDmaGuardDevicePolicy @ 0x140AB8AB4 (PnpTraceDmaGuardDevicePolicy.c)
 */

__int64 __fastcall PipDmgSaveDeviceDmarPolicy(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  __int64 v5; // rdx
  char v6; // di
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  unsigned int v11; // [rsp+70h] [rbp+18h] BYREF

  v11 = a3;
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
           (__int64)&v11,
           4,
           0);
  else
    PnpSetObjectProperty(PiPnpRtlCtx, v5, 1, 0LL, (__int64)&DEVPKEY_Device_DmaRemappingPolicy, 0, 0LL, 0, 0);
  PnpTraceDmaGuardDevicePolicy(a1, v11);
  v9 = *(_QWORD *)(a1 + 720);
  if ( v9 )
  {
    if ( v11 != 2 || !(unsigned __int8)guard_dispatch_icall_no_overrides(*(_QWORD *)v9, 0LL, v7, v8) )
      v6 = 0;
    *(_BYTE *)(v9 + 16) = v6 | *(_BYTE *)(v9 + 16) & 0xFE;
  }
  return v3;
}
