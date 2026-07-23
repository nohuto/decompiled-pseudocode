/*
 * XREFs of RtlpGetPersistedRegistryLocation @ 0x18011C240
 * Callers:
 *     RtlpEtcGetDwordFromPersistedState @ 0x180148398 (RtlpEtcGetDwordFromPersistedState.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlGetPersistedStateLocation @ 0x180080A00 (RtlGetPersistedStateLocation.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpGetPersistedRegistryLocation(PCWSTR SourceID, PCWSTR DefaultPath, WCHAR **a3, _DWORD *a4)
{
  NTSTATUS PersistedStateLocation; // eax
  NTSTATUS v9; // ebx
  WCHAR *TargetPath; // rdi
  ULONG Size[4]; // [rsp+40h] [rbp-28h] BYREF

  Size[0] = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             SourceID,
                             L"TargetNtPath",
                             DefaultPath,
                             LocationTypeRegistry,
                             0LL,
                             0,
                             Size);
  v9 = PersistedStateLocation;
  if ( PersistedStateLocation == -2147483643 )
  {
    TargetPath = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Size[0]);
    if ( TargetPath )
    {
      v9 = RtlGetPersistedStateLocation(
             SourceID,
             L"TargetNtPath",
             DefaultPath,
             LocationTypeRegistry,
             TargetPath,
             Size[0],
             Size);
      if ( v9 < 0 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, TargetPath);
      }
      else
      {
        *a3 = TargetPath;
        if ( a4 )
          *a4 = (Size[0] >> 1) - 1;
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
