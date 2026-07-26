/*
 * XREFs of ndisCreateThread @ 0x1400C1CC4
 * Callers:
 *     ndisCreateReceiveWorkerThreadPool @ 0x1400C1BE0 (ndisCreateReceiveWorkerThreadPool.c)
 *     ?ndisPeriodicReceivesAddCpu@@YAXK@Z @ 0x1400C1F40 (-ndisPeriodicReceivesAddCpu@@YAXK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall ndisCreateThread(__int64 a1, void *a2, KPRIORITY a3, PVOID *a4)
{
  int v6; // edx
  NTSTATUS v7; // ebx
  NTSTATUS v8; // eax
  struct _KTHREAD *v9; // rcx
  PVOID Object; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  HANDLE ThreadHandle; // [rsp+90h] [rbp+10h] BYREF

  ThreadHandle = 0LL;
  memset(&ObjectAttributes.Length + 1, 0, 20);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  v7 = PsCreateSystemThread(
         &ThreadHandle,
         0x1FFFFFu,
         &ObjectAttributes,
         0LL,
         0LL,
         (PKSTART_ROUTINE)ndisReceiveWorkerThread,
         a2);
  if ( v7 >= 0 )
  {
    Object = 0LL;
    v8 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    v9 = (struct _KTHREAD *)Object;
    v7 = v8;
    *a4 = Object;
    if ( a3 )
      KeSetPriorityThread(v9, a3);
    ZwClose(ThreadHandle);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      12,
      10,
      (struct _GUID *)&WPP_1e166df1927f351decd9b39e99e51e5f_Traceguids,
      v7);
  }
  return (unsigned int)v7;
}
