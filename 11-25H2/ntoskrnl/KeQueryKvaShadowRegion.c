/*
 * XREFs of KeQueryKvaShadowRegion @ 0x14040F9DC
 * Callers:
 *     MiCheckRelevantKernelShadows @ 0x14040F96C (MiCheckRelevantKernelShadows.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x1404102B0 (RtlSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall KeQueryKvaShadowRegion(__int64 a1, unsigned __int64 **a2, unsigned __int64 *a3)
{
  _IMAGE_NT_HEADERS64 *v3; // r9
  __int64 v6; // rcx
  KPCR *Pcr; // rax
  _DWORD *v9; // rdx
  PIMAGE_SECTION_HEADER v10; // rax
  unsigned int PhysicalAddress; // ecx
  unsigned int SizeOfRawData; // eax
  struct _KPRCB *CurrentPrcb; // rax

  v3 = 0LL;
  if ( a1 )
  {
    v6 = a1 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return 0LL;
      if ( 0x140000000LL != -1 && (_WORD)MEMORY[0x140000000] == 23117 )
      {
        v9 = (_DWORD *)(0x140000000LL + MEMORY[0x14000003C]);
        if ( (unsigned __int64)v9 >= 0x140000000LL
          && (0x140000000LL > 0x7FFFFFFEFFFFuLL
           || 0x140000107LL + (unsigned __int64)MEMORY[0x14000003C] >= 0x140000000LL
                                                                     + (unsigned __int64)MEMORY[0x14000003C]
           && 0x140000107LL + (unsigned __int64)MEMORY[0x14000003C] <= 0x7FFFFFFEFFFFLL)
          && *v9 == 17744 )
        {
          v3 = (_IMAGE_NT_HEADERS64 *)(0x140000000LL + MEMORY[0x14000003C]);
        }
      }
      v10 = RtlSectionTableFromVirtualAddress(
              v3,
              (PVOID)0x140000000LL,
              (unsigned int)KiDivideErrorFaultShadow - 0x40000000);
      *a2 = (unsigned __int64 *)(0x140000000LL + v10->VirtualAddress);
      PhysicalAddress = v10->Misc.PhysicalAddress;
      SizeOfRawData = v10->SizeOfRawData;
      if ( PhysicalAddress <= SizeOfRawData )
        PhysicalAddress = SizeOfRawData;
      *a3 = (PhysicalAddress + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      *a3 = 4096LL;
      *a2 = &CurrentPrcb->KernelDirectoryTableBase;
    }
  }
  else
  {
    Pcr = KeGetPcr();
    *a3 = 20480LL;
    *a2 = (unsigned __int64 *)&Pcr->NtTib.ExceptionList[-763];
  }
  return 1LL;
}
