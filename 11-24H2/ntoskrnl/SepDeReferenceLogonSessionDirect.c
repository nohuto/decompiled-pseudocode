/*
 * XREFs of SepDeReferenceLogonSessionDirect @ 0x140446E44
 * Callers:
 *     SepLinkLogonSessions @ 0x1404A1250 (SepLinkLogonSessions.c)
 *     SepOneWayLinkLogonSessions @ 0x1406083E4 (SepOneWayLinkLogonSessions.c)
 *     SeShutdownServerSilo @ 0x14078EE3C (SeShutdownServerSilo.c)
 *     SeSetSessionIdTokenWithLinked @ 0x14078F8F0 (SeSetSessionIdTokenWithLinked.c)
 *     SepSetServerSiloToken @ 0x14078FC08 (SepSetServerSiloToken.c)
 *     SeGetLinkedToken @ 0x140A31A00 (SeGetLinkedToken.c)
 *     SepStopReferencingLogonSession @ 0x140A76594 (SepStopReferencingLogonSession.c)
 *     NtQueryInformationToken @ 0x140AD3370 (NtQueryInformationToken.c)
 * Callees:
 *     SepDeReferenceLogonSession @ 0x140AD8BA4 (SepDeReferenceLogonSession.c)
 */

signed __int64 __fastcall SepDeReferenceLogonSessionDirect(_QWORD *a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // rtt
  __int64 v3; // rdx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  _m_prefetchw(a1 + 4);
  result = a1[4];
  while ( result - 1 > 0 )
  {
    v2 = result;
    result = _InterlockedCompareExchange64(a1 + 4, result - 1, result);
    if ( v2 == result )
      return result;
  }
  if ( result != 1 )
    __fastfail(0xEu);
  v3 = a1[21];
  v4 = a1[1];
  return SepDeReferenceLogonSession(&v4, v3);
}
