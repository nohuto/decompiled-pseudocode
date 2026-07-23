/*
 * XREFs of EtwRegisterEventCallback @ 0x1407AD380
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140929090 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140945104 (EtwpReleaseLoggerContext.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwRegisterEventCallback(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  unsigned int v7; // r9d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdi
  _QWORD *Pool2; // rax

  v4 = 0;
  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  if ( !v5 || v5 != qword_140FC7448 )
    return 3221225506LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = EtwpAcquireLoggerContextByLoggerId(Flink, v7, 0LL);
  if ( v9 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x10uLL, 0x43777445u);
    if ( Pool2 )
    {
      Pool2[1] = a3;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 1552), (signed __int64)Pool2, 0LL) )
      {
        v4 = -1073741811;
        ExFreePoolWithTag(Pool2, 0);
      }
    }
    else
    {
      v4 = -1073741670;
    }
    EtwpReleaseLoggerContext(v9, 0LL);
  }
  else
  {
    v4 = -1073741162;
  }
  KeLeaveCriticalRegion();
  return v4;
}
