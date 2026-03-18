/*
 * XREFs of CreateTlgAggregateSession @ 0x1402C415C
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1402C405C (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     memset @ 0x14023F500 (memset.c)
 *     DestroyAggregateSession @ 0x1402C35B0 (DestroyAggregateSession.c)
 */

_QWORD *__fastcall CreateTlgAggregateSession(char a1, char a2)
{
  _QWORD *PoolWithTag; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rbx
  char *v8; // rax
  char *v9; // rdi
  _QWORD *v10; // rax
  __int64 Timer; // rax

  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a1 != 0 ? PagedPool : 512), 0x178uLL, 0x47417254u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_9;
  memset(PoolWithTag, 0, 0x178uLL);
  v7[34] = 0LL;
  if ( a2 || !a1 )
  {
    v8 = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x40uLL, 0x47417254u);
    v9 = v8;
    if ( v8 )
      memset(v8, 0, 0x40uLL);
    v7[33] = v9;
    if ( !v9 )
      goto LABEL_9;
    KeInitializeEvent((PRKEVENT)(v9 + 32), NotificationEvent, 0);
    v10 = (_QWORD *)v7[33];
    v10[2] = TlgAggregateInternalFlushWorkItemRoutineKernelMode;
    v10[3] = v7;
    *v10 = 0LL;
    *(_WORD *)(v7[33] + 56LL) = 0;
    if ( a2 )
    {
      Timer = ExAllocateTimer(TlgAggregateInternalFlushTimerCallbackKernelMode, v7[33], 8LL);
      v7[45] = Timer;
      if ( !Timer )
      {
LABEL_9:
        DestroyAggregateSession(v7, v5, v6);
        return 0LL;
      }
    }
  }
  return v7;
}
