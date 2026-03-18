/*
 * XREFs of SepDeReferenceLogonSessionDirect @ 0x140449F64
 * Callers:
 *     SepLinkLogonSessions @ 0x1404A1A1C (SepLinkLogonSessions.c)
 *     SeShutdownServerSilo @ 0x14077FB7C (SeShutdownServerSilo.c)
 *     SeSetSessionIdTokenWithLinked @ 0x140780630 (SeSetSessionIdTokenWithLinked.c)
 *     SepSetServerSiloToken @ 0x140780948 (SepSetServerSiloToken.c)
 *     SeGetLinkedToken @ 0x140A2AFB0 (SeGetLinkedToken.c)
 *     SepStopReferencingLogonSession @ 0x140A744C0 (SepStopReferencingLogonSession.c)
 *     NtQueryInformationToken @ 0x140AC8E20 (NtQueryInformationToken.c)
 * Callees:
 *     SepDeReferenceLogonSession @ 0x1409A78B8 (SepDeReferenceLogonSession.c)
 */

signed __int64 __fastcall SepDeReferenceLogonSessionDirect(_QWORD *a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // rtt
  __int64 v3; // rdx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  _m_prefetchw(a1 + 3);
  result = a1[3];
  while ( result - 1 > 0 )
  {
    v2 = result;
    result = _InterlockedCompareExchange64(a1 + 3, result - 1, result);
    if ( v2 == result )
      return result;
  }
  if ( result != 1 )
    __fastfail(0xEu);
  v3 = a1[20];
  v4 = a1[1];
  return SepDeReferenceLogonSession(&v4, v3);
}
