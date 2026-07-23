/*
 * XREFs of KiUnshadowKernelSectionByAddress @ 0x1405C10E4
 * Callers:
 *     KiShadowProcessorAllocation @ 0x140B5CA8C (KiShadowProcessorAllocation.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x1402EEF90 (RtlSectionTableFromVirtualAddress.c)
 *     RtlImageNtHeaderEx @ 0x140414520 (RtlImageNtHeaderEx.c)
 *     MmDeleteShadowMapping @ 0x1407F7110 (MmDeleteShadowMapping.c)
 */

__int64 KiUnshadowKernelSectionByAddress()
{
  PIMAGE_SECTION_HEADER v0; // rax
  unsigned int PhysicalAddress; // edx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp+8h] BYREF

  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, (PVOID)0x140000000LL, 0LL, &OutHeaders);
  v0 = RtlSectionTableFromVirtualAddress(
         OutHeaders,
         (PVOID)0x140000000LL,
         (unsigned int)KiDivideErrorFaultShadow - 0x40000000);
  PhysicalAddress = v0->Misc.PhysicalAddress;
  if ( PhysicalAddress <= v0->SizeOfRawData )
    PhysicalAddress = v0->SizeOfRawData;
  return MmDeleteShadowMapping(0x140000000LL + v0->VirtualAddress, (PhysicalAddress + 4095) & 0xFFFFF000);
}
