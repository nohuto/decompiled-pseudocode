/*
 * XREFs of RtlpHpLargeAllocSize @ 0x1800A4170
 * Callers:
 *     RtlpHpReallocComputeSizes @ 0x1800A3D30 (RtlpHpReallocComputeSizes.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 */

unsigned __int64 __fastcall RtlpHpLargeAllocSize(__int64 a1, unsigned __int64 a2, int *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rbx

  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 64));
  v6 = *(_QWORD *)(a1 + 80);
  v7 = *(_QWORD *)(a1 + 72);
  if ( (v6 & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_18;
    v7 ^= a1 + 72;
  }
  if ( !v7 )
  {
LABEL_18:
    v10 = -1LL;
    goto LABEL_15;
  }
  do
  {
    v8 = *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 >= v8 )
    {
      if ( a2 <= v8 )
        break;
      v9 = *(_QWORD *)(v7 + 8);
      if ( (v6 & 1) != 0 && v9 )
      {
        v7 ^= v9;
        continue;
      }
LABEL_9:
      v7 = v9;
      continue;
    }
    v9 = *(_QWORD *)v7;
    if ( (v6 & 1) == 0 || !v9 )
      goto LABEL_9;
    v7 ^= v9;
  }
  while ( v7 );
  if ( !v7 )
    goto LABEL_18;
  if ( a3 )
    *a3 = *(_DWORD *)(v7 + 32) & 1;
  v10 = (*(_QWORD *)(v7 + 32) & 0xFFFFFFFFFFFFF000uLL) - *(unsigned __int16 *)(v7 + 24);
LABEL_15:
  RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 64));
  return v10;
}
