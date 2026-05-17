/*
 * XREFs of RtlInitializeCriticalSectionEx @ 0x1800073E0
 * Callers:
 *     RtlInitializeResource @ 0x1800059E0 (RtlInitializeResource.c)
 *     LdrpInitMuiCrits @ 0x18001FC84 (LdrpInitMuiCrits.c)
 *     RtlpCreateHeap @ 0x180036390 (RtlpCreateHeap.c)
 *     RtlpInitMuiCriticalSection @ 0x18008BB44 (RtlpInitMuiCriticalSection.c)
 *     EtwpInitLoggerContext @ 0x1800B5FE0 (EtwpInitLoggerContext.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     LdrpInitParallelLoadingSupport @ 0x18010C758 (LdrpInitParallelLoadingSupport.c)
 *     LdrpCreateSoftwareEnclave @ 0x180114CD4 (LdrpCreateSoftwareEnclave.c)
 *     AVrfInitializeVerifier @ 0x18011B9E0 (AVrfInitializeVerifier.c)
 *     RtlInitializeHeapManager @ 0x18011BFFC (RtlInitializeHeapManager.c)
 *     RtlTraceDatabaseCreate @ 0x1801496F0 (RtlTraceDatabaseCreate.c)
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x180006550 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlInitializeCriticalSectionEx(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  _DWORD *SharedData; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // rsi
  _DWORD v13[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+38h] [rbp-30h]
  __int64 v16; // [rsp+40h] [rbp-28h]
  __int64 v17; // [rsp+48h] [rbp-20h]

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
    v10 = 0LL;
  }
  else if ( (a3 & 0x2000000) != 0 || !a2 )
  {
    v10 = 33556432LL;
  }
  else
  {
    v10 = a2 & 0xFFFFFF;
  }
  v11 = a1;
  v12 = (__int64 *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v10 | a3 & 0x9000000;
  if ( (a3 & 0x10000000) != 0 || RtlpForceCSDebugInfoCreation )
  {
    *(_QWORD *)a1 = -1LL;
    RtlpAddDebugInfoToCriticalSection(a1);
    if ( *(_QWORD *)a1 == -1LL )
      *v12 |= 0x1000000uLL;
  }
  else
  {
    *(_QWORD *)a1 = -1LL;
  }
  v6 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v8 = (__int64)NtCurrentPeb()->SharedData + 552;
  else
    v8 = 2147353474LL;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v9 = *v12;
    v14 = 0LL;
    v16 = v9;
    v13[0] = 0;
    v13[1] = 388169728;
    v15 = 0LL;
    v17 = a1;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v8, v11, a3, a4) )
      v6 = (__int64)NtCurrentPeb()->SharedData + 552;
    NtTraceEvent(*(unsigned __int8 *)v6, 66562LL, 16LL, v13);
  }
  return 0LL;
}
