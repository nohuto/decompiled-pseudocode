/*
 * XREFs of ndisCreateThread @ 0x1400C8EF4
 * Callers:
 *     ndisCreateReceiveWorkerThreadPool @ 0x1400C8E10 (ndisCreateReceiveWorkerThreadPool.c)
 *     ?ndisPeriodicReceivesAddCpu@@YAXK@Z @ 0x1400C9170 (-ndisPeriodicReceivesAddCpu@@YAXK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall ndisCreateThread(__int64 a1, void *a2, KPRIORITY a3, PVOID *a4)
{
  NTSTATUS v6; // ebx
  NTSTATUS v7; // eax
  struct _KTHREAD *v8; // rcx
  char v10[8]; // [rsp+28h] [rbp-58h]
  PVOID Object; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  HANDLE ThreadHandle; // [rsp+90h] [rbp+10h] BYREF

  ThreadHandle = 0LL;
  memset(&ObjectAttributes.Length + 1, 0, 20);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  v6 = PsCreateSystemThread(
         &ThreadHandle,
         0x1FFFFFu,
         &ObjectAttributes,
         0LL,
         0LL,
         (PKSTART_ROUTINE)ndisReceiveWorkerThread,
         a2);
  if ( v6 >= 0 )
  {
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    v8 = (struct _KTHREAD *)Object;
    v6 = v7;
    *a4 = Object;
    if ( a3 )
      KeSetPriorityThread(v8, a3);
    ZwClose(ThreadHandle);
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = v6;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xCu,
      0xAu,
      (struct _GUID *)&WPP_2fb632d9e69632cc5880b19a4ac60799_Traceguids,
      *(_QWORD *)v10);
  }
  return (unsigned int)v6;
}
