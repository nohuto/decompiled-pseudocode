/*
 * XREFs of MiSignalLargePageRebuild @ 0x140354758
 * Callers:
 *     MiWorkingSetManager @ 0x140354FA0 (MiWorkingSetManager.c)
 * Callees:
 *     MiWakeLargePageRebuild @ 0x140261C8C (MiWakeLargePageRebuild.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiNodeFreeZeroPages @ 0x14033FC00 (MiNodeFreeZeroPages.c)
 *     MiPageCombiningActive @ 0x14044E5A8 (MiPageCombiningActive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiSignalLargePageRebuild(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v5; // rdx
  unsigned int i; // ebx
  __int64 v7; // rdi
  unsigned __int64 v9; // r12
  unsigned __int8 v10; // r15
  unsigned __int64 j; // rsi
  unsigned __int64 v12; // r8
  __int64 *v13; // r10
  __int64 *v14; // r9
  __int64 v15; // r11
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx

  result = *(unsigned int *)(a1 + 4);
  if ( (result & 0x10) == 0 )
  {
    result = MiPageCombiningActive(a1);
    if ( !(_DWORD)result )
    {
      CurrentIrql = KeGetCurrentIrql();
      v5 = 2LL;
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v3) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v3, 2LL);
      }
      for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
      {
        v7 = *(_QWORD *)(a1 + 16) + 57216LL * i;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 15228));
        if ( !*(_BYTE *)(v7 + 5185) && (*(_BYTE *)(v7 + 5184))-- == 1 )
        {
          v9 = 0LL;
          v10 = 0;
          for ( j = (-(__int64)(*(_BYTE *)(v7 + 5187) != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000;
                v10 < (unsigned __int8)MmNumberOfChannels;
                ++v10 )
          {
            v9 += MiNodeFreeZeroPages(v7, v10, 0);
          }
          if ( v9 < j )
            goto LABEL_16;
          if ( (MiFlags & 0x30) == 0 )
            goto LABEL_16;
          v12 = 0LL;
          v13 = MiPageSizes;
          v14 = (__int64 *)(v7 + 16);
          v15 = 3LL;
          do
          {
            v16 = *(v14 - 1);
            v17 = *v14;
            v14 += 160;
            v18 = (v17 + v16) * *v13++;
            v12 += v18;
            --v15;
          }
          while ( v15 );
          if ( v12 >> 3 >= v9 || !(unsigned int)MiWakeLargePageRebuild(a1, i, 1) )
          {
LABEL_16:
            *(_BYTE *)(v7 + 5186) = 8;
            *(_BYTE *)(v7 + 5184) = 8;
          }
        }
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 15228));
      }
      if ( KiIrqlFlags )
      {
        LOBYTE(v5) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
