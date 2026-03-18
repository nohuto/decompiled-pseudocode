/*
 * XREFs of PsGetNextSession @ 0x140AA4550
 * Callers:
 *     PsQueryCpuQuotaInformation @ 0x1405E4E1C (PsQueryCpuQuotaInformation.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x14074CA54 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x140753B34 (PopSendSuspendResumeApplicationNotification.c)
 *     PsPerfLogSessionRundown @ 0x14077B980 (PsPerfLogSessionRundown.c)
 *     PfpProcessScenarioPhase @ 0x14093289C (PfpProcessScenarioPhase.c)
 *     PopInvokeWin32Callout @ 0x1409BE358 (PopInvokeWin32Callout.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockProcessListExclusive @ 0x1403494CC (PspUnlockProcessListExclusive.c)
 *     PsGetCurrentServerSilo @ 0x140349A50 (PsGetCurrentServerSilo.c)
 *     PspLockProcessListExclusive @ 0x140349ACC (PspLockProcessListExclusive.c)
 *     PspSelectSessionAttachProcess @ 0x140A19C04 (PspSelectSessionAttachProcess.c)
 */

_QWORD *__fastcall PsGetNextSession(_QWORD *Object)
{
  _QWORD *v2; // rbp
  unsigned __int64 CurrentServerSilo; // r15
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v6; // rbx
  _QWORD *v8; // rax

  v2 = 0LL;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( Object )
    v4 = Object[93];
  else
    v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PspLockProcessListExclusive((__int64)CurrentThread);
  if ( v4 )
  {
    v6 = *(__int64 **)(v4 + 80);
LABEL_14:
    while ( v6 != &PsActiveSessionHead )
    {
      v8 = PspSelectSessionAttachProcess((__int64)(v6 - 10));
      v2 = v8;
      if ( v8 )
      {
        if ( !CurrentServerSilo || v6[10] == CurrentServerSilo )
          break;
        ObfDereferenceObjectWithTag(v8, 0x79517350u);
        v2 = 0LL;
      }
      v6 = (__int64 *)*v6;
    }
    PspUnlockProcessListExclusive((__int64)CurrentThread);
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
    return v2;
  }
  else
  {
    v6 = (__int64 *)PsActiveSessionHead;
    if ( PsActiveSessionHead )
      goto LABEL_14;
    PspUnlockProcessListExclusive((__int64)CurrentThread);
    return 0LL;
  }
}
