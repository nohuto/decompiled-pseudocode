/*
 * XREFs of IommuDeleteAtsDevice @ 0x140560E60
 * Callers:
 *     <none>
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     HalpIommuDeleteDevice @ 0x14054B2F8 (HalpIommuDeleteDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuDeleteAtsDevice(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  if ( HalpHvIommu )
  {
    guard_dispatch_icall_no_overrides(v2);
  }
  else
  {
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v2 + 16));
    --*(_DWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 60) = 0;
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 64));
    _InterlockedExchange64((volatile __int64 *)(a1 + 64), 1LL);
  }
  return HalpIommuDeleteDevice((__int64 *)a1);
}
