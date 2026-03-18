/*
 * XREFs of PipDmgSaveDeviceDmarPolicy @ 0x1407260F0
 * Callers:
 *     PiDmaGuardProcessPreAddDevice @ 0x1409AD200 (PiDmaGuardProcessPreAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpSetObjectProperty @ 0x1409558B8 (_PnpSetObjectProperty.c)
 *     PnpTraceDmaGuardDevicePolicy @ 0x140AB46EC (PnpTraceDmaGuardDevicePolicy.c)
 */

__int64 __fastcall PipDmgSaveDeviceDmarPolicy(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // esi
  __int64 v5; // rdx
  char v6; // di
  __int64 v7; // rbx
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(v9) = a3;
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
  PnpTraceDmaGuardDevicePolicy(a1, (unsigned int)v9);
  v7 = *(_QWORD *)(a1 + 720);
  if ( v7 )
  {
    if ( (_DWORD)v9 != 2 || !(unsigned __int8)guard_dispatch_icall_no_overrides(*(_QWORD *)v7) )
      v6 = 0;
    *(_BYTE *)(v7 + 16) = v6 | *(_BYTE *)(v7 + 16) & 0xFE;
  }
  return v3;
}
