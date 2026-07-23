/*
 * XREFs of RtlSetProcessDebugInformation @ 0x180135690
 * Callers:
 *     RtlpSetProcessDebugInformationRemote @ 0x180135AD0 (RtlpSetProcessDebugInformationRemote.c)
 * Callees:
 *     RtlpChangeQueryDebugBufferTarget @ 0x180099350 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpCreateUserThreadEx @ 0x1800B4FC0 (RtlpCreateUserThreadEx.c)
 *     RtlControlStackTraceDataBase @ 0x1800E4904 (RtlControlStackTraceDataBase.c)
 *     NtWaitForSingleObject @ 0x1801632A0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwQueryInformationThread @ 0x1801636C0 (ZwQueryInformationThread.c)
 *     ZwResumeThread @ 0x180163C60 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x180163C80 (NtTerminateThread.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __cdecl RtlSetProcessDebugInformation(HANDLE UniqueProcessId, ULONG Flags, PRTL_DEBUG_INFORMATION Buffer)
{
  int InformationThread; // ebx
  char v5; // si
  NTSTATUS result; // eax
  SIZE_T OffsetFree; // r8
  HANDLE v8; // rdi
  int v9; // eax
  void *v10; // rcx
  PRTL_PROCESS_VERIFIER_OPTIONS VerifierOptions; // r8
  PRTL_PROCESS_BACKTRACES BackTraces; // rax
  ULONG *p_NumberOfBackTraceLookups; // r8
  int v14; // [rsp+30h] [rbp-29h]
  _OWORD ThreadInformation[2]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v16; // [rsp+80h] [rbp+27h]
  int v17; // [rsp+88h] [rbp+2Fh]
  HANDLE Handle; // [rsp+C0h] [rbp+67h] BYREF
  ULONG SizeStruct; // [rsp+C8h] [rbp+6Fh] BYREF
  HANDLE ThreadHandle; // [rsp+D0h] [rbp+77h] BYREF
  LARGE_INTEGER Timeout; // [rsp+D8h] [rbp+7Fh] BYREF

  Timeout.QuadPart = -600000000LL;
  v16 = 0LL;
  memset(ThreadInformation, 0, sizeof(ThreadInformation));
  v17 = 0;
  InformationThread = 0;
  ThreadHandle = 0LL;
  Buffer->Flags = Flags;
  v5 = Flags;
  if ( NtCurrentTeb()->ClientId.UniqueProcess == UniqueProcessId )
  {
    if ( (Flags & 1) != 0 && (NtCurrentPeb()->NtGlobalFlag & 0x2000100) != 0 )
    {
      VerifierOptions = Buffer->VerifierOptions;
      if ( !VerifierOptions )
        return -1073741801;
      SizeStruct = VerifierOptions->SizeStruct;
      InformationThread = ((__int64 (__fastcall *)(_QWORD, ULONG *))qword_1801CE630)(0LL, &SizeStruct);
      if ( InformationThread )
        return InformationThread;
    }
    if ( (v5 & 2) == 0 )
      return InformationThread;
    BackTraces = Buffer->BackTraces;
    if ( BackTraces )
    {
      if ( BackTraces->CommittedMemory )
      {
        p_NumberOfBackTraceLookups = &BackTraces->NumberOfBackTraceLookups;
      }
      else
      {
        if ( BackTraces->ReservedMemory < 0x18 )
          return -1073741811;
        p_NumberOfBackTraceLookups = &BackTraces->NumberOfBackTraceLookups;
        if ( *(_QWORD *)&BackTraces->NumberOfBackTraceLookups || BackTraces->BackTraces[0].SymbolicBackTrace )
          return -1073741811;
      }
      return RtlControlStackTraceDataBase(
               BackTraces->CommittedMemory,
               BackTraces->ReservedMemory,
               p_NumberOfBackTraceLookups);
    }
    return -1073741801;
  }
  Handle = 0LL;
  result = RtlpChangeQueryDebugBufferTarget((__int64)Buffer, UniqueProcessId, 0, &Handle);
  if ( result < 0 )
    return result;
  OffsetFree = Buffer->OffsetFree;
  if ( OffsetFree > 0xD0 )
    memmove((char *)&Buffer[1] + Buffer->ViewSize, &Buffer[1], OffsetFree - 208);
  InformationThread = RtlpCreateUserThreadEx(
                        Handle,
                        0LL,
                        7,
                        0,
                        0LL,
                        0LL,
                        v14,
                        (PUSER_THREAD_START_ROUTINE)RtlpSetProcessDebugInformationRemote,
                        Buffer->ViewBaseTarget,
                        &ThreadHandle,
                        0LL);
  if ( InformationThread >= 0 )
  {
    v8 = ThreadHandle;
    v9 = ZwResumeThread(ThreadHandle, 0LL);
    InformationThread = v9;
    v10 = v8;
    if ( v9 < 0 || (v9 = NtWaitForSingleObject(v8, 1u, &Timeout), InformationThread = v9, v10 = v8, v9 < 0) )
    {
      NtTerminateThread(v10, v9);
    }
    else
    {
      InformationThread = ZwQueryInformationThread(v8, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
      if ( InformationThread >= 0 )
        InformationThread = ThreadInformation[0];
    }
    NtClose(v8);
  }
  NtClose(Handle);
  return InformationThread;
}
