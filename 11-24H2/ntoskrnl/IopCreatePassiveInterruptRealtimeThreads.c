/*
 * XREFs of IopCreatePassiveInterruptRealtimeThreads @ 0x1407201A8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThreadEx @ 0x1408F8C50 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall IopCreatePassiveInterruptRealtimeThreads(void *a1)
{
  unsigned int v1; // edi
  __int64 result; // rax
  NTSTATUS v3; // ebx
  _QWORD v4[3]; // [rsp+50h] [rbp-30h] BYREF
  int v5; // [rsp+68h] [rbp-18h]
  int v6; // [rsp+6Ch] [rbp-14h]
  __int128 v7; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+90h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+18h] BYREF

  Object = a1;
  v6 = 0;
  Handle = 0LL;
  v4[1] = 0LL;
  v4[2] = 0LL;
  v4[0] = 48LL;
  v1 = 0;
  v5 = 512;
  v7 = 0LL;
  while ( v1 < (unsigned __int8)PassiveInterruptRealtimeWorkerCount )
  {
    result = PsCreateSystemThreadEx(
               &Handle,
               0x1FFFFFLL,
               v4,
               0LL,
               0LL,
               IopPassiveInterruptRealtimeWorker,
               &PassiveInterruptRealtimeWorkQueue,
               0LL,
               0LL);
    if ( (int)result < 0 )
      return result;
    Object = 0LL;
    v3 = ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    ZwClose(Handle);
    if ( v3 >= 0 )
    {
      KeSetActualBasePriorityThread((ULONG_PTR)Object, (unsigned __int8)PassiveInterruptRealtimeWorkerPriority);
      ObfDereferenceObject(Object);
    }
    ++v1;
  }
  return 0LL;
}
