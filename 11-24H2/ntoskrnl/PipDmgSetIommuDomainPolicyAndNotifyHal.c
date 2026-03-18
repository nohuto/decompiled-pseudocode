/*
 * XREFs of PipDmgSetIommuDomainPolicyAndNotifyHal @ 0x1407323E8
 * Callers:
 *     PiDmaGuardProcessUpdateConsoleLockStateAction @ 0x14073179C (PiDmaGuardProcessUpdateConsoleLockStateAction.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x140731B84 (PipDmgEnforceEnumerationPolicy.c)
 * Callees:
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpSetObjectProperty @ 0x1408B88E8 (_PnpSetObjectProperty.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x140990DBC (PnpDeviceObjectToDeviceInstance.c)
 */

__int64 __fastcall PipDmgSetIommuDomainPolicyAndNotifyHal(_QWORD *a1, int a2, char a3)
{
  int v4; // edi
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+68h] [rbp+10h] BYREF

  v11 = a2;
  Handle = 0LL;
  v4 = 0;
  v5 = *(_DWORD *)(a1[90] + 20LL);
  if ( a2 != v5 && (a3 || v5) )
  {
    v4 = PnpDeviceObjectToDeviceInstance(a1[4], &Handle, 983103LL);
    if ( v4 >= 0 )
    {
      v4 = PnpSetObjectProperty(
             PiPnpRtlCtx,
             a1[6],
             1,
             0LL,
             (__int64)&DEVPKEY_Device_IommuDomainPolicy,
             7,
             (__int64)&v11,
             4,
             0);
      if ( v4 >= 0 )
      {
        *(_DWORD *)(a1[90] + 20LL) = v11;
        if ( !v11 )
          guard_dispatch_icall_no_overrides(a1[4], v6, v7, v8);
      }
    }
    if ( Handle )
      ZwClose(Handle);
  }
  return (unsigned int)v4;
}
