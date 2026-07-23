/*
 * XREFs of PfpProcessScenarioPhase @ 0x1408F77E8
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1408F573C (PfSetSuperfetchInformation.c)
 *     PfSnSetPrefetcherInformation @ 0x14094AB4C (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     PfpPartitionIterate @ 0x14022A280 (PfpPartitionIterate.c)
 *     PsGetCurrentProcessSessionId @ 0x1402BAD30 (PsGetCurrentProcessSessionId.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     RtlGetActiveConsoleId @ 0x140421360 (RtlGetActiveConsoleId.c)
 *     PfpPartitionIterateAndCheckCanAnyDoAccessLogging @ 0x1405CA1DC (PfpPartitionIterateAndCheckCanAnyDoAccessLogging.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PsGetNextSession @ 0x140A9F8E0 (PsGetNextSession.c)
 *     PfpScenCtxPrefetchWait @ 0x140B5D1E0 (PfpScenCtxPrefetchWait.c)
 *     PfPowerActionNotify @ 0x140B6CE28 (PfPowerActionNotify.c)
 *     PfpScenCtxScenarioSet @ 0x140B6EDB0 (PfpScenCtxScenarioSet.c)
 */

__int64 __fastcall PfpProcessScenarioPhase(_DWORD *a1, char a2)
{
  unsigned int v2; // edi
  int v3; // r9d
  __int64 v4; // rdx
  int v6; // ecx
  ULONG ActiveConsoleId; // ebx
  int v8; // ecx
  ULONG v9; // ebx
  int v10; // r14d
  void *NextSession; // rax
  __int128 v12; // [rsp+20h] [rbp-20h] BYREF
  int v13; // [rsp+30h] [rbp-10h]

  v2 = 0;
  v13 = 0;
  v12 = 0LL;
  if ( *a1 != 4 )
    return (unsigned int)-1073741811;
  v3 = a1[1];
  if ( (unsigned int)(v3 - 1) > 4 )
    return (unsigned int)-1073741701;
  if ( v3 == 1 || v3 == 2 )
    goto LABEL_8;
  if ( v3 != 3 )
  {
    if ( v3 != 4 )
    {
      if ( v3 == 5 )
      {
LABEL_8:
        if ( a2 )
        {
          return (unsigned int)-1073741790;
        }
        else
        {
          v4 = ((a1[4] & 1) != 0) | 4u;
          if ( v3 != 5 )
            v4 = (a1[4] & 1) != 0;
          PfPowerActionNotify((unsigned int)a1[2], v4);
        }
        return v2;
      }
      return (unsigned int)-1073741811;
    }
    v6 = a1[2];
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        ActiveConsoleId = RtlGetActiveConsoleId();
        if ( (unsigned int)PsGetCurrentProcessSessionId() == ActiveConsoleId )
        {
          PfpScenCtxScenarioSet((ULONG_PTR)&qword_140E66FD0);
          HIDWORD(v12) = dword_140E67004;
          LODWORD(v12) = 5;
          *(_QWORD *)((char *)&v12 + 4) = 0x300000002LL;
          v13 = 1;
          PfpPartitionIterate((__int64 (__fastcall *)(_QWORD, _QWORD))PfpLogScenarioEventCallback, 1, (__int64)&v12);
        }
      }
      return v2;
    }
LABEL_31:
    PfpScenCtxScenarioSet((ULONG_PTR)&qword_140E66FD0);
    return v2;
  }
  v8 = a1[2];
  if ( v8 )
  {
    if ( v8 != 1 || dword_140E67000 != 3 )
      return v2;
    PfpScenCtxPrefetchWait((ULONG_PTR)&qword_140E66FD0);
    HIDWORD(v12) = dword_140E67004;
    *(_QWORD *)&v12 = 3LL;
    DWORD2(v12) = 0;
    v13 = 0;
    PfpPartitionIterate((__int64 (__fastcall *)(_QWORD, _QWORD))PfpLogScenarioEventCallback, 0, (__int64)&v12);
    goto LABEL_31;
  }
  v9 = RtlGetActiveConsoleId();
  if ( (unsigned int)PsGetCurrentProcessSessionId() == v9
    && (unsigned int)PfpPartitionIterateAndCheckCanAnyDoAccessLogging() )
  {
    v10 = 0;
    NextSession = 0LL;
    while ( 1 )
    {
      NextSession = (void *)PsGetNextSession(NextSession);
      if ( !NextSession )
        break;
      if ( (unsigned int)++v10 >= 3 )
      {
        ObfDereferenceObjectWithTag(NextSession, 0x79517350u);
        goto LABEL_31;
      }
    }
  }
  return v2;
}
