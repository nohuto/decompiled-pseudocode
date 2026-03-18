/*
 * XREFs of EtwpUpdateLoggerSecurityDescriptor @ 0x140A8DE24
 * Callers:
 *     EtwpUpdateTrace @ 0x140893BB4 (EtwpUpdateTrace.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14041D30C (ExfAcquireReleasePushLockExclusive.c)
 *     ObDereferenceSecurityDescriptor @ 0x14086EF20 (ObDereferenceSecurityDescriptor.c)
 *     EtwpEventWriteTemplateSession @ 0x1408940B0 (EtwpEventWriteTemplateSession.c)
 *     ObLogSecurityDescriptor @ 0x140899A00 (ObLogSecurityDescriptor.c)
 */

__int64 __fastcall EtwpUpdateLoggerSecurityDescriptor(__int64 a1, char *a2)
{
  int v3; // edi
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rcx
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v3 = ObLogSecurityDescriptor(a2, &v9, 0x10u);
  if ( v3 >= 0 )
  {
    v5 = _InterlockedExchange64((volatile __int64 *)(a1 + 784), (v9 | 0xF) & -(__int64)(v9 != 0));
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v8, 0);
    if ( (EtwpSecurityLock & 1) != 0 )
      ExfAcquireReleasePushLockExclusive(&EtwpSecurityLock);
    KeLeaveCriticalRegion();
    ObDereferenceSecurityDescriptor(v5 & 0xFFFFFFFFFFFFFFF0uLL, (v5 & 0xF) + 1);
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_CHANGE_SESSION_SD) )
      EtwpEventWriteTemplateSession(v7, &ETW_EVENT_CHANGE_SESSION_SD, a1);
  }
  return (unsigned int)v3;
}
