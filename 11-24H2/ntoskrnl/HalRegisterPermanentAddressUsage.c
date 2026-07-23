/*
 * XREFs of HalRegisterPermanentAddressUsage @ 0x14055DB00
 * Callers:
 *     HalpHpetDiscover @ 0x14055E498 (HalpHpetDiscover.c)
 *     HalpApicDiscover @ 0x140566124 (HalpApicDiscover.c)
 *     HalpApicRegisterIoUnit @ 0x140566998 (HalpApicRegisterIoUnit.c)
 *     HalpIommuProcessIvhdEntry @ 0x14056F048 (HalpIommuProcessIvhdEntry.c)
 *     HalpIvtLegacyProcessDrhdEntry @ 0x140574DF8 (HalpIvtLegacyProcessDrhdEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x140575658 (HalpIvtProcessDrhdEntry.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x140540620 (HalpMmAllocateMemoryInternal.c)
 */

NTSTATUS __stdcall HalRegisterPermanentAddressUsage(LARGE_INTEGER PhysicalAddress, ULONG SizeInBytes)
{
  __int64 v3; // rdi
  NTSTATUS result; // eax
  __int64 MemoryInternal; // rax
  ULONG_PTR v6; // rcx

  v3 = SizeInBytes;
  if ( !HalpTimerRegistrationAllowed )
    return -1073741431;
  MemoryInternal = HalpMmAllocateMemoryInternal(45, 1u);
  v6 = MemoryInternal;
  if ( !MemoryInternal )
    return -1073741801;
  *(_QWORD *)(MemoryInternal + 29) = 0LL;
  *(_QWORD *)(MemoryInternal + 37) = 0LL;
  *(_DWORD *)(MemoryInternal + 8) = 3;
  *(_BYTE *)(MemoryInternal + 12) = 33;
  *(LARGE_INTEGER *)(MemoryInternal + 13) = PhysicalAddress;
  *(_QWORD *)(MemoryInternal + 21) = v3;
  *(_QWORD *)MemoryInternal = HalpAddressUsageList;
  result = 0;
  HalpAddressUsageList = v6;
  return result;
}
