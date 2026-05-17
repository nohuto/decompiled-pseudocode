/*
 * XREFs of RtlpReferenceCurrentDirectory @ 0x1800A1730
 * Callers:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x180017680 (RtlGetFullPathName_Ustr.c)
 *     RtlpCheckForSameCurdir @ 0x1800A1460 (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x1800A1560 (RtlGetCurrentDirectory_U.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpCreateNewDirectoryReference @ 0x1800A1A30 (RtlpCreateNewDirectoryReference.c)
 *     RtlpResetDriveEnvironment @ 0x1800AB008 (RtlpResetDriveEnvironment.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwFsControlFile @ 0x180163940 (ZwFsControlFile.c)
 */

__int64 __fastcall RtlpReferenceCurrentDirectory(char a1)
{
  __int64 v2; // rbx
  int v3; // edi
  int v4; // ebp
  int v5; // eax
  char v6; // di
  __int64 v7; // rdx
  __int64 v9; // r14
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r15
  __int64 v11; // r9
  __int64 v12; // r9
  __int64 v13; // r9
  volatile signed __int32 *v14; // rcx
  __int64 v15; // r9
  _QWORD v16[2]; // [rsp+50h] [rbp-48h] BYREF
  _OWORD v17[3]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+10h] BYREF

  v18 = 0LL;
  v17[0] = 0LL;
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
    v5 = ZwFsControlFile(*(_QWORD *)(v2 + 8), 0LL, 0LL, 0LL, v17, 589864, 0LL, 0, 0LL, 0);
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
    if ( (int)RtlpCreateNewDirectoryReference(v2 + 24, *(unsigned __int16 *)(v2 + 26), &v18) < 0 )
    {
      v7 = *(unsigned __int16 *)(v2 + 26);
      v16[1] = *(_QWORD *)(v2 + 32);
      v16[0] = 6LL;
      if ( (int)RtlpCreateNewDirectoryReference(v16, v7, &v18) < 0 )
        return v2;
      v6 = 1;
    }
    v9 = v18;
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    *(_DWORD *)v18 = 2;
    RtlEnterCriticalSection((__int64)&FastPebLock);
    if ( RtlpCurDirRef == v2 )
      break;
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
    {
      NtClose(*(HANDLE *)(v2 + 8));
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2, v13);
    }
    v14 = (volatile signed __int32 *)v18;
    *(_DWORD *)v18 = 1;
    if ( _InterlockedExchangeAdd(v14, 0xFFFFFFFF) == 1 )
    {
      NtClose(*(HANDLE *)(v18 + 8));
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v18, v15);
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
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2, v11);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
  {
    NtClose(*(HANDLE *)(v2 + 8));
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2, v12);
  }
  return v18;
}
