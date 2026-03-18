/*
 * XREFs of MiSignalLargePageRebuild @ 0x1403B3544
 * Callers:
 *     MiWorkingSetManager @ 0x1403B36E0 (MiWorkingSetManager.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiNodeFreeZeroPages @ 0x1403BCBB0 (MiNodeFreeZeroPages.c)
 *     MiWakeLargePageRebuild @ 0x1403BDA30 (MiWakeLargePageRebuild.c)
 *     MiNodeLargeFreeZeroPages @ 0x14042A8E0 (MiNodeLargeFreeZeroPages.c)
 *     MiPageCombiningActive @ 0x140458C94 (MiPageCombiningActive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiSignalLargePageRebuild(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int8 CurrentIrql; // bp
  unsigned int i; // ebx
  __int64 v7; // rdi
  __int64 v8; // rdx
  unsigned __int64 v10; // r15
  unsigned __int8 v11; // r12
  unsigned __int64 j; // r14
  __int64 v13; // r9

  result = *(unsigned int *)(a1 + 4);
  if ( (result & 0x10) == 0 )
  {
    result = MiPageCombiningActive(a1);
    if ( !(_DWORD)result )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v4) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v4);
      }
      for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
      {
        v7 = *(_QWORD *)(a1 + 16) + 57216LL * i;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 15228));
        if ( !*(_BYTE *)(v7 + 5185) && (*(_BYTE *)(v7 + 5184))-- == 1 )
        {
          v10 = 0LL;
          v11 = 0;
          for ( j = (-(__int64)(*(_BYTE *)(v7 + 5187) != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000;
                v11 < (unsigned __int8)MmNumberOfChannels;
                ++v11 )
          {
            LOBYTE(v8) = v11;
            v10 += MiNodeFreeZeroPages(v7, v8, 0LL);
          }
          if ( v10 < j
            || (MiFlags & 0x30) == 0
            || (LOBYTE(v8) = 2, (unsigned __int64)MiNodeLargeFreeZeroPages(v7, v8) >> 3 >= v10)
            || !(unsigned int)MiWakeLargePageRebuild(a1, i, 1LL, v13) )
          {
            *(_BYTE *)(v7 + 5186) = 8;
            *(_BYTE *)(v7 + 5184) = 8;
          }
        }
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 15228));
      }
      if ( KiIrqlFlags )
      {
        LOBYTE(v3) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
