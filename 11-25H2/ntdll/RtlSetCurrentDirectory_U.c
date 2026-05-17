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

__int64 __fastcall RtlSetCurrentDirectory_U(__m128i *a1)
{
  struct _PEB *v2; // rax
  char *ProcessHeap; // rdi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rsi
  unsigned int i; // ebx
  _WORD *Heap; // rax
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned int FullPathName_Ustr; // eax
  unsigned __int64 v10; // rbx
  unsigned __int16 v11; // ax
  int v12; // r14d
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rbx
  unsigned int v17; // ebx
  __int64 v18; // r9
  __int128 v19; // [rsp+30h] [rbp-10h] BYREF
  __int64 v20; // [rsp+78h] [rbp+38h] BYREF
  __int64 v21; // [rsp+80h] [rbp+40h] BYREF

  v19 = 0LL;
  v21 = 0LL;
  v2 = NtCurrentPeb();
  v20 = 0LL;
  ProcessHeap = (char *)v2->ProcessHeap;
  ProcessParameters = v2->ProcessParameters;
  if ( (unsigned __int8)RtlpCheckForSameCurdir() )
    return 0LL;
  if ( (unsigned int)RtlpIsDosDeviceName_Ustr(a1) )
    return 3221225731LL;
  for ( i = ProcessParameters->CurrentDirectory.DosPath.MaximumLength; ; i = v10 + 4 )
  {
    Heap = (_WORD *)RtlAllocateHeap(ProcessHeap, 0, i);
    *((_QWORD *)&v19 + 1) = Heap;
    if ( !Heap )
      return 3221225495LL;
    LOWORD(v19) = 0;
    v8 = (__int64)Heap;
    if ( i > 0xFFFF )
    {
      WORD1(v19) = -1;
LABEL_24:
      RtlFreeHeap((__int64)ProcessHeap, 0, v8, v7);
      return 3221225621LL;
    }
    WORD1(v19) = i;
    FullPathName_Ustr = RtlGetFullPathName_Ustr((unsigned __int16 *)a1, i, Heap, 0LL, 0LL, &v21);
    v10 = FullPathName_Ustr;
    if ( !FullPathName_Ustr )
    {
      v17 = -1073741773;
LABEL_19:
      RtlFreeHeap((__int64)ProcessHeap, 0, *((__int64 *)&v19 + 1), v7);
      return v17;
    }
    v11 = WORD1(v19);
    if ( v10 <= (unsigned __int64)WORD1(v19) - 4 )
      goto LABEL_8;
    if ( (NtCurrentPeb()->BitField & 0x80u) == 0 )
      break;
    RtlFreeHeap((__int64)ProcessHeap, 0, *((__int64 *)&v19 + 1), v7);
  }
  v11 = WORD1(v19);
LABEL_8:
  if ( (unsigned int)v10 > v11 )
  {
    v17 = -1073741562;
    goto LABEL_19;
  }
  if ( (unsigned int)v10 > 0xFFFF )
  {
    v8 = *((_QWORD *)&v19 + 1);
    LOWORD(v19) = -1;
    goto LABEL_24;
  }
  LOWORD(v19) = v10;
  v12 = RtlpCreateNewDirectoryReference(&v19, v11, &v20);
  RtlFreeHeap((__int64)ProcessHeap, 0, *((__int64 *)&v19 + 1), v13);
  if ( v12 >= 0 )
  {
    RtlEnterCriticalSection((__int64)&FastPebLock);
    v14 = v20;
    v15 = RtlpCurDirRef;
    ProcessParameters->CurrentDirectory.Handle = *(void **)(v20 + 8);
    ProcessParameters->CurrentDirectory.DosPath.Buffer = *(wchar_t **)(v14 + 32);
    ProcessParameters->CurrentDirectory.DosPath.Length = *(_WORD *)(v14 + 24);
    RtlpCurDirRef = v14;
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v15, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v15 + 8));
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v15, v18);
      }
    }
  }
  return (unsigned int)v12;
}
