/*
 * XREFs of MiFreeModifiedReservations @ 0x1404F676C
 * Callers:
 *     MiPageFileNoFreeSpace @ 0x14046F624 (MiPageFileNoFreeSpace.c)
 *     MiCheckFreeModifiedReservations @ 0x14046FF1C (MiCheckFreeModifiedReservations.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall MiFreeModifiedReservations(__int64 a1, int a2)
{
  __int16 v2; // ax
  __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r15
  __int64 v7; // rbx
  ULONG_PTR v8; // rdi
  unsigned __int8 v9; // al
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rbx
  __int64 v12; // r9
  __int64 v13; // [rsp+50h] [rbp+8h]

  v2 = *(_WORD *)(a1 + 172);
  v13 = *(_QWORD *)(a1 + 216);
  if ( (v2 & 0x40) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 216) + 88 * ((v2 & 0xF) + 48LL);
    v5 = a2 == 0 ? 0x10000 : 0;
    v6 = 0LL;
    while ( 1 )
    {
      v7 = *(_QWORD *)(v4 + 16);
      if ( v7 == 0x3FFFFFFFFFLL )
        break;
      v8 = 48 * v7 - 0x220000000000LL;
      v9 = MiSafeLockPage(*(_QWORD *)(v4 + 16));
      v10 = v9;
      if ( v9 != 17 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 32));
        if ( v7 == *(_QWORD *)(v4 + 16) )
        {
          MiUnlinkPageFromListEx(48 * v7 - 0x220000000000LL, 1);
          v11 = *(_QWORD *)(v8 + 16);
          *(_QWORD *)(v8 + 16) = v11 & 0xFFFFFFFFFFFFFFFDuLL;
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 32));
          MiInsertPageInList(v8, 8u);
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiReleasePageFileInfo(v13, v11, 1LL, v12);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
          __writecr8(v10);
          ++v6;
          if ( !a2 && v6 >= v5 )
            return;
        }
        else
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 32));
          MiUnlockPage(48 * v7 - 0x220000000000LL, v10);
        }
      }
    }
  }
}
