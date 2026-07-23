/*
 * XREFs of RtlSetCurrentDirectory_U @ 0x1800A11C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetFullPathName_Ustr @ 0x180017680 (RtlGetFullPathName_Ustr.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x180018CB0 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpCheckForSameCurdir @ 0x1800A1460 (RtlpCheckForSameCurdir.c)
 *     RtlpCreateNewDirectoryReference @ 0x1800A1A30 (RtlpCreateNewDirectoryReference.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 */

NTSTATUS __cdecl RtlSetCurrentDirectory_U(PUNICODE_STRING PathName)
{
  struct _PEB *v2; // rax
  void *ProcessHeap; // rdi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rsi
  unsigned int i; // ebx
  PVOID Heap; // rax
  PVOID v7; // r8
  unsigned int FullPathName_Ustr; // eax
  unsigned __int64 v9; // rbx
  unsigned __int16 v10; // ax
  NTSTATUS v11; // r14d
  __int64 v12; // r8
  HANDLE *v13; // rbx
  NTSTATUS v15; // ebx
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v17; // [rsp+78h] [rbp+38h] BYREF
  __int64 v18; // [rsp+80h] [rbp+40h] BYREF

  *(_OWORD *)BaseAddress = 0LL;
  v18 = 0LL;
  v2 = NtCurrentPeb();
  v17 = 0LL;
  ProcessHeap = v2->ProcessHeap;
  ProcessParameters = v2->ProcessParameters;
  if ( (unsigned __int8)RtlpCheckForSameCurdir() )
    return 0;
  if ( (unsigned int)RtlpIsDosDeviceName_Ustr((__m128i *)PathName) )
    return -1073741565;
  for ( i = ProcessParameters->CurrentDirectory.DosPath.MaximumLength; ; i = v9 + 4 )
  {
    Heap = RtlAllocateHeap(ProcessHeap, 0, i);
    BaseAddress[1] = Heap;
    if ( !Heap )
      return -1073741801;
    LOWORD(BaseAddress[0]) = 0;
    v7 = Heap;
    if ( i > 0xFFFF )
    {
      WORD1(BaseAddress[0]) = -1;
LABEL_24:
      RtlFreeHeap(ProcessHeap, 0, v7);
      return -1073741675;
    }
    WORD1(BaseAddress[0]) = i;
    FullPathName_Ustr = RtlGetFullPathName_Ustr(&PathName->Length, i, (WCHAR *)Heap, 0LL, 0LL, &v18);
    v9 = FullPathName_Ustr;
    if ( !FullPathName_Ustr )
    {
      v15 = -1073741773;
LABEL_19:
      RtlFreeHeap(ProcessHeap, 0, BaseAddress[1]);
      return v15;
    }
    v10 = WORD1(BaseAddress[0]);
    if ( v9 <= (unsigned __int64)WORD1(BaseAddress[0]) - 4 )
      goto LABEL_8;
    if ( (NtCurrentPeb()->BitField & 0x80u) == 0 )
      break;
    RtlFreeHeap(ProcessHeap, 0, BaseAddress[1]);
  }
  v10 = WORD1(BaseAddress[0]);
LABEL_8:
  if ( (unsigned int)v9 > v10 )
  {
    v15 = -1073741562;
    goto LABEL_19;
  }
  if ( (unsigned int)v9 > 0xFFFF )
  {
    v7 = BaseAddress[1];
    LOWORD(BaseAddress[0]) = -1;
    goto LABEL_24;
  }
  LOWORD(BaseAddress[0]) = v9;
  v11 = RtlpCreateNewDirectoryReference(BaseAddress, v10, &v17);
  RtlFreeHeap(ProcessHeap, 0, BaseAddress[1]);
  if ( v11 >= 0 )
  {
    RtlEnterCriticalSection(&FastPebLock);
    v12 = v17;
    v13 = (HANDLE *)RtlpCurDirRef;
    ProcessParameters->CurrentDirectory.Handle = *(void **)(v17 + 8);
    ProcessParameters->CurrentDirectory.DosPath.Buffer = *(wchar_t **)(v12 + 32);
    ProcessParameters->CurrentDirectory.DosPath.Length = *(_WORD *)(v12 + 24);
    RtlpCurDirRef = (PVOID)v12;
    RtlLeaveCriticalSection(&FastPebLock);
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v13, 0xFFFFFFFF) == 1 )
      {
        NtClose(v13[1]);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
      }
    }
  }
  return v11;
}
