/*
 * XREFs of RtlStdReleaseStackTrace @ 0x180025AC0
 * Callers:
 *     RtlInitializeResource @ 0x1800059E0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180006550 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlLogStackBackTraceEx @ 0x1800257CC (RtlLogStackBackTraceEx.c)
 *     RtlDeleteCriticalSection @ 0x1800B9240 (RtlDeleteCriticalSection.c)
 *     RtlReleaseStackTrace @ 0x18010D290 (RtlReleaseStackTrace.c)
 * Callees:
 *     RtlpStdLockAcquire @ 0x180025A78 (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x180025A98 (RtlpStdLockRelease.c)
 *     RtlpInterlockedPushEntrySList @ 0x180166FD0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall RtlStdReleaseStackTrace(__int64 a1, __int64 a2)
{
  int v4; // ebp
  unsigned int v5; // eax
  _DWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r14
  _WORD *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int16 v12; // cx
  _QWORD *i; // rcx

  v4 = 0;
  v5 = 0;
  if ( *(_WORD *)(a2 + 14) )
  {
    v6 = (_DWORD *)(a2 + 16);
    v7 = *(unsigned __int16 *)(a2 + 14);
    do
    {
      v5 += *v6;
      v6 += 2;
      --v7;
    }
    while ( v7 );
  }
  v8 = 16LL * (v5 % *(_DWORD *)(a1 + 720));
  RtlpStdLockAcquire((_RTL_SRWLOCK *)(v8 + a1 + 736));
  v9 = (_WORD *)(a2 + 8);
  if ( (*(_WORD *)(a2 + 8) & 0x7FF) != 0x7FF )
  {
    v12 = *v9 - 1;
    *v9 ^= (*v9 ^ v12) & 0x7FF;
    if ( (v12 & 0x7FF) == 0 )
    {
      for ( i = (_QWORD *)(v8 + a1 + 728); *i; i = (_QWORD *)*i )
      {
        if ( *i == a2 )
        {
          *i = *(_QWORD *)a2;
          goto LABEL_14;
        }
      }
      __debugbreak();
LABEL_14:
      v4 = 1;
      v9 = (_WORD *)(a2 + 8);
    }
  }
  RtlpStdLockRelease((_RTL_SRWLOCK *)(v8 + a1 + 736));
  if ( v4 )
  {
    RtlpInterlockedPushEntrySList(a1 + 16 * (((unsigned __int64)(unsigned __int16)*v9 >> 11) + 13), a2 + 16, v10, v11);
    _InterlockedAdd((volatile signed __int32 *)(a1 + 196), 1u);
  }
}
