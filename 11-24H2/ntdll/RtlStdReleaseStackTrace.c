/*
 * XREFs of RtlStdReleaseStackTrace @ 0x18009CB10
 * Callers:
 *     RtlDeleteCriticalSection @ 0x18008FEC0 (RtlDeleteCriticalSection.c)
 *     RtlInitializeResource @ 0x18009A370 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18009AEE0 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlLogStackBackTraceEx @ 0x18009C824 (RtlLogStackBackTraceEx.c)
 *     RtlReleaseStackTrace @ 0x18010AB00 (RtlReleaseStackTrace.c)
 * Callees:
 *     RtlpStdLockAcquire @ 0x18009CAC8 (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x18009CAE8 (RtlpStdLockRelease.c)
 *     RtlpInterlockedPushEntrySList @ 0x180165A40 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall RtlStdReleaseStackTrace(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v5; // ebp
  unsigned int v6; // eax
  _DWORD *v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // edx
  __int64 v10; // r14
  _WORD *v11; // rsi
  __int64 result; // rax
  __int16 v13; // cx
  _QWORD *i; // rcx

  v5 = 0;
  v6 = 0;
  if ( *(_WORD *)(a2 + 14) )
  {
    v7 = (_DWORD *)(a2 + 16);
    v8 = *(unsigned __int16 *)(a2 + 14);
    do
    {
      v6 += *v7;
      v7 += 2;
      --v8;
    }
    while ( v8 );
  }
  v9 = v6 % *(_DWORD *)(a1 + 720);
  v10 = 16LL * v9;
  RtlpStdLockAcquire((volatile signed __int32 *)(v10 + a1 + 736), (volatile signed __int32 **)v9, a3);
  v11 = (_WORD *)(a2 + 8);
  if ( (*(_WORD *)(a2 + 8) & 0x7FF) != 0x7FF )
  {
    v13 = *v11 - 1;
    *v11 ^= (*v11 ^ v13) & 0x7FF;
    if ( (v13 & 0x7FF) == 0 )
    {
      for ( i = (_QWORD *)(v10 + a1 + 728); *i; i = (_QWORD *)*i )
      {
        if ( *i == a2 )
        {
          *i = *(_QWORD *)a2;
          goto LABEL_14;
        }
      }
      __debugbreak();
LABEL_14:
      v5 = 1;
      v11 = (_WORD *)(a2 + 8);
    }
  }
  result = RtlpStdLockRelease((volatile signed __int64 *)(v10 + a1 + 736));
  if ( v5 )
  {
    result = RtlpInterlockedPushEntrySList(a1 + 16 * (((unsigned __int64)(unsigned __int16)*v11 >> 11) + 13), a2 + 16);
    _InterlockedAdd((volatile signed __int32 *)(a1 + 196), 1u);
  }
  return result;
}
