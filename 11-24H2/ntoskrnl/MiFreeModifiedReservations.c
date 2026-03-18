/*
 * XREFs of MiFreeModifiedReservations @ 0x1404F8E8C
 * Callers:
 *     MiCheckFreeModifiedReservations @ 0x1402D00FC (MiCheckFreeModifiedReservations.c)
 *     MiPageFileNoFreeSpace @ 0x1404D0994 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall MiFreeModifiedReservations(__int64 a1, int a2, __int64 a3)
{
  __int16 v3; // ax
  __int64 v5; // rdx
  __int64 v6; // rbp
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  ULONG_PTR v9; // rdi
  unsigned __int8 v10; // al
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbx
  __int64 v13; // [rsp+50h] [rbp+8h]

  v3 = *(_WORD *)(a1 + 172);
  v5 = *(_QWORD *)(a1 + 216);
  v13 = v5;
  if ( (v3 & 0x40) == 0 )
  {
    v6 = v5 + 88 * ((v3 & 0xF) + 48LL);
    v7 = 0LL;
    while ( 1 )
    {
      v8 = *(_QWORD *)(v6 + 16);
      if ( v8 == 0x3FFFFFFFFFLL )
        break;
      v9 = 48 * v8 - 0x220000000000LL;
      v10 = MiSafeLockPage(*(_QWORD *)(v6 + 16), v5, a3);
      v11 = v10;
      if ( v10 != 17 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v6 + 32));
        if ( v8 == *(_QWORD *)(v6 + 16) )
        {
          MiUnlinkPageFromListEx(48 * v8 - 0x220000000000LL, 1);
          v12 = *(_QWORD *)(v9 + 16);
          *(_QWORD *)(v9 + 16) = v12 & 0xFFFFFFFFFFFFFFFDuLL;
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 32));
          MiInsertPageInList(v9, 8u);
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiReleasePageFileInfo(v13, v12, 1LL);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
          __writecr8(v11);
          ++v7;
          if ( !a2 && v7 >= 0x10000 )
            return;
        }
        else
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 32));
          MiUnlockPage(48 * v8 - 0x220000000000LL, v11);
        }
      }
    }
  }
}
