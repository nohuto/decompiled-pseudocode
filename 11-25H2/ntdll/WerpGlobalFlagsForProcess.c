/*
 * XREFs of WerpGlobalFlagsForProcess @ 0x1800CFC84
 * Callers:
 *     RtlReportSilentProcessExit @ 0x1800CF190 (RtlReportSilentProcessExit.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlAppendUnicodeToString @ 0x18006C570 (RtlAppendUnicodeToString.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlQueryImageFileKeyOption @ 0x1800B2AE0 (RtlQueryImageFileKeyOption.c)
 *     WerpPathTail @ 0x1800CFE50 (WerpPathTail.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     NtQueryInformationProcess @ 0x180163540 (NtQueryInformationProcess.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall WerpGlobalFlagsForProcess(HANDLE ProcessHandle)
{
  __int64 v2; // rax
  const WCHAR *v3; // rbx
  __int64 v4; // rcx
  unsigned int v5; // edi
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-D0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE ProcessInformation[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v10; // [rsp+78h] [rbp-88h]
  ULONG v11; // [rsp+2B8h] [rbp+1B8h] BYREF
  HANDLE KeyHandle; // [rsp+2C0h] [rbp+1C0h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset_thunk_772440563353939046(ProcessInformation, 0, 0x220uLL);
  v11 = 0;
  *(_OWORD *)BaseAddress = 0LL;
  if ( (NtQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, ProcessInformation, 0x218u, 0LL) & 0xC0000000) != 0xC0000000 )
  {
    v2 = WerpPathTail(v10);
    v3 = (const WCHAR *)v2;
    if ( v2 )
    {
      v4 = -1LL;
      do
        ++v4;
      while ( *(_WORD *)(v2 + 2 * v4) );
      v5 = 2 * v4 + 202;
      BaseAddress[1] = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
      if ( BaseAddress[1] )
      {
        WORD1(BaseAddress[0]) = v5;
        if ( RtlAppendUnicodeToString(
               (PUNICODE_STRING)BaseAddress,
               L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\") >= 0
          && RtlAppendUnicodeToString((PUNICODE_STRING)BaseAddress, v3) >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( NtOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
            RtlQueryImageFileKeyOption(KeyHandle, (wchar_t *)L"GlobalFlag", 4, &v11, 4u, 0LL);
        }
      }
    }
  }
  if ( KeyHandle )
  {
    NtClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( BaseAddress[1] )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress[1]);
  return v11;
}
