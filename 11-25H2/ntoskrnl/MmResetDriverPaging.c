/*
 * XREFs of MmResetDriverPaging @ 0x140A395F0
 * Callers:
 *     DifMmResetDriverPagingWrapper @ 0x1406288B0 (DifMmResetDriverPagingWrapper.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x14036DE9C (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MmUnlockLoadedDataTableEntry @ 0x14036E278 (MmUnlockLoadedDataTableEntry.c)
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     MmImageSectionPagable @ 0x140A39FCC (MmImageSectionPagable.c)
 *     MiCancelPhase0Locking @ 0x140A3A4A0 (MiCancelPhase0Locking.c)
 */

void __stdcall MmResetDriverPaging(PVOID AddressWithinSection)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  void *v4; // rbp
  PIMAGE_NT_HEADERS v5; // rbx
  __int64 SizeOfOptionalHeader; // rcx
  _IMAGE_OPTIONAL_HEADER64 *p_OptionalHeader; // rdi
  int NumberOfSections; // ebx
  _DWORD *i; // rdi
  unsigned int v10; // edx
  __int64 v11; // r9
  volatile signed __int64 *PteAddress; // rax
  unsigned __int64 v13; // r8
  int v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = 0;
  if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)AddressWithinSection) )
  {
    v2 = MiLockLoadedDataTableEntryIfNecessary((__int64)AddressWithinSection, &v14);
    v3 = v2;
    if ( v2 )
    {
      if ( (dword_140FC41E4 & 1) == 0 )
      {
        v4 = *(void **)(v2 + 48);
        v5 = RtlImageNtHeader(v4);
        MiCancelPhase0Locking(v3);
        SizeOfOptionalHeader = v5->FileHeader.SizeOfOptionalHeader;
        p_OptionalHeader = &v5->OptionalHeader;
        NumberOfSections = v5->FileHeader.NumberOfSections;
        for ( i = (_DWORD *)((char *)&p_OptionalHeader->Magic + SizeOfOptionalHeader); NumberOfSections; --NumberOfSections )
        {
          if ( (i[9] & 0x2000000) == 0 && !(unsigned int)MmImageSectionPagable(i) )
          {
            v10 = i[4];
            if ( v10 < i[2] )
              v10 = i[2];
            MiGetPteAddress((unsigned __int64)v4 + i[3] + v10 - 1);
            PteAddress = (volatile signed __int64 *)MiGetPteAddress((unsigned __int64)v4 + v11);
            MiLockCode(v3, PteAddress, v13, 2);
          }
          i += 10;
        }
      }
      if ( v14 )
        MmUnlockLoadedDataTableEntry(v3);
    }
  }
}
