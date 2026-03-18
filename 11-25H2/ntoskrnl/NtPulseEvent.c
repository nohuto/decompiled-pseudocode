/*
 * XREFs of NtPulseEvent @ 0x1409EE5B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KePulseEvent @ 0x14046B330 (KePulseEvent.c)
 *     ExpPulseCrossVmEvent @ 0x1407B6024 (ExpPulseCrossVmEvent.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtPulseEvent(HANDLE Handle, LONG *a2)
{
  KPROCESSOR_MODE PreviousMode; // r15
  NTSTATUS v5; // eax
  int v6; // edi
  struct _KEVENT *v7; // rsi
  __int64 v9; // rcx
  LONG v10; // [rsp+68h] [rbp+10h]
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  PVOID v12; // [rsp+78h] [rbp+20h]

  v10 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 && PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v9 = (__int64)a2;
    *(_DWORD *)v9 = *(_DWORD *)v9;
  }
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
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
        v6 = ObReferenceObjectByHandle(Handle, 2u, ExCrossVmEventObjectType, PreviousMode, &Object, 0LL);
        v7 = (struct _KEVENT *)Object;
        v12 = Object;
        LODWORD(Object) = v6;
        if ( v6 >= 0 )
        {
          v6 = ExpPulseCrossVmEvent((__int64)v7);
          LODWORD(Object) = v6;
        }
      }
    }
  }
  else
  {
    v10 = KePulseEvent(v7, 1, 0);
  }
  if ( v6 >= 0 && a2 )
    *a2 = v10;
  if ( v7 )
    ObfDereferenceObject(v7);
  return (unsigned int)v6;
}
