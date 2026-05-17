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

__int64 __fastcall RtlInitializeCriticalSectionAndSpinCount(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 *v8; // rsi
  bool v9; // zf
  __int64 v10; // rdi
  _DWORD *SharedData; // rcx
  __int64 v12; // rcx
  __int64 v14; // rax
  _DWORD v15[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+38h] [rbp-30h]
  __int64 v18; // [rsp+40h] [rbp-28h]
  __int64 v19; // [rsp+48h] [rbp-20h]

  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 12) = 0;
  v4 = a2 & 0xFFFFFF;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
  {
    v6 = 0LL;
  }
  else if ( v4 )
  {
    v6 = v4;
  }
  else
  {
    v6 = 33556432LL;
  }
  v7 = a1;
  *(_QWORD *)(a1 + 32) = v6;
  v8 = (__int64 *)(a1 + 32);
  v9 = RtlpForceCSDebugInfoCreation == 0;
  *(_QWORD *)a1 = -1LL;
  if ( !v9 )
  {
    RtlpAddDebugInfoToCriticalSection(a1, a1);
    if ( *(_QWORD *)a1 == -1LL )
      *v8 |= 0x1000000uLL;
  }
  v10 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v12 = (__int64)NtCurrentPeb()->SharedData + 552;
  else
    v12 = 2147353474LL;
  if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v14 = *v8;
    v16 = 0LL;
    v18 = v14;
    v15[0] = 0;
    v15[1] = 388169728;
    v17 = 0LL;
    v19 = a1;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v12, v7, a3, a4) )
      v10 = (__int64)NtCurrentPeb()->SharedData + 552;
    NtTraceEvent(*(unsigned __int8 *)v10, 66562LL, 16LL, v15);
  }
  return 0LL;
}
