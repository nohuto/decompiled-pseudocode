/*
 * XREFs of EtwpUpdateLoggerSecurityDescriptor @ 0x140A9290C
 * Callers:
 *     EtwpUpdateTrace @ 0x14083311C (EtwpUpdateTrace.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140418A5C (ExfAcquireReleasePushLockExclusive.c)
 *     EtwpEventWriteTemplateSession @ 0x140833614 (EtwpEventWriteTemplateSession.c)
 *     ObLogSecurityDescriptor @ 0x140838F50 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x140879D10 (ObDereferenceSecurityDescriptor.c)
 */

__int64 __fastcall EtwpUpdateLoggerSecurityDescriptor(__int64 a1, __int16 *a2)
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
