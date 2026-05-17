/*
 * XREFs of RtlpCSparseBitmapLock @ 0x1800F7D90
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x180143040 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 */

__int64 __fastcall RtlpCSparseBitmapLock(__int64 a1, int a2, __int64 a3)
{
  volatile signed __int32 *v5; // rcx
  __int64 result; // rax

  v5 = (volatile signed __int32 *)(a1 + 24);
  if ( a2 == 1 )
    result = (__int64)RtlAcquireSRWLockExclusive(v5);
  else
    result = RtlAcquireSRWLockShared((volatile signed __int64 *)v5);
  *(_QWORD *)(a3 + 8) = a1;
  *(_BYTE *)(a3 + 4) = -1;
  *(_DWORD *)a3 = a2;
  return result;
}
