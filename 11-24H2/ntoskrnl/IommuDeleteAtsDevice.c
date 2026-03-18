/*
 * XREFs of IommuDeleteAtsDevice @ 0x140563700
 * Callers:
 *     <none>
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     HalpIommuDeleteDevice @ 0x14054DC10 (HalpIommuDeleteDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuDeleteAtsDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx

  v5 = *(_QWORD *)(a1 + 32);
  if ( HalpHvIommu )
  {
    guard_dispatch_icall_no_overrides(v5, 17LL, 0LL, a4);
  }
  else
  {
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 16), *(_QWORD *)(a1 + 40), 0LL, a4);
    --*(_DWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 60) = 0;
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 64));
    _InterlockedExchange64((volatile __int64 *)(a1 + 64), 1LL);
  }
  return HalpIommuDeleteDevice((__int64 *)a1);
}
