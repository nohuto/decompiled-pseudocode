/*
 * XREFs of IopLiveDumpDiscardVirtualAddressRange @ 0x1402AA064
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x14049A634 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAddProcessFilter @ 0x140594838 (IopLiveDumpAddProcessFilter.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140594BE0 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x1405952CC (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x14059561C (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpAllocateIptBuffers @ 0x140595EC4 (IopLiveDumpAllocateIptBuffers.c)
 * Callees:
 *     RtlClearBitsEx @ 0x1402A9FB0 (RtlClearBitsEx.c)
 *     MmIsAddressValidEx @ 0x1402AA5A0 (MmIsAddressValidEx.c)
 *     MmGetPhysicalAddress @ 0x1402AB2E0 (MmGetPhysicalAddress.c)
 */

void __fastcall IopLiveDumpDiscardVirtualAddressRange(__int64 a1, char *a2, unsigned __int64 a3)
{
  char *v3; // rbx
  unsigned __int64 i; // rdi
  PHYSICAL_ADDRESS v6; // rax

  if ( a3 )
  {
    v3 = a2;
    if ( a2 )
    {
      for ( i = (a3 >> 12) + ((a3 & 0xFFF) != 0); i; --i )
      {
        if ( (unsigned __int8)MmIsAddressValidEx(v3) )
        {
          v6.QuadPart = (unsigned __int64)MmGetPhysicalAddress(v3).QuadPart >> 12;
          if ( v6.QuadPart < *(_QWORD *)(a1 + 576) )
            RtlClearBitsEx(a1 + 576, v6.QuadPart, 1uLL);
        }
        v3 += 4096;
      }
    }
  }
}
