/*
 * XREFs of IommupHvUnmapDeviceLogicalRange @ 0x14039C11C
 * Callers:
 *     IommuUnmapLogicalRange @ 0x14039BCD0 (IommuUnmapLogicalRange.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x14039C068 (HalpIommuDomainUnmapLogicalRange.c)
 * Callees:
 *     HvlDmaUnmapDeviceLogicalRange @ 0x14039C1A0 (HvlDmaUnmapDeviceLogicalRange.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvUnmapDeviceLogicalRange(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(unsigned int *)(BugCheckParameter3 + 48);
  if ( (__int64 (__fastcall *)(_QWORD))qword_140FC12D0 == HvlDmaUnmapDeviceLogicalRange )
    result = HvlDmaUnmapDeviceLogicalRange(&v5);
  else
    result = guard_dispatch_icall_no_overrides(&v5, BugCheckParameter4);
  if ( (int)result < 0 )
    KeBugCheckEx(0x1D9u, 1uLL, (int)result, BugCheckParameter3, BugCheckParameter4);
  return result;
}
