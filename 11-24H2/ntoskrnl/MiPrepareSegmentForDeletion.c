/*
 * XREFs of MiPrepareSegmentForDeletion @ 0x140416EDC
 * Callers:
 *     MiSegmentDelete @ 0x140A131E4 (MiSegmentDelete.c)
 * Callees:
 *     MiRemoveUnusedSegment @ 0x14022F72C (MiRemoveUnusedSegment.c)
 *     MiIncrementSubsectionViewCount @ 0x1402624F0 (MiIncrementSubsectionViewCount.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiDrainControlAreaWrites @ 0x140416FA4 (MiDrainControlAreaWrites.c)
 */

__int64 *__fastcall MiPrepareSegmentForDeletion(__int64 a1)
{
  __int64 *v1; // rdi
  char v2; // al
  _DWORD *v3; // rbp
  volatile LONG *v5; // rcx
  __int64 v6; // rdx
  unsigned __int8 v7; // r14
  __int64 **v8; // rbx
  __int64 *v9; // rsi
  __int64 *v10; // rcx
  __int64 *v12; // rdx

  v1 = (__int64 *)(a1 + 128);
  v2 = *(_DWORD *)(a1 + 56) & 0xA0;
  v3 = (_DWORD *)(a1 + 72);
  v5 = (volatile LONG *)(a1 + 72);
  if ( v2 != (char)0x80 )
    v1 = 0LL;
  LOBYTE(v6) = ExAcquireSpinLockExclusive(v5);
  v7 = v6;
  MiDrainControlAreaWrites(a1, v6);
  MiRemoveUnusedSegment(a1);
  v8 = (__int64 **)(a1 + 80);
  v9 = 0LL;
  v10 = *v8;
  if ( *v8 )
  {
    do
    {
      v12 = (__int64 *)*v10;
      if ( (v10[1] & 1) != 0 )
      {
        *v10 = (__int64)v9;
        v9 = v10;
        *v8 = v12;
      }
      else
      {
        v8 = (__int64 **)v10;
      }
      v10 = v12;
    }
    while ( v12 );
  }
  while ( v1 )
  {
    MiIncrementSubsectionViewCount(v1, 0);
    v1 = (__int64 *)v1[2];
  }
  MiReleaseSpinLockExclusive(v3, v7);
  return v9;
}
