/*
 * XREFs of RtlpCSparseBitmapLock @ 0x1800F0770
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x18013FB40 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpCSparseBitmapLock(_RTL_SRWLOCK *a1, int a2, __int64 a3)
{
  _RTL_SRWLOCK *v5; // rcx

  v5 = a1 + 3;
  if ( a2 == 1 )
    RtlAcquireSRWLockExclusive(v5);
  else
    RtlAcquireSRWLockShared(v5);
  *(_QWORD *)(a3 + 8) = a1;
  *(_BYTE *)(a3 + 4) = -1;
  *(_DWORD *)a3 = a2;
}
