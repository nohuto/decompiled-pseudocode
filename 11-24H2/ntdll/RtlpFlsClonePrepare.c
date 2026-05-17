/*
 * XREFs of RtlpFlsClonePrepare @ 0x18014B6AC
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x180141950 (RtlLockHeapManagerForCloning.c)
 *     RtlCloneUserProcess @ 0x18015F270 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x18015F730 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

struct _TEB *__fastcall RtlpFlsClonePrepare(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  unsigned int v3; // esi
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  __int64 v7; // r14
  unsigned int v8; // ecx
  volatile signed __int32 **v9; // rdx
  unsigned __int64 v10; // r8
  volatile signed __int32 *v11; // rcx
  struct _TEB *result; // rax

  v3 = *(_DWORD *)(a1 + 88);
  v5 = 1;
  while ( 1 )
  {
    if ( v5 <= v3 )
    {
      v6 = v5 + 16;
      v7 = v3 - v5 + 1;
      v5 = v3 + 1;
      do
      {
        _BitScanReverse(&v8, v6);
        v9 = (volatile signed __int32 **)(v6 ^ (1 << v8));
        v10 = *(_QWORD *)(a1 + 8LL * (v8 - 4) + 8);
        if ( v10 )
          v11 = (volatile signed __int32 *)(v10 + 8 * ((unsigned int)v9 + 2LL * (_QWORD)v9 + 1));
        else
          v11 = 0LL;
        RtlAcquireSRWLockExclusive(v11, v9, v10);
        ++v6;
        --v7;
      }
      while ( v7 );
    }
    result = RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1, a2, a3);
    if ( *(_DWORD *)(a1 + 88) <= v3 )
      break;
    v3 = *(_DWORD *)(a1 + 88);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  }
  return result;
}
