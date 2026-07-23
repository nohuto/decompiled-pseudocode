/*
 * XREFs of RtlpHpLargeAllocSize @ 0x18002DC40
 * Callers:
 *     RtlpHpReallocComputeSizes @ 0x18002D720 (RtlpHpReallocComputeSizes.c)
 *     RtlpHpTagAllocateHeap @ 0x18002E060 (RtlpHpTagAllocateHeap.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 */

unsigned __int64 __fastcall RtlpHpLargeAllocSize(_RTL_SRWLOCK *a1, unsigned __int64 a2, int *a3)
{
  unsigned __int64 Value; // rdx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx

  RtlAcquireSRWLockShared(a1 + 8);
  Value = a1[10].Value;
  v7 = a1[9].Value;
  if ( (Value & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_18;
    v7 ^= (unsigned __int64)&a1[9];
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
      if ( (Value & 1) != 0 && v9 )
      {
        v7 ^= v9;
        continue;
      }
LABEL_9:
      v7 = v9;
      continue;
    }
    v9 = *(_QWORD *)v7;
    if ( (Value & 1) == 0 || !v9 )
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
  RtlReleaseSRWLockShared(a1 + 8);
  return v10;
}
