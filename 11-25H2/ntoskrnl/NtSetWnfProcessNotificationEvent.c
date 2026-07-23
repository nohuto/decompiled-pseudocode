/*
 * XREFs of NtSetWnfProcessNotificationEvent @ 0x140A35840
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExpWnfCreateProcessContext @ 0x140A35914 (ExpWnfCreateProcessContext.c)
 */

NTSTATUS __cdecl NtSetWnfProcessNotificationEvent(HANDLE NotificationEvent)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rcx
  __int64 v4; // rdi
  int v5; // ebx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = *(_QWORD *)&Process[3].BasePriority;
  v8 = v4;
  if ( !v4 )
  {
    v5 = ExpWnfCreateProcessContext(Process, &v8);
    if ( v5 < 0 )
      goto LABEL_5;
    v4 = v8;
  }
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(NotificationEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  if ( v5 >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 128), (signed __int64)Object, 0LL) )
    {
      ObfDereferenceObject(Object);
      v5 = -1073740008;
    }
    else
    {
      v5 = 0;
    }
  }
LABEL_5:
  KeLeaveCriticalRegion();
  return v5;
}
