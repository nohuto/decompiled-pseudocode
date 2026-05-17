/*
 * XREFs of RtlpReferenceCurrentDirectory @ 0x180078310
 * Callers:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180059C40 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x18005BA20 (RtlGetFullPathName_Ustr.c)
 *     RtlpCheckForSameCurdir @ 0x180078040 (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x180078140 (RtlGetCurrentDirectory_U.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpCreateNewDirectoryReference @ 0x180078610 (RtlpCreateNewDirectoryReference.c)
 *     RtlpResetDriveEnvironment @ 0x180082C78 (RtlpResetDriveEnvironment.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwFsControlFile @ 0x1801623B0 (ZwFsControlFile.c)
 */

unsigned __int64 __fastcall RtlpReferenceCurrentDirectory(char a1)
{
  unsigned __int64 v2; // rbx
  int v3; // edi
  int v4; // ebp
  int v5; // eax
  char v6; // di
  __int64 v7; // rdx
  __int64 v9; // r14
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r15
  volatile signed __int32 *v11; // rcx
  _QWORD v12[2]; // [rsp+50h] [rbp-48h] BYREF
  _OWORD v13[3]; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+A8h] [rbp+10h] BYREF

  v14 = 0LL;
  v13[0] = 0LL;
  while ( 1 )
  {
    RtlEnterCriticalSection((__int64)&FastPebLock);
    v2 = RtlpCurDirRef;
    if ( !RtlpCurDirRef )
      return 0LL;
    _InterlockedIncrement((volatile signed __int32 *)RtlpCurDirRef);
    v3 = *(_DWORD *)(v2 + 16);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    if ( !a1 )
      return v2;
    v4 = MEMORY[0x7FFE02DC];
    if ( (*(_BYTE *)(v2 + 40) & 1) == 0 && MEMORY[0x7FFE02DC] == v3 )
      return v2;
    v5 = ZwFsControlFile(*(_QWORD *)(v2 + 8), 0LL, 0LL, 0LL, v13, 589864, 0LL, 0, 0LL, 0);
    if ( v5 >= 0 )
    {
      if ( (*(_BYTE *)(v2 + 40) & 1) == 0 )
      {
        RtlEnterCriticalSection((__int64)&FastPebLock);
        *(_DWORD *)(v2 + 16) = v4;
        RtlLeaveCriticalSection((__int64)&FastPebLock);
      }
      return v2;
    }
    if ( v5 != -1073741806 && v5 != -1073741202 )
      return v2;
    v6 = 0;
    if ( (int)RtlpCreateNewDirectoryReference(v2 + 24, *(unsigned __int16 *)(v2 + 26), &v14) < 0 )
    {
      v7 = *(unsigned __int16 *)(v2 + 26);
      v12[1] = *(_QWORD *)(v2 + 32);
      v12[0] = 6LL;
      if ( (int)RtlpCreateNewDirectoryReference(v12, v7, &v14) < 0 )
        return v2;
      v6 = 1;
    }
    v9 = v14;
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    *(_DWORD *)v14 = 2;
    RtlEnterCriticalSection((__int64)&FastPebLock);
    if ( RtlpCurDirRef == v2 )
      break;
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
    {
      NtClose(*(HANDLE *)(v2 + 8));
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
    }
    v11 = (volatile signed __int32 *)v14;
    *(_DWORD *)v14 = 1;
    if ( _InterlockedExchangeAdd(v11, 0xFFFFFFFF) == 1 )
    {
      NtClose(*(HANDLE *)(v14 + 8));
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v14);
    }
  }
  RtlpCurDirRef = v9;
  ProcessParameters->CurrentDirectory.DosPath.Length = *(_WORD *)(v9 + 24);
  ProcessParameters->CurrentDirectory.DosPath.Buffer = *(wchar_t **)(v9 + 32);
  ProcessParameters->CurrentDirectory.Handle = *(void **)(v9 + 8);
  if ( v6 )
    RtlpResetDriveEnvironment(**(unsigned __int16 **)(v2 + 32));
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
  {
    NtClose(*(HANDLE *)(v2 + 8));
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
  {
    NtClose(*(HANDLE *)(v2 + 8));
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
  }
  return v14;
}
