/*
 * XREFs of RtlInitializeCriticalSectionAndSpinCount @ 0x1800044E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x180006550 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlInitializeCriticalSectionAndSpinCount(PRTL_CRITICAL_SECTION CriticalSection, ULONG SpinCount)
{
  ULONG v2; // edx
  unsigned __int64 v4; // rcx
  unsigned __int64 *p_SpinCount; // rsi
  bool v6; // zf
  __int64 v7; // rdi
  _DWORD *SharedData; // rcx
  __int64 v9; // rcx
  unsigned __int64 v11; // rax
  _DWORD Fields[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+38h] [rbp-30h]
  unsigned __int64 v15; // [rsp+40h] [rbp-28h]
  PRTL_CRITICAL_SECTION v16; // [rsp+48h] [rbp-20h]

  CriticalSection->LockCount = -1;
  CriticalSection->RecursionCount = 0;
  v2 = SpinCount & 0xFFFFFF;
  CriticalSection->OwningThread = 0LL;
  CriticalSection->LockSemaphore = 0LL;
  if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
  {
    v4 = 0LL;
  }
  else if ( v2 )
  {
    v4 = v2;
  }
  else
  {
    v4 = 33556432LL;
  }
  CriticalSection->SpinCount = v4;
  p_SpinCount = &CriticalSection->SpinCount;
  v6 = RtlpForceCSDebugInfoCreation == 0;
  CriticalSection->DebugInfo = (_RTL_CRITICAL_SECTION_DEBUG *)-1LL;
  if ( !v6 )
  {
    RtlpAddDebugInfoToCriticalSection(CriticalSection, CriticalSection);
    if ( CriticalSection->DebugInfo == (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
      *p_SpinCount |= 0x1000000uLL;
  }
  v7 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v9 = (__int64)NtCurrentPeb()->SharedData + 552;
  else
    v9 = 2147353474LL;
  if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v11 = *p_SpinCount;
    v13 = 0LL;
    v15 = v11;
    Fields[0] = 0;
    Fields[1] = 388169728;
    v14 = 0LL;
    v16 = CriticalSection;
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 552;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v7, 0x10402u, 0x10u, Fields);
  }
  return 0;
}
