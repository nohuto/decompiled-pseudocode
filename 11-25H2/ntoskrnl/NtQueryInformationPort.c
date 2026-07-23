/*
 * XREFs of NtQueryInformationPort @ 0x1407355B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtQueryInformationPort(
        HANDLE PortHandle,
        PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v7; // rcx
  int v8; // ebx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(PortInformation, Length, 4u);
    if ( ReturnLength )
    {
      v7 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v7 = (__int64)ReturnLength;
      *(_DWORD *)v7 = *(_DWORD *)v7;
    }
  }
  if ( !PortHandle )
    return -1073741821;
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v8 >= 0 )
  {
    if ( ReturnLength )
      *ReturnLength = 0;
    ObfDereferenceObject(Object);
  }
  return v8;
}
