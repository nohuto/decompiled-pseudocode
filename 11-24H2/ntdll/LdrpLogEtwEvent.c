/*
 * XREFs of LdrpLogEtwEvent @ 0x180030140
 * Callers:
 *     LdrpLogDllStateEx2 @ 0x180006024 (LdrpLogDllStateEx2.c)
 *     RtlpWaitOnCriticalSection @ 0x18002F5F0 (RtlpWaitOnCriticalSection.c)
 *     LdrpReleaseLoaderLock @ 0x180031810 (LdrpReleaseLoaderLock.c)
 *     LdrpLoadDll @ 0x180037BF0 (LdrpLoadDll.c)
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18003C480 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpCallInitRoutine @ 0x18003F690 (LdrpCallInitRoutine.c)
 *     LdrUnloadDll @ 0x1800480B0 (LdrUnloadDll.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180049230 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpAcquireLoaderLock @ 0x180049720 (LdrpAcquireLoaderLock.c)
 *     LdrpPreprocessDllName @ 0x180070150 (LdrpPreprocessDllName.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18008D200 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLogDllState @ 0x18008D5E0 (LdrpLogDllState.c)
 *     LdrpMapDllNtFileName @ 0x18008DF20 (LdrpMapDllNtFileName.c)
 *     LdrpCompleteMapModule @ 0x18008FC20 (LdrpCompleteMapModule.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800A07D8 (LdrpTryAcquireLoaderLock.c)
 *     LdrpInitializationComplete @ 0x1800AE858 (LdrpInitializationComplete.c)
 *     LdrpAllocatePlaceHolder @ 0x1800D4A30 (LdrpAllocatePlaceHolder.c)
 *     LdrpLogError @ 0x1800F633C (LdrpLogError.c)
 *     LdrpEtwLogLoaderSnaps @ 0x180112B50 (LdrpEtwLogLoaderSnaps.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     LdrpEventAddUnicodeString @ 0x1800D4D60 (LdrpEventAddUnicodeString.c)
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

int __fastcall LdrpLogEtwEvent(__int16 a1, __int64 a2, char a3, char a4, unsigned __int16 *a5, unsigned __int16 *a6)
{
  size_t v7; // rbp
  _BYTE *v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rcx
  _BYTE *Heap; // rax
  int v15; // [rsp+24h] [rbp-284h] BYREF
  __int16 v16; // [rsp+28h] [rbp-280h]
  _BYTE Fields[576]; // [rsp+30h] [rbp-278h] BYREF

  v7 = 576LL;
  v16 = a1;
  memset_thunk_772440563353939046(Fields, 0, 0x240uLL);
  v15 = 0;
  v8 = Fields;
  v9 = 0;
  if ( a5 )
  {
    v9 = *a5 + 2;
    if ( a6 )
      v9 += *a6 + 2;
  }
  if ( v9 <= 0x214 || (Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v9 + 42), (v8 = Heap) != 0LL) )
  {
    if ( v9 + 42 > 0x240 )
      v7 = v9 + 42;
    memset_thunk_772440563353939046(v8, 0, v7);
    *((_WORD *)v8 + 3) = v16;
    if ( a2 != -1 )
    {
      v8[40] = a3;
      v8[41] = a4;
      *((_QWORD *)v8 + 4) = a2;
      if ( v9 )
      {
        LdrpEventAddUnicodeString(a5, v8 + 42, v9, &v15);
        if ( a6 )
          LdrpEventAddUnicodeString(a6, &v8[v15 + 42], v9 - v15, &v15);
      }
    }
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v10 = 2147353476LL;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v10, 0x402u, v9 + 10, v8);
    Heap = Fields;
    if ( Fields != v8 )
      LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
  }
  return (int)Heap;
}
