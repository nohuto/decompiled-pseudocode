/*
 * XREFs of RtlpCSparseBitmapLock @ 0x1800F7D90
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x180143040 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
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
