/*
 * XREFs of RtlInitializeCriticalSectionEx @ 0x180030BC0
 * Callers:
 *     RtlpInitMuiCriticalSection @ 0x1800115D4 (RtlpInitMuiCriticalSection.c)
 *     RtlpCreateHeap @ 0x1800248B0 (RtlpCreateHeap.c)
 *     RtlInitializeResource @ 0x18002F1C0 (RtlInitializeResource.c)
 *     LdrpInitMuiCrits @ 0x180079C04 (LdrpInitMuiCrits.c)
 *     EtwpInitLoggerContext @ 0x1800A8DF0 (EtwpInitLoggerContext.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     LdrpInitParallelLoadingSupport @ 0x180104C78 (LdrpInitParallelLoadingSupport.c)
 *     LdrpCreateSoftwareEnclave @ 0x18010CFE4 (LdrpCreateSoftwareEnclave.c)
 *     AVrfInitializeVerifier @ 0x180113994 (AVrfInitializeVerifier.c)
 *     RtlInitializeHeapManager @ 0x180114300 (RtlInitializeHeapManager.c)
 *     RtlTraceDatabaseCreate @ 0x1801464F0 (RtlTraceDatabaseCreate.c)
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x18002FD30 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlInitializeCriticalSectionEx(PRTL_CRITICAL_SECTION CriticalSection, ULONG SpinCount, ULONG Flags)
{
  __int64 v5; // rdi
  _DWORD *SharedData; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 *p_SpinCount; // rsi
  _DWORD Fields[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+38h] [rbp-30h]
  unsigned __int64 v14; // [rsp+40h] [rbp-28h]
  PRTL_CRITICAL_SECTION v15; // [rsp+48h] [rbp-20h]

  if ( (Flags & 0xE0000000) != 0 || (Flags & 0x11000000) == 0x11000000 )
    return -1073741583;
  if ( (SpinCount & 0xFF000000) != 0 )
    return -1073741584;
  if ( (Flags & 0x4000000) != 0 )
    return 0;
  CriticalSection->RecursionCount = 0;
  CriticalSection->OwningThread = 0LL;
  CriticalSection->LockSemaphore = 0LL;
  CriticalSection->LockCount = -1;
  if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
  {
    v9 = 0LL;
  }
  else if ( (Flags & 0x2000000) != 0 || !SpinCount )
  {
    v9 = 33556432LL;
  }
  else
  {
    v9 = SpinCount & 0xFFFFFF;
  }
  p_SpinCount = &CriticalSection->SpinCount;
  CriticalSection->SpinCount = v9 | Flags & 0x9000000;
  if ( (Flags & 0x10000000) != 0 || RtlpForceCSDebugInfoCreation )
  {
    CriticalSection->DebugInfo = (_RTL_CRITICAL_SECTION_DEBUG *)-1LL;
    RtlpAddDebugInfoToCriticalSection((__int64)CriticalSection);
    if ( CriticalSection->DebugInfo == (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
      *p_SpinCount |= 0x1000000uLL;
  }
  else
  {
    CriticalSection->DebugInfo = (_RTL_CRITICAL_SECTION_DEBUG *)-1LL;
  }
  v5 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v7 = (__int64)NtCurrentPeb()->SharedData + 552;
  else
    v7 = 2147353474LL;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v8 = *p_SpinCount;
    v12 = 0LL;
    v14 = v8;
    Fields[0] = 0;
    Fields[1] = 388169728;
    v13 = 0LL;
    v15 = CriticalSection;
    if ( RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->SharedData + 552;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v5, 0x10402u, 0x10u, Fields);
  }
  return 0;
}
