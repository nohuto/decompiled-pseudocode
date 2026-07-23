/*
 * XREFs of FsRtlInitializeSmssEvent @ 0x140C1AEC0
 * Callers:
 *     FsRtlInitSystem @ 0x140C1AD7C (FsRtlInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     NtCreateEvent @ 0x1408532A0 (NtCreateEvent.c)
 */

NTSTATUS FsRtlInitializeSmssEvent()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx
  _DWORD v2[2]; // [rsp+30h] [rbp-40h] BYREF
  const wchar_t *v3; // [rsp+38h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE EventHandle; // [rsp+80h] [rbp+10h] BYREF
  PVOID Object; // [rsp+88h] [rbp+18h] BYREF

  EventHandle = 0LL;
  v2[1] = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  v3 = L"\\Device\\VolumesSafeForWriteAccess";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v2;
  v2[0] = 4456514;
  ObjectAttributes.Attributes = 592;
  result = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( result >= 0 )
  {
    Object = 0LL;
    v1 = ObReferenceObjectByHandle(EventHandle, 0x100000u, 0LL, 0, &Object, 0LL);
    NtClose(EventHandle);
    if ( v1 >= 0 )
    {
      SmssEventWorkItem.List.Flink = 0LL;
      SmssEventWorkItem.WorkerRoutine = (void (__fastcall *)(void *))FsRtlWaitForSmssEvent;
      SmssEventWorkItem.Parameter = Object;
      ExQueueWorkItem(&SmssEventWorkItem, DelayedWorkQueue);
      return 0;
    }
    else
    {
      return v1;
    }
  }
  return result;
}
