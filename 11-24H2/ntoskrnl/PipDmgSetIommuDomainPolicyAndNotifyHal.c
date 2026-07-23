/*
 * XREFs of PipDmgSetIommuDomainPolicyAndNotifyHal @ 0x1407303F8
 * Callers:
 *     PiDmaGuardProcessUpdateConsoleLockStateAction @ 0x14072F7AC (PiDmaGuardProcessUpdateConsoleLockStateAction.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x14072FB94 (PipDmgEnforceEnumerationPolicy.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpSetObjectProperty @ 0x1408B6258 (_PnpSetObjectProperty.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x14097BDFC (PnpDeviceObjectToDeviceInstance.c)
 */

__int64 __fastcall PipDmgSetIommuDomainPolicyAndNotifyHal(_QWORD *a1, int a2, char a3)
{
  int v4; // edi
  int v5; // ecx
  __int64 v6; // rdx
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF
  int v9; // [rsp+68h] [rbp+10h] BYREF

  v9 = a2;
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
             (__int64)&v9,
             4,
             0);
      if ( v4 >= 0 )
      {
        *(_DWORD *)(a1[90] + 20LL) = v9;
        if ( !v9 )
          guard_dispatch_icall_no_overrides(a1[4], v6);
      }
    }
    if ( Handle )
      ZwClose(Handle);
  }
  return (unsigned int)v4;
}
