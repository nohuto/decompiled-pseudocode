/*
 * XREFs of RtlInitializeCriticalSection @ 0x180004670
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x180006550 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlInitializeCriticalSection(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  _DWORD *SharedData; // rcx
  __int64 v8; // rcx
  __int64 v10; // rax
  _DWORD v11[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+38h] [rbp-30h]
  __int64 v14; // [rsp+40h] [rbp-28h]
  __int64 v15; // [rsp+48h] [rbp-20h]

  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v5 = 33556432LL;
  if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
    v5 = 0LL;
  *(_QWORD *)(a1 + 32) = v5;
  *(_QWORD *)a1 = -1LL;
  if ( RtlpForceCSDebugInfoCreation )
  {
    RtlpAddDebugInfoToCriticalSection(a1, a2);
    if ( *(_QWORD *)a1 == -1LL )
      *(_QWORD *)(a1 + 32) |= 0x1000000uLL;
  }
  v6 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v8 = (__int64)NtCurrentPeb()->SharedData + 552;
  else
    v8 = 2147353474LL;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 32);
    v12 = 0LL;
    v14 = v10;
    v11[0] = 0;
    v11[1] = 388169728;
    v13 = 0LL;
    v15 = a1;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v8, a2, a3, a4) )
      v6 = (__int64)NtCurrentPeb()->SharedData + 552;
    NtTraceEvent(*(unsigned __int8 *)v6, 66562LL, 16LL, v11);
  }
  return 0LL;
}
