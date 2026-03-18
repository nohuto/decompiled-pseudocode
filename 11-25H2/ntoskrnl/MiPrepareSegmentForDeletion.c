/*
 * XREFs of MiPrepareSegmentForDeletion @ 0x140418F34
 * Callers:
 *     MiSegmentDelete @ 0x140A095FC (MiSegmentDelete.c)
 * Callees:
 *     MiRemoveUnusedSegment @ 0x140218D9C (MiRemoveUnusedSegment.c)
 *     MiIncrementSubsectionViewCount @ 0x1402A7470 (MiIncrementSubsectionViewCount.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiDrainControlAreaWrites @ 0x140419008 (MiDrainControlAreaWrites.c)
 */

__int64 *__fastcall MiPrepareSegmentForDeletion(__int64 a1)
{
  int v1; // eax
  __int64 *v3; // rbx
  _DWORD *v4; // rbp
  __int64 v5; // rdx
  unsigned __int8 v6; // r14
  __int64 **v7; // rdi
  __int64 *v8; // rsi
  __int64 *v9; // rcx
  __int64 *v11; // rdx

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x80u) == 0 || (v1 & 0x20) != 0 )
    v3 = 0LL;
  else
    v3 = (__int64 *)(a1 + 128);
  v4 = (_DWORD *)(a1 + 72);
  LOBYTE(v5) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v6 = v5;
  MiDrainControlAreaWrites(a1, v5);
  MiRemoveUnusedSegment(a1);
  v7 = (__int64 **)(a1 + 80);
  v8 = 0LL;
  v9 = *v7;
  if ( *v7 )
  {
    do
    {
      v11 = (__int64 *)*v9;
      if ( (v9[1] & 1) != 0 )
      {
        *v9 = (__int64)v8;
        v8 = v9;
        *v7 = v11;
      }
      else
      {
        v7 = (__int64 **)v9;
      }
      v9 = v11;
    }
    while ( v11 );
  }
  while ( v3 )
  {
    MiIncrementSubsectionViewCount(v3, 0);
    v3 = (__int64 *)v3[2];
  }
  MiReleaseSpinLockExclusive(v4, v6);
  return v8;
}
