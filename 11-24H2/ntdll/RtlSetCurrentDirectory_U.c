/*
 * XREFs of RtlSetCurrentDirectory_U @ 0x1800F58F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlGetFullPathName_Ustr @ 0x180071600 (RtlGetFullPathName_Ustr.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x180072C30 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlpCheckForSameCurdir @ 0x180094920 (RtlpCheckForSameCurdir.c)
 *     RtlpCreateNewDirectoryReference @ 0x180094EF0 (RtlpCreateNewDirectoryReference.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 */

NTSTATUS __cdecl RtlSetCurrentDirectory_U(PUNICODE_STRING PathName)
{
  __int64 v1; // rdx
  struct _PEB *v3; // rax
  void *ProcessHeap; // rdi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rsi
  unsigned int i; // ebx
  PVOID Heap; // rax
  PVOID v8; // r8
  unsigned int FullPathName_Ustr; // eax
  unsigned __int64 v10; // rbx
  unsigned __int16 v11; // ax
  NTSTATUS v12; // r14d
  __int64 v13; // r8
  HANDLE *v14; // rbx
  NTSTATUS v16; // ebx
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v18; // [rsp+78h] [rbp+38h] BYREF
  __int64 v19; // [rsp+80h] [rbp+40h] BYREF

  *(_OWORD *)BaseAddress = 0LL;
  v19 = 0LL;
  v3 = NtCurrentPeb();
  v18 = 0LL;
  ProcessHeap = v3->ProcessHeap;
  ProcessParameters = v3->ProcessParameters;
  if ( RtlpCheckForSameCurdir((const void **)PathName, v1) )
    return 0;
  if ( (unsigned int)RtlpIsDosDeviceName_Ustr((__m128i *)PathName) )
    return -1073741565;
  for ( i = ProcessParameters->CurrentDirectory.DosPath.MaximumLength; ; i = v10 + 4 )
  {
    Heap = RtlAllocateHeap(ProcessHeap, 0, i);
    BaseAddress[1] = Heap;
    if ( !Heap )
      return -1073741801;
    LOWORD(BaseAddress[0]) = 0;
    v8 = Heap;
    if ( i > 0xFFFF )
    {
      WORD1(BaseAddress[0]) = -1;
LABEL_24:
      RtlFreeHeap(ProcessHeap, 0, v8);
      return -1073741675;
    }
    WORD1(BaseAddress[0]) = i;
    FullPathName_Ustr = RtlGetFullPathName_Ustr(&PathName->Length, i, (WCHAR *)Heap, 0LL, 0LL, &v19);
    v10 = FullPathName_Ustr;
    if ( !FullPathName_Ustr )
    {
      v16 = -1073741773;
LABEL_19:
      RtlFreeHeap(ProcessHeap, 0, BaseAddress[1]);
      return v16;
    }
    v11 = WORD1(BaseAddress[0]);
    if ( v10 <= (unsigned __int64)WORD1(BaseAddress[0]) - 4 )
      goto LABEL_8;
    if ( (NtCurrentPeb()->BitField & 0x80u) == 0 )
      break;
    RtlFreeHeap(ProcessHeap, 0, BaseAddress[1]);
  }
  v11 = WORD1(BaseAddress[0]);
LABEL_8:
  if ( (unsigned int)v10 > v11 )
  {
    v16 = -1073741562;
    goto LABEL_19;
  }
  if ( (unsigned int)v10 > 0xFFFF )
  {
    v8 = BaseAddress[1];
    LOWORD(BaseAddress[0]) = -1;
    goto LABEL_24;
  }
  LOWORD(BaseAddress[0]) = v10;
  v12 = RtlpCreateNewDirectoryReference((unsigned __int16 *)BaseAddress, v11, &v18);
  RtlFreeHeap(ProcessHeap, 0, BaseAddress[1]);
  if ( v12 >= 0 )
  {
    RtlEnterCriticalSection(&FastPebLock);
    v13 = v18;
    v14 = (HANDLE *)RtlpCurDirRef;
    ProcessParameters->CurrentDirectory.Handle = *(void **)(v18 + 8);
    ProcessParameters->CurrentDirectory.DosPath.Buffer = *(wchar_t **)(v13 + 32);
    ProcessParameters->CurrentDirectory.DosPath.Length = *(_WORD *)(v13 + 24);
    RtlpCurDirRef = (PVOID)v13;
    RtlLeaveCriticalSection(&FastPebLock);
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v14, 0xFFFFFFFF) == 1 )
      {
        NtClose(v14[1]);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
      }
    }
  }
  return v12;
}
