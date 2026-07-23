/*
 * XREFs of IommuDeleteAtsDevice @ 0x140561330
 * Callers:
 *     <none>
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     HalpIommuDeleteDevice @ 0x14054B4BC (HalpIommuDeleteDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuDeleteAtsDevice(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  if ( HalpHvIommu )
  {
    guard_dispatch_icall_no_overrides(v2, 17LL);
  }
  else
  {
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v2 + 16), *(_QWORD *)(a1 + 40));
    --*(_DWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 60) = 0;
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 64));
    _InterlockedExchange64((volatile __int64 *)(a1 + 64), 1LL);
  }
  return HalpIommuDeleteDevice((__int64 *)a1);
}
