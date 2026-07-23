/*
 * XREFs of NtQueryInformationPort @ 0x14073F500
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
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
