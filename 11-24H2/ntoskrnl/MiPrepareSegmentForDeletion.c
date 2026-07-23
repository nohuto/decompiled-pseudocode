/*
 * XREFs of MiPrepareSegmentForDeletion @ 0x1402703FC
 * Callers:
 *     MiSegmentDelete @ 0x140A0B944 (MiSegmentDelete.c)
 * Callees:
 *     MiDrainControlAreaWrites @ 0x1402704C4 (MiDrainControlAreaWrites.c)
 *     MiIncrementSubsectionViewCount @ 0x1402743B0 (MiIncrementSubsectionViewCount.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiRemoveUnusedSegment @ 0x14030303C (MiRemoveUnusedSegment.c)
 */

__int64 *__fastcall MiPrepareSegmentForDeletion(__int64 a1)
{
  ULONG_PTR v1; // rdi
  char v2; // al
  __int64 v3; // rbp
  volatile LONG *v5; // rcx
  __int64 v6; // rdx
  char v7; // r14
  __int64 *v8; // rdx
  __int64 **v9; // rbx
  __int64 *v10; // rsi
  __int64 *v11; // rcx

  v1 = a1 + 128;
  v2 = *(_DWORD *)(a1 + 56) & 0xA0;
  v3 = a1 + 72;
  v5 = (volatile LONG *)(a1 + 72);
  if ( v2 != (char)0x80 )
    v1 = 0LL;
  LOBYTE(v6) = ExAcquireSpinLockExclusive(v5);
  v7 = v6;
  MiDrainControlAreaWrites(a1, v6);
  MiRemoveUnusedSegment(a1);
  v9 = (__int64 **)(a1 + 80);
  v10 = 0LL;
  v11 = *v9;
  if ( *v9 )
  {
    do
    {
      v8 = (__int64 *)*v11;
      if ( (v11[1] & 1) != 0 )
      {
        *v11 = (__int64)v10;
        v10 = v11;
        *v9 = v8;
      }
      else
      {
        v9 = (__int64 **)v11;
      }
      v11 = v8;
    }
    while ( v8 );
  }
  while ( v1 )
  {
    MiIncrementSubsectionViewCount(v1);
    v1 = *(_QWORD *)(v1 + 16);
  }
  LOBYTE(v8) = v7;
  MiReleaseSpinLockExclusive(v3, v8);
  return v10;
}
