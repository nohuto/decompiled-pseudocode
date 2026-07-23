/*
 * XREFs of NtResetEvent @ 0x1408C3160
 * Callers:
 *     PfSnPrefetchFileMetadata @ 0x1408C3008 (PfSnPrefetchFileMetadata.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     ExpResetCrossVmEvent @ 0x1407B60DC (ExpResetCrossVmEvent.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtResetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  KPROCESSOR_MODE PreviousMode; // r15
  NTSTATUS v5; // eax
  NTSTATUS v6; // edi
  struct _KEVENT *v7; // rsi
  __int64 v9; // rcx
  LONG v10; // [rsp+68h] [rbp+10h]
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  PVOID v12; // [rsp+78h] [rbp+20h]

  v10 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousState && PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)PreviousState < 0x7FFFFFFF0000LL )
      v9 = (__int64)PreviousState;
    *(_DWORD *)v9 = *(_DWORD *)v9;
  }
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  v6 = v5;
  v7 = (struct _KEVENT *)Object;
  v12 = Object;
  LODWORD(Object) = v5;
  if ( v5 < 0 )
  {
    if ( v5 == -1073741788 )
    {
      if ( ExCrossVmEventObjectType )
      {
        Object = 0LL;
        v6 = ObReferenceObjectByHandle(EventHandle, 2u, ExCrossVmEventObjectType, PreviousMode, &Object, 0LL);
        v7 = (struct _KEVENT *)Object;
        v12 = Object;
        LODWORD(Object) = v6;
        if ( v6 >= 0 )
        {
          v6 = ExpResetCrossVmEvent((__int64)v7);
          LODWORD(Object) = v6;
        }
      }
    }
  }
  else
  {
    v10 = KeResetEvent(v7);
  }
  if ( v6 >= 0 && PreviousState )
    *PreviousState = v10;
  if ( v7 )
    ObfDereferenceObject(v7);
  return v6;
}
