/*
 * XREFs of MmResetDriverPaging @ 0x140A3D910
 * Callers:
 *     DifMmResetDriverPagingWrapper @ 0x140634870 (DifMmResetDriverPagingWrapper.c)
 * Callees:
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1402C6EFC (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1402C72D8 (MmUnlockLoadedDataTableEntry.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x14043E310 (RtlImageNtHeader.c)
 *     MmImageSectionPagable @ 0x140A3E2EC (MmImageSectionPagable.c)
 *     MiCancelPhase0Locking @ 0x140A3E7C0 (MiCancelPhase0Locking.c)
 */

void __stdcall MmResetDriverPaging(PVOID AddressWithinSection)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  int v8; // ebx
  _DWORD *i; // rdi
  unsigned int v10; // edx
  __int64 v11; // r9
  ULONG_PTR PteAddress; // rax
  ULONG_PTR v13; // r8
  int v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = 0;
  if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)AddressWithinSection) )
  {
    v2 = MiLockLoadedDataTableEntryIfNecessary((__int64)AddressWithinSection, &v14);
    v3 = v2;
    if ( v2 )
    {
      if ( (dword_140FC41F4 & 1) == 0 )
      {
        v4 = *(_QWORD *)(v2 + 48);
        v5 = RtlImageNtHeader(v4);
        MiCancelPhase0Locking(v3);
        v6 = *(unsigned __int16 *)(v5 + 20);
        v7 = v5 + 24;
        v8 = *(unsigned __int16 *)(v5 + 6);
        for ( i = (_DWORD *)(v6 + v7); v8; --v8 )
        {
          if ( (i[9] & 0x2000000) == 0 && !(unsigned int)MmImageSectionPagable(i) )
          {
            v10 = i[4];
            if ( v10 < i[2] )
              v10 = i[2];
            MiGetPteAddress(v4 + i[3] + v10 - 1);
            PteAddress = MiGetPteAddress(v11 + v4);
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
