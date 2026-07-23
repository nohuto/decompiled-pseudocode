/*
 * XREFs of RtlpGetPersistedRegistryLocation @ 0x1405EC9BC
 * Callers:
 *     RtlpEtcGetDwordFromPersistedState @ 0x1405EC78C (RtlpEtcGetDwordFromPersistedState.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x1409B4B60 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpGetPersistedRegistryLocation(PCWSTR SourceID, PCWSTR DefaultPath, WCHAR **a3, _DWORD *a4)
{
  NTSTATUS PersistedStateLocation; // eax
  NTSTATUS v9; // ebx
  ULONG BufferLengthIn; // ebx
  WCHAR *TargetPath; // rdi
  ULONG BufferLengthOut[4]; // [rsp+40h] [rbp-28h] BYREF

  BufferLengthOut[0] = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             SourceID,
                             L"TargetNtPath",
                             DefaultPath,
                             LocationTypeRegistry,
                             0LL,
                             0,
                             BufferLengthOut);
  v9 = PersistedStateLocation;
  if ( PersistedStateLocation == -2147483643 )
  {
    BufferLengthIn = BufferLengthOut[0];
    TargetPath = (WCHAR *)ExAllocatePool2(0x100uLL, BufferLengthOut[0], 0x67727453u);
    if ( TargetPath )
    {
      v9 = RtlGetPersistedStateLocation(
             SourceID,
             L"TargetNtPath",
             DefaultPath,
             LocationTypeRegistry,
             TargetPath,
             BufferLengthIn,
             BufferLengthOut);
      if ( v9 < 0 )
      {
        ExFreePoolWithTag(TargetPath, 0);
      }
      else
      {
        *a3 = TargetPath;
        if ( a4 )
          *a4 = (BufferLengthOut[0] >> 1) - 1;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else if ( PersistedStateLocation >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v9;
}
