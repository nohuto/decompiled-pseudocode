/*
 * XREFs of RtlInitializeCriticalSectionEx @ 0x18009BD70
 * Callers:
 *     LdrpInitMuiCrits @ 0x180064024 (LdrpInitMuiCrits.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     RtlpInitMuiCriticalSection @ 0x18007CC94 (RtlpInitMuiCriticalSection.c)
 *     EtwpInitLoggerContext @ 0x18008D330 (EtwpInitLoggerContext.c)
 *     RtlInitializeResource @ 0x18009A370 (RtlInitializeResource.c)
 *     RtlpCreateHeap @ 0x1800A7550 (RtlpCreateHeap.c)
 *     LdrpInitParallelLoadingSupport @ 0x180109D48 (LdrpInitParallelLoadingSupport.c)
 *     LdrpCreateSoftwareEnclave @ 0x180111BD4 (LdrpCreateSoftwareEnclave.c)
 *     AVrfInitializeVerifier @ 0x180118960 (AVrfInitializeVerifier.c)
 *     RtlInitializeHeapManager @ 0x18011941C (RtlInitializeHeapManager.c)
 *     RtlTraceDatabaseCreate @ 0x180148140 (RtlTraceDatabaseCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18009AEE0 (RtlpAddDebugInfoToCriticalSection.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlInitializeCriticalSectionEx(__int64 a1, int a2, int a3)
{
  __int64 v5; // rdi
  _DWORD *SharedData; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // rsi
  _DWORD v11[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+38h] [rbp-30h]
  __int64 v14; // [rsp+40h] [rbp-28h]
  __int64 v15; // [rsp+48h] [rbp-20h]

  if ( (a3 & 0xE0000000) != 0 || (a3 & 0x11000000) == 0x11000000 )
    return 3221225713LL;
  if ( (a2 & 0xFF000000) != 0 )
    return 3221225712LL;
  if ( (a3 & 0x4000000) != 0 )
    return 0LL;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 8) = -1;
  if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
  {
    v9 = 0LL;
  }
  else if ( (a3 & 0x2000000) != 0 || !a2 )
  {
    v9 = 33556432LL;
  }
  else
  {
    v9 = a2 & 0xFFFFFF;
  }
  v10 = (__int64 *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v9 | a3 & 0x9000000;
  if ( (a3 & 0x10000000) != 0 || RtlpForceCSDebugInfoCreation )
  {
    *(_QWORD *)a1 = -1LL;
    RtlpAddDebugInfoToCriticalSection(a1);
    if ( *(_QWORD *)a1 == -1LL )
      *v10 |= 0x1000000uLL;
  }
  else
  {
    *(_QWORD *)a1 = -1LL;
  }
  v5 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v7 = (__int64)NtCurrentPeb()->SharedData + 552;
  else
    v7 = 2147353474LL;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v8 = *v10;
    v12 = 0LL;
    v14 = v8;
    v11[0] = 0;
    v11[1] = 388169728;
    v13 = 0LL;
    v15 = a1;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->SharedData + 552;
    NtTraceEvent(*(unsigned __int8 *)v5, 66562LL, 16LL, v11);
  }
  return 0LL;
}
