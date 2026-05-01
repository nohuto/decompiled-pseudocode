/*
 * XREFs of AcpReleaseClientRegistration @ 0x18001BBE8
 * Callers:
 *     UnsubscribeActivityCoordinatorPolicyInternal @ 0x18001BDD8 (UnsubscribeActivityCoordinatorPolicyInternal.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x180002D0C (CempLockAcquireExclusive.c)
 *     CrmUnregister @ 0x180008D70 (CrmUnregister.c)
 */

signed __int64 __fastcall AcpReleaseClientRegistration(struct _CRMP_REGISTRATION_CONTEXT *a1)
{
  signed __int64 result; // rax
  signed __int64 v3; // rtt
  signed __int64 v4; // rax
  bool v5; // cc
  signed __int64 v6; // rax

  _m_prefetchw((char *)&xmmword_18002FC68 + 8);
  result = *((_QWORD *)&xmmword_18002FC68 + 1);
  while ( result - 1 > 0 )
  {
    v3 = result;
    result = _InterlockedCompareExchange64((_QWORD *)&xmmword_18002FC68 + 1, result - 1, result);
    if ( v3 == result )
      return result;
  }
  if ( result != 1 )
    __fastfail(0xEu);
  CempLockAcquireExclusive((__int64)&AcGlobals);
  v4 = _InterlockedExchangeAdd64((_QWORD *)&xmmword_18002FC68 + 1, 0xFFFFFFFFFFFFFFFFuLL);
  v5 = v4 <= 1;
  v6 = v4 - 1;
  if ( v5 )
  {
    if ( v6 )
      __fastfail(0xEu);
    CrmUnregister(a1);
    *(_QWORD *)&xmmword_18002FC68 = 0LL;
  }
  DWORD2(AcGlobals) = 0;
  return RtlReleaseSRWLockExclusive(&AcGlobals);
}
