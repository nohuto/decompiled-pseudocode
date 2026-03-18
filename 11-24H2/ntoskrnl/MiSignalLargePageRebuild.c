/*
 * XREFs of MiSignalLargePageRebuild @ 0x1402D34E0
 * Callers:
 *     MiWorkingSetManager @ 0x1402D3D20 (MiWorkingSetManager.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiNodeFreeZeroPages @ 0x1403D3160 (MiNodeFreeZeroPages.c)
 *     MiWakeLargePageRebuild @ 0x1403D3D0C (MiWakeLargePageRebuild.c)
 *     MiPageCombiningActive @ 0x140459878 (MiPageCombiningActive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiSignalLargePageRebuild(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v5; // rdx
  unsigned int i; // ebx
  __int64 v7; // rdi
  __int64 v8; // rdx
  unsigned __int64 v10; // r12
  unsigned __int8 v11; // r15
  unsigned __int64 j; // rsi
  unsigned __int64 v13; // r8
  __int64 *v14; // r10
  __int64 *v15; // r9
  __int64 v16; // r11
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx

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
          v10 = 0LL;
          v11 = 0;
          for ( j = (-(__int64)(*(_BYTE *)(v7 + 5187) != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000;
                v11 < (unsigned __int8)MmNumberOfChannels;
                ++v11 )
          {
            LOBYTE(v8) = v11;
            v10 += MiNodeFreeZeroPages(v7, v8, 0LL);
          }
          if ( v10 < j )
            goto LABEL_16;
          if ( (MiFlags & 0x30) == 0 )
            goto LABEL_16;
          v13 = 0LL;
          v14 = MiPageSizes;
          v15 = (__int64 *)(v7 + 16);
          v16 = 3LL;
          do
          {
            v17 = *(v15 - 1);
            v18 = *v15;
            v15 += 160;
            v19 = (v18 + v17) * *v14++;
            v13 += v19;
            --v16;
          }
          while ( v16 );
          if ( v13 >> 3 >= v10 || !(unsigned int)MiWakeLargePageRebuild(a1, i, 1LL) )
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
