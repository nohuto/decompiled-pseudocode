/*
 * XREFs of LdrpLogEtwEvent @ 0x18009B2F0
 * Callers:
 *     LdrpReleaseLoaderLock @ 0x180004E10 (LdrpReleaseLoaderLock.c)
 *     LdrpLoadDll @ 0x18000B1F0 (LdrpLoadDll.c)
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18000FA80 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpCallInitRoutine @ 0x180012C90 (LdrpCallInitRoutine.c)
 *     LdrUnloadDll @ 0x18001B6B0 (LdrUnloadDll.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18001C830 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpAcquireLoaderLock @ 0x18001CD20 (LdrpAcquireLoaderLock.c)
 *     LdrpPreprocessDllName @ 0x18005A570 (LdrpPreprocessDllName.c)
 *     LdrpInitializationComplete @ 0x180066678 (LdrpInitializationComplete.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180070920 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLogDllState @ 0x180070D00 (LdrpLogDllState.c)
 *     LdrpMapDllNtFileName @ 0x180071640 (LdrpMapDllNtFileName.c)
 *     LdrpCompleteMapModule @ 0x180073340 (LdrpCompleteMapModule.c)
 *     LdrpLogDllStateEx2 @ 0x180084174 (LdrpLogDllStateEx2.c)
 *     RtlpWaitOnCriticalSection @ 0x18009A7A0 (RtlpWaitOnCriticalSection.c)
 *     LdrpAllocatePlaceHolder @ 0x1800D96C0 (LdrpAllocatePlaceHolder.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800F38E8 (LdrpTryAcquireLoaderLock.c)
 *     LdrpLogError @ 0x1800FB40C (LdrpLogError.c)
 *     LdrpEtwLogLoaderSnaps @ 0x180117A20 (LdrpEtwLogLoaderSnaps.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     LdrpEventAddUnicodeString @ 0x1800D99F0 (LdrpEventAddUnicodeString.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

_BYTE *__fastcall LdrpLogEtwEvent(__int16 a1, __int64 a2, char a3, char a4, unsigned __int16 *a5, unsigned __int16 *a6)
{
  size_t v7; // rbp
  _BYTE *v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rcx
  _BYTE *result; // rax
  int v14; // [rsp+24h] [rbp-284h] BYREF
  __int16 v15; // [rsp+28h] [rbp-280h]
  _BYTE v16[576]; // [rsp+30h] [rbp-278h] BYREF

  v7 = 576LL;
  v15 = a1;
  memset_thunk_772440563353939046(v16, 0, 0x240uLL);
  v14 = 0;
  v8 = v16;
  v9 = 0;
  if ( a5 )
  {
    v9 = *a5 + 2;
    if ( a6 )
      v9 += *a6 + 2;
  }
  if ( v9 <= 0x214
    || (result = (_BYTE *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9 + 42), (v8 = result) != 0LL) )
  {
    if ( v9 + 42 > 0x240 )
      v7 = v9 + 42;
    memset_thunk_772440563353939046(v8, 0, v7);
    *((_WORD *)v8 + 3) = v15;
    if ( a2 != -1 )
    {
      v8[40] = a3;
      v8[41] = a4;
      *((_QWORD *)v8 + 4) = a2;
      if ( v9 )
      {
        LdrpEventAddUnicodeString(a5, v8 + 42, v9, &v14);
        if ( a6 )
          LdrpEventAddUnicodeString(a6, &v8[v14 + 42], v9 - v14, &v14);
      }
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v10 = 2147353476LL;
    NtTraceEvent(*(unsigned __int8 *)v10, 1026LL, v9 + 10, v8);
    result = v16;
    if ( v16 != v8 )
      return (_BYTE *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v8);
  }
  return result;
}
