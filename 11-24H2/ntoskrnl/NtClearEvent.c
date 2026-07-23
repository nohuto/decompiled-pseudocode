/*
 * XREFs of NtClearEvent @ 0x140994580
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExpResetCrossVmEvent @ 0x1407C5D0C (ExpResetCrossVmEvent.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtClearEvent(HANDLE EventHandle)
{
  KPROCESSOR_MODE PreviousMode; // bp
  NTSTATUS v3; // eax
  PVOID v4; // rbx
  NTSTATUS v5; // edi
  NTSTATUS v7; // eax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v3 = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  v4 = Object;
  v5 = v3;
  if ( v3 < 0 )
  {
    if ( v3 == -1073741788 )
    {
      if ( ExCrossVmEventObjectType )
      {
        Object = 0LL;
        v7 = ObReferenceObjectByHandle(EventHandle, 2u, ExCrossVmEventObjectType, PreviousMode, &Object, 0LL);
        v4 = Object;
        v5 = v7;
        if ( v7 >= 0 )
          v5 = ExpResetCrossVmEvent((__int64)Object, 0LL);
      }
    }
  }
  else
  {
    KeResetEvent((PRKEVENT)Object);
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  return v5;
}
