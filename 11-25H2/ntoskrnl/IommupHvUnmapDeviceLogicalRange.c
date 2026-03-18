/*
 * XREFs of IommupHvUnmapDeviceLogicalRange @ 0x14026DB4C
 * Callers:
 *     IommuUnmapLogicalRange @ 0x14026D700 (IommuUnmapLogicalRange.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x14026DA98 (HalpIommuDomainUnmapLogicalRange.c)
 * Callees:
 *     HvlDmaUnmapDeviceLogicalRange @ 0x14026DBD0 (HvlDmaUnmapDeviceLogicalRange.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvUnmapDeviceLogicalRange(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(unsigned int *)(BugCheckParameter3 + 48);
  if ( (__int64 (__fastcall *)(_QWORD))qword_140FC08D0 == HvlDmaUnmapDeviceLogicalRange )
    result = HvlDmaUnmapDeviceLogicalRange(&v5);
  else
    result = guard_dispatch_icall_no_overrides(&v5, BugCheckParameter4);
  if ( (int)result < 0 )
    KeBugCheckEx(0x1D9u, 1uLL, (int)result, BugCheckParameter3, BugCheckParameter4);
  return result;
}
