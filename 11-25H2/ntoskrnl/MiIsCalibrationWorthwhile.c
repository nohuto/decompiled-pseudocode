/*
 * XREFs of MiIsCalibrationWorthwhile @ 0x1403B7024
 * Callers:
 *     MiScheduleZeroPageThreads @ 0x1403B582C (MiScheduleZeroPageThreads.c)
 *     MiMergeCalibrationResults @ 0x140688494 (MiMergeCalibrationResults.c)
 *     MiZeroPageCalibrate @ 0x140688A2C (MiZeroPageCalibrate.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140323610 (MiReleaseSpinLockShared.c)
 */

__int64 __fastcall MiIsCalibrationWorthwhile(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rbp
  volatile LONG *v9; // rcx
  KIRQL v10; // si

  v4 = 0;
  if ( a4 )
  {
    v10 = 17;
    v8 = 0LL;
  }
  else
  {
    v8 = *(_QWORD *)(384LL * a3 + qword_140E2D8B8 + 376);
    v9 = (volatile LONG *)(v8 + 64);
    if ( KeGetCurrentIrql() == 2 )
    {
      v10 = 17;
      ExAcquireSpinLockSharedAtDpcLevel(v9);
    }
    else
    {
      v10 = ExAcquireSpinLockShared(v9);
    }
  }
  if ( !*(_BYTE *)(a1 + 5)
    || (!*(_BYTE *)(a1 + 6) || !*(_BYTE *)(a1 + 7))
    && (!*(_DWORD *)(a1 + 32)
     || !*(_DWORD *)(a1 + 36)
     || !*(_DWORD *)(a1 + 40)
     || !*(_DWORD *)(a1 + 44)
     || a2 > *(_DWORD *)a1) )
  {
    v4 = 1;
  }
  if ( !a4 )
    MiReleaseSpinLockShared((volatile signed __int32 *)(v8 + 64), v10);
  return v4;
}
