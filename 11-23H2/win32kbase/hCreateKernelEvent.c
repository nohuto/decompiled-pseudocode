/*
 * XREFs of hCreateKernelEvent @ 0x1C0131FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall hCreateKernelEvent(EVENT_TYPE EventType, BOOLEAN InitialState)
{
  struct _OBJECT_ATTRIBUTES v3; // [rsp+30h] [rbp-38h] BYREF
  void *v4; // [rsp+80h] [rbp+18h] BYREF

  v3.RootDirectory = 0LL;
  v3.ObjectName = 0LL;
  *(_QWORD *)&v3.Length = 48LL;
  *(_QWORD *)&v3.Attributes = 512LL;
  v4 = 0LL;
  *(_OWORD *)&v3.SecurityDescriptor = 0LL;
  ZwCreateEvent(&v4, 0x1F0003u, &v3, EventType, InitialState);
  return v4;
}
