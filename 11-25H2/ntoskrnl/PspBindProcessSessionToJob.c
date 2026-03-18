/*
 * XREFs of PspBindProcessSessionToJob @ 0x1409045A0
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1409040C0 (PspEstablishJobHierarchy.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     PsGetSessionId @ 0x140433C80 (PsGetSessionId.c)
 *     PspConvertJobToMixed @ 0x1406EF0CC (PspConvertJobToMixed.c)
 */

__int64 __fastcall PspBindProcessSessionToJob(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  signed __int32 SessionId; // r9d
  int v4; // r10d
  signed __int32 v6; // eax

  SessionId = PsGetSessionId(a2);
  if ( v4 == SessionId )
    return 0LL;
  if ( v4 == -1
    && ((v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 576), SessionId, -1), v6 == -1)
     || v6 == SessionId) )
  {
    return 0LL;
  }
  else
  {
    return PspConvertJobToMixed(v2, 0);
  }
}
