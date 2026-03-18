/*
 * XREFs of MiIsCalibrationWorthwhile @ 0x1402D1A6C
 * Callers:
 *     MiScheduleZeroPageThreads @ 0x1402D36A0 (MiScheduleZeroPageThreads.c)
 *     MiMergeCalibrationResults @ 0x1406938F4 (MiMergeCalibrationResults.c)
 *     MiZeroPageCalibrate @ 0x140693E8C (MiZeroPageCalibrate.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
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
    v8 = *(_QWORD *)(384LL * a3 + qword_140E2DAF8 + 376);
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
