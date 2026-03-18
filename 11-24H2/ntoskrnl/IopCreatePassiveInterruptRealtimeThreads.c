/*
 * XREFs of IopCreatePassiveInterruptRealtimeThreads @ 0x140722618
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThreadEx @ 0x140A224A0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall IopCreatePassiveInterruptRealtimeThreads(void *a1)
{
  unsigned int v1; // edi
  __int64 result; // rax
  NTSTATUS v3; // ebx
  __int64 v4; // r8
  _QWORD v5[3]; // [rsp+50h] [rbp-30h] BYREF
  int v6; // [rsp+68h] [rbp-18h]
  int v7; // [rsp+6Ch] [rbp-14h]
  __int128 v8; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+90h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+18h] BYREF

  Object = a1;
  v7 = 0;
  Handle = 0LL;
  v5[1] = 0LL;
  v5[2] = 0LL;
  v5[0] = 48LL;
  v1 = 0;
  v6 = 512;
  v8 = 0LL;
  while ( v1 < (unsigned __int8)PassiveInterruptRealtimeWorkerCount )
  {
    result = PsCreateSystemThreadEx(
               &Handle,
               0x1FFFFFLL,
               v5,
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
      KeSetActualBasePriorityThread((ULONG_PTR)Object, (unsigned __int8)PassiveInterruptRealtimeWorkerPriority, v4);
      ObfDereferenceObject(Object);
    }
    ++v1;
  }
  return 0LL;
}
