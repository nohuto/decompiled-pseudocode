/*
 * XREFs of MiIsCalibrationWorthwhile @ 0x140490824
 * Callers:
 *     MiScheduleZeroPageThreads @ 0x140354918 (MiScheduleZeroPageThreads.c)
 *     MiMergeCalibrationResults @ 0x1406949C4 (MiMergeCalibrationResults.c)
 *     MiZeroPageCalibrate @ 0x140694F5C (MiZeroPageCalibrate.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall MiIsCalibrationWorthwhile(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v5; // r14d
  __int64 v8; // rbp
  volatile LONG *v9; // rcx
  KIRQL v10; // si

  v4 = 0;
  v5 = a4;
  if ( (_DWORD)a4 )
  {
    v10 = 17;
    v8 = 0LL;
  }
  else
  {
    v8 = *(_QWORD *)(384LL * (unsigned int)a3 + qword_140E2DC38 + 376);
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
  if ( !v5 )
    MiReleaseSpinLockShared((volatile signed __int32 *)(v8 + 64), v10, a3, a4);
  return v4;
}
