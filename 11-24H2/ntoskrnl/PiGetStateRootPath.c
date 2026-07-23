/*
 * XREFs of PiGetStateRootPath @ 0x1409B55E8
 * Callers:
 *     IoGetDeviceDirectory @ 0x14071CA80 (IoGetDeviceDirectory.c)
 *     PiGetDriverMutableStateDirectory @ 0x14071D748 (PiGetDriverMutableStateDirectory.c)
 *     PiOpenDriverRedirectedStateRootKey @ 0x14071DA6C (PiOpenDriverRedirectedStateRootKey.c)
 *     PiOpenDriverRedirectedStateKey @ 0x140A7F158 (PiOpenDriverRedirectedStateKey.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140C247C8 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     RtlGetPersistedStateLocation @ 0x1409B4B60 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiGetStateRootPath(
        PCWSTR SourceID,
        PCWSTR DefaultPath,
        STATE_LOCATION_TYPE StateLocationType,
        PUNICODE_STRING DestinationString)
{
  NTSTATUS PersistedStateLocation; // eax
  NTSTATUS inited; // ebx
  ULONG BufferLengthIn; // ebx
  WCHAR *TargetPath; // rdi
  NTSTATUS v13; // eax
  ULONG BufferLengthOut; // [rsp+78h] [rbp+20h] BYREF

  if ( !DestinationString )
    return (unsigned int)-1073741811;
  BufferLengthOut = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             SourceID,
                             0LL,
                             DefaultPath,
                             StateLocationType,
                             0LL,
                             0,
                             &BufferLengthOut);
  inited = PersistedStateLocation;
  if ( PersistedStateLocation >= 0 )
    return (unsigned int)-1073741823;
  if ( PersistedStateLocation == -2147483643 )
  {
    BufferLengthIn = BufferLengthOut;
    TargetPath = (WCHAR *)ExAllocatePool2(0x100uLL, BufferLengthOut, 0x6F697050u);
    if ( !TargetPath )
      return (unsigned int)-1073741670;
    v13 = RtlGetPersistedStateLocation(
            SourceID,
            0LL,
            DefaultPath,
            StateLocationType,
            TargetPath,
            BufferLengthIn,
            &BufferLengthOut);
    inited = v13;
    if ( v13 == -1073741772 )
    {
      inited = -1073741595;
    }
    else if ( v13 >= 0 )
    {
      inited = RtlInitUnicodeStringEx(DestinationString, TargetPath);
      if ( inited >= 0 )
        return (unsigned int)inited;
    }
    ExFreePoolWithTag(TargetPath, 0);
  }
  return (unsigned int)inited;
}
