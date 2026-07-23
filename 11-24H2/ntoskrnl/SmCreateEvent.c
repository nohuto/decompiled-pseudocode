/*
 * XREFs of SmCreateEvent @ 0x140AAF2AC
 * Callers:
 *     SmRegistrationCtxStart @ 0x140AAF258 (SmRegistrationCtxStart.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwCreateEvent @ 0x1406A7CB0 (ZwCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall SmCreateEvent(__int64 a1, PVOID *a2)
{
  NTSTATUS v3; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE EventHandle; // [rsp+80h] [rbp+20h] BYREF
  PVOID Object; // [rsp+88h] [rbp+28h] BYREF

  memset(&ObjectAttributes.Length + 1, 0, 20);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  EventHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  v3 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
  if ( v3 >= 0 )
  {
    Object = 0LL;
    v3 = ObReferenceObjectByHandle(EventHandle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    if ( v3 < 0 )
    {
      if ( Object )
        ObfDereferenceObject(Object);
    }
    else
    {
      *a2 = Object;
      v3 = 0;
    }
  }
  if ( EventHandle )
    ZwClose(EventHandle);
  return (unsigned int)v3;
}
