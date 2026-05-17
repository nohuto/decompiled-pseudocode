/*
 * XREFs of RtlSetCurrentDirectory_U @ 0x1800FAB90
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlGetFullPathName_Ustr @ 0x18005BA20 (RtlGetFullPathName_Ustr.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x18005D050 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlpCheckForSameCurdir @ 0x180078040 (RtlpCheckForSameCurdir.c)
 *     RtlpCreateNewDirectoryReference @ 0x180078610 (RtlpCreateNewDirectoryReference.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 */

__int64 __fastcall RtlSetCurrentDirectory_U(const void **a1, __int64 a2)
{
  struct _PEB *v3; // rax
  __int64 ProcessHeap; // rdi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rsi
  unsigned int i; // ebx
  _WORD *Heap; // rax
  unsigned __int64 v8; // r8
  unsigned int FullPathName_Ustr; // eax
  unsigned __int64 v10; // rbx
  unsigned __int16 v11; // ax
  int NewDirectoryReference; // r14d
  __int64 v13; // r8
  unsigned __int64 v14; // rbx
  unsigned int v16; // ebx
  __int128 v17; // [rsp+30h] [rbp-10h] BYREF
  __int64 v18; // [rsp+78h] [rbp+38h] BYREF
  __int64 v19; // [rsp+80h] [rbp+40h] BYREF

  v17 = 0LL;
  v19 = 0LL;
  v3 = NtCurrentPeb();
  v18 = 0LL;
  ProcessHeap = (__int64)v3->ProcessHeap;
  ProcessParameters = v3->ProcessParameters;
  if ( RtlpCheckForSameCurdir(a1, a2) )
    return 0LL;
  if ( (unsigned int)RtlpIsDosDeviceName_Ustr((__m128i *)a1) )
    return 3221225731LL;
  for ( i = ProcessParameters->CurrentDirectory.DosPath.MaximumLength; ; i = v10 + 4 )
  {
    Heap = (_WORD *)RtlAllocateHeap(ProcessHeap, 0, i);
    *((_QWORD *)&v17 + 1) = Heap;
    if ( !Heap )
      return 3221225495LL;
    LOWORD(v17) = 0;
    v8 = (unsigned __int64)Heap;
    if ( i > 0xFFFF )
    {
      WORD1(v17) = -1;
LABEL_24:
      RtlFreeHeap(ProcessHeap, 0, v8);
      return 3221225621LL;
    }
    WORD1(v17) = i;
    FullPathName_Ustr = RtlGetFullPathName_Ustr((unsigned __int16 *)a1, i, Heap, 0LL, 0LL, &v19);
    v10 = FullPathName_Ustr;
    if ( !FullPathName_Ustr )
    {
      v16 = -1073741773;
LABEL_19:
      RtlFreeHeap(ProcessHeap, 0, *((unsigned __int64 *)&v17 + 1));
      return v16;
    }
    v11 = WORD1(v17);
    if ( v10 <= (unsigned __int64)WORD1(v17) - 4 )
      goto LABEL_8;
    if ( (NtCurrentPeb()->BitField & 0x80u) == 0 )
      break;
    RtlFreeHeap(ProcessHeap, 0, *((unsigned __int64 *)&v17 + 1));
  }
  v11 = WORD1(v17);
LABEL_8:
  if ( (unsigned int)v10 > v11 )
  {
    v16 = -1073741562;
    goto LABEL_19;
  }
  if ( (unsigned int)v10 > 0xFFFF )
  {
    v8 = *((_QWORD *)&v17 + 1);
    LOWORD(v17) = -1;
    goto LABEL_24;
  }
  LOWORD(v17) = v10;
  NewDirectoryReference = RtlpCreateNewDirectoryReference((unsigned __int16 *)&v17, v11, (unsigned __int64 *)&v18);
  RtlFreeHeap(ProcessHeap, 0, *((unsigned __int64 *)&v17 + 1));
  if ( NewDirectoryReference >= 0 )
  {
    RtlEnterCriticalSection((__int64)&FastPebLock);
    v13 = v18;
    v14 = RtlpCurDirRef;
    ProcessParameters->CurrentDirectory.Handle = *(void **)(v18 + 8);
    ProcessParameters->CurrentDirectory.DosPath.Buffer = *(wchar_t **)(v13 + 32);
    ProcessParameters->CurrentDirectory.DosPath.Length = *(_WORD *)(v13 + 24);
    RtlpCurDirRef = v13;
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v14, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v14 + 8));
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v14);
      }
    }
  }
  return (unsigned int)NewDirectoryReference;
}
