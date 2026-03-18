/*
 * XREFs of CmpCreateEvent @ 0x140930D80
 * Callers:
 *     CmpDoFileRead @ 0x140479BDC (CmpDoFileRead.c)
 *     CmpGetVolumeClusterSize @ 0x140930B1C (CmpGetVolumeClusterSize.c)
 *     CmpDoFileWrite @ 0x140A4F8F0 (CmpDoFileWrite.c)
 * Callees:
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwCreateEvent @ 0x1406A6D10 (ZwCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmpCreateEvent(EVENT_TYPE EventType, HANDLE *a2, PVOID *a3)
{
  NTSTATUS v5; // ebx
  HANDLE v6; // rcx
  PVOID Object; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF
  HANDLE EventHandle; // [rsp+98h] [rbp+28h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  EventHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.Attributes = 576;
  v5 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, EventType, 0);
  if ( v5 < 0 || (Object = 0LL, v5 = ObReferenceObjectByHandle(EventHandle, 0x1F0003u, 0LL, 0, &Object, 0LL), v5 < 0) )
  {
    v6 = EventHandle;
  }
  else
  {
    v6 = 0LL;
    *a2 = EventHandle;
    v5 = 0;
    *a3 = Object;
    EventHandle = 0LL;
  }
  if ( v6 )
    ZwClose(v6);
  return (unsigned int)v5;
}
