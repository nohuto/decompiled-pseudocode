/*
 * XREFs of RtlpCSparseBitmapLock @ 0x1800F6210
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x180141950 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlpCSparseBitmapLock(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  volatile signed __int32 *v5; // rcx
  int v6; // edi
  __int64 result; // rax

  v5 = (volatile signed __int32 *)(a1 + 24);
  v6 = (int)a2;
  if ( (_DWORD)a2 == 1 )
    result = (__int64)RtlAcquireSRWLockExclusive(v5, a2, a3);
  else
    result = RtlAcquireSRWLockShared((volatile signed __int64 *)v5);
  *(_QWORD *)(a3 + 8) = a1;
  *(_BYTE *)(a3 + 4) = -1;
  *(_DWORD *)a3 = v6;
  return result;
}
