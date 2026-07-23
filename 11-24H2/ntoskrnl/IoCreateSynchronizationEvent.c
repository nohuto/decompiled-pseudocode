/*
 * XREFs of IoCreateSynchronizationEvent @ 0x140711A80
 * Callers:
 *     DifIoCreateSynchronizationEventWrapper @ 0x140625D90 (DifIoCreateSynchronizationEventWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ZwCreateEvent @ 0x1406A7CB0 (ZwCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 */

PKEVENT __stdcall IoCreateSynchronizationEvent(PUNICODE_STRING EventName, PHANDLE EventHandle)
{
  PKEVENT result; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE EventHandlea; // [rsp+70h] [rbp+10h] BYREF
  PVOID Object; // [rsp+80h] [rbp+20h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  EventHandlea = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = EventName;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.Attributes = 640;
  if ( ZwCreateEvent(&EventHandlea, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 1u) < 0 )
    return 0LL;
  Object = 0LL;
  ObReferenceObjectByHandle(EventHandlea, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  ObfDereferenceObject(Object);
  result = (PKEVENT)Object;
  *EventHandle = EventHandlea;
  return result;
}
