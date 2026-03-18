/*
 * XREFs of IommupHvUnmapDeviceLogicalRange @ 0x1403AD90C
 * Callers:
 *     IommuUnmapLogicalRange @ 0x1403AD4C0 (IommuUnmapLogicalRange.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x1403AD858 (HalpIommuDomainUnmapLogicalRange.c)
 * Callees:
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1403AD990 (HvlDmaUnmapDeviceLogicalRange.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvUnmapDeviceLogicalRange(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = *(unsigned int *)(BugCheckParameter3 + 48);
  if ( (__int64 (__fastcall *)(_QWORD))qword_140FC1070 == HvlDmaUnmapDeviceLogicalRange )
    result = HvlDmaUnmapDeviceLogicalRange(&v7);
  else
    result = guard_dispatch_icall_no_overrides(&v7, BugCheckParameter4, a3, a4);
  if ( (int)result < 0 )
    KeBugCheckEx(0x1D9u, 1uLL, (int)result, BugCheckParameter3, BugCheckParameter4);
  return result;
}
