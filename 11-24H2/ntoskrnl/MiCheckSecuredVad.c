/*
 * XREFs of MiCheckSecuredVad @ 0x1408DBE18
 * Callers:
 *     MiFindPlaceholderVadToReplace @ 0x1403C6CE0 (MiFindPlaceholderVadToReplace.c)
 *     MiResetVirtualMemory @ 0x1404388A4 (MiResetVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x140896E14 (MiUnmapViewOfSection.c)
 *     MiFreeVirtualMemory @ 0x1408D9E68 (MiFreeVirtualMemory.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408DA56C (MiCoalescePlaceholderAllocations.c)
 *     MmProtectVirtualMemory @ 0x1408DAC60 (MmProtectVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1408DBBC8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiCommitFileBackedSection @ 0x1409147D8 (MiCommitFileBackedSection.c)
 *     MiAllocateVirtualMemory @ 0x1409160F0 (MiAllocateVirtualMemory.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140A59F24 (MiUnmapLockedPagesInUserSpace.c)
 * Callees:
 *     MiGetVadPageSize @ 0x14041B130 (MiGetVadPageSize.c)
 *     MiComparePteProtections @ 0x140440114 (MiComparePteProtections.c)
 */

__int64 __fastcall MiCheckSecuredVad(
        ULONG_PTR a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        __int64 a6)
{
  __int64 v9; // r10
  unsigned __int64 v10; // r13
  unsigned int v11; // r9d
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rbp
  unsigned int v14; // r15d
  unsigned __int64 i; // rdi
  int v16; // edx
  unsigned __int64 v17; // rcx
  __int64 result; // rax
  char v19; // cl
  bool v20; // cc

  v9 = 4096LL;
  if ( (*(_DWORD *)(a1 + 48) & 0xA00000) == 0xA00000 )
    v9 = MiGetVadPageSize(a1) << 12;
  v10 = a2 + a3 - 1;
  v11 = 0;
  v12 = a2 & ~(v9 - 1);
  v13 = (~(v9 - 1) & (v9 + v10)) - 1;
  if ( v12 < (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12
    || v13 > (((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF) )
  {
    return 3221225541LL;
  }
  v14 = a4 < 0x55 ? a4 : 0;
  for ( i = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL; i; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 80) == 2 && i != a6 )
    {
      v16 = *(_DWORD *)(i + 8);
      if ( ((v16 & 0x40) == 0 || a5 == 1)
        && v12 <= *(_QWORD *)(i + 16)
        && v13 >= (*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFF000uLL) )
      {
        if ( a4 >= 0x55 && (v16 & 8) != 0 )
          return 3221225541LL;
        if ( (*(_DWORD *)(a1 + 48) & 0x14200000) == 270532608 && (*(_DWORD *)(i + 8) & 0x100) != 0 )
        {
          if ( (a4 | 0x10) != 0x11
            || (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) == a2 >> 12
            || (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) == v10 >> 12 )
          {
            return 3221225541LL;
          }
        }
        else if ( (v16 & 4) != 0 )
        {
          if ( a4 < 0x55 )
          {
            v17 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
            if ( (v17 == 2147352576 || v17 == qword_140E2DBB8 && qword_140E2DBB8)
              && (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
            {
              return 3221225541LL;
            }
            result = MiComparePteProtections(a1, a2, v10, a4, 1);
            v11 = result;
            if ( (int)result < 0 )
              return result;
          }
        }
        else
        {
          if ( (v14 & 0xFFFFFFF8) == 0x10 )
            return 3221225541LL;
          v19 = *((_BYTE *)MiReadWrite + (v14 & 7));
          if ( (v16 & 1) != 0 )
          {
            v20 = v19 < 10;
          }
          else
          {
            if ( (v16 & 2) == 0 )
              continue;
            v20 = v19 < 11;
          }
          if ( v20 )
            return 3221225541LL;
        }
      }
    }
  }
  return v11;
}
