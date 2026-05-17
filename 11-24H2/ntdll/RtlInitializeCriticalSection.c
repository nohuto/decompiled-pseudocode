/*
 * XREFs of RtlInitializeCriticalSection @ 0x180099000
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18009AEE0 (RtlpAddDebugInfoToCriticalSection.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlInitializeCriticalSection(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi
  _DWORD *SharedData; // rcx
  __int64 v6; // rcx
  __int64 v8; // rax
  _DWORD v9[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+28h] [rbp-40h]
  __int64 v11; // [rsp+38h] [rbp-30h]
  __int64 v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+48h] [rbp-20h]

  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v3 = 33556432LL;
  if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
    v3 = 0LL;
  *(_QWORD *)(a1 + 32) = v3;
  *(_QWORD *)a1 = -1LL;
  if ( RtlpForceCSDebugInfoCreation )
  {
    RtlpAddDebugInfoToCriticalSection(a1, a2);
    if ( *(_QWORD *)a1 == -1LL )
      *(_QWORD *)(a1 + 32) |= 0x1000000uLL;
  }
  v4 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v6 = (__int64)NtCurrentPeb()->SharedData + 552;
  else
    v6 = 2147353474LL;
  if ( *(_BYTE *)v6 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 32);
    v10 = 0LL;
    v12 = v8;
    v9[0] = 0;
    v9[1] = 388169728;
    v11 = 0LL;
    v13 = a1;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v4 = (__int64)NtCurrentPeb()->SharedData + 552;
    NtTraceEvent(*(unsigned __int8 *)v4, 66562LL, 16LL, v9);
  }
  return 0LL;
}
