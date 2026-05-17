/*
 * XREFs of RtlpFlsClonePrepare @ 0x18014CC5C
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x180143040 (RtlLockHeapManagerForCloning.c)
 *     RtlCloneUserProcess @ 0x180160780 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x180160C40 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 */

struct _TEB *__fastcall RtlpFlsClonePrepare(__int64 a1)
{
  unsigned int v1; // esi
  unsigned int v3; // ebx
  unsigned int v4; // ebp
  __int64 v5; // r14
  int v6; // ecx
  __int64 v7; // r8
  volatile signed __int32 *v8; // rcx
  struct _TEB *result; // rax

  v1 = *(_DWORD *)(a1 + 88);
  v3 = 1;
  while ( 1 )
  {
    if ( v3 <= v1 )
    {
      v4 = v3 + 16;
      v5 = v1 - v3 + 1;
      v3 = v1 + 1;
      do
      {
        _BitScanReverse((unsigned int *)&v6, v4);
        v7 = *(_QWORD *)(a1 + 8LL * (unsigned int)(v6 - 4) + 8);
        if ( v7 )
          v8 = (volatile signed __int32 *)(v7 + 8 * ((v4 ^ (1 << v6)) + 2LL * (v4 ^ (1 << v6)) + 1));
        else
          v8 = 0LL;
        RtlAcquireSRWLockExclusive(v8);
        ++v4;
        --v5;
      }
      while ( v5 );
    }
    result = RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1);
    if ( *(_DWORD *)(a1 + 88) <= v1 )
      break;
    v1 = *(_DWORD *)(a1 + 88);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  }
  return result;
}
