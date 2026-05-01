/*
 * XREFs of AcpAcquireClientRegistration @ 0x18001BA9C
 * Callers:
 *     SubscribeActivityCoordinatorPolicyInternal @ 0x18001BC88 (SubscribeActivityCoordinatorPolicyInternal.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x180002D0C (CempLockAcquireExclusive.c)
 *     CrmRegister @ 0x180008990 (CrmRegister.c)
 */

__int64 __fastcall AcpAcquireClientRegistration(_QWORD *a1)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  int v4; // ebx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt

  _m_prefetchw((char *)&xmmword_18002FC68 + 8);
  v2 = *((_QWORD *)&xmmword_18002FC68 + 1);
  while ( (unsigned __int64)(v2 + 1) > 1 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64((_QWORD *)&xmmword_18002FC68 + 1, v2 + 1, v2);
    if ( v3 == v2 )
    {
      v4 = 0;
      *a1 = xmmword_18002FC68;
      return (unsigned int)v4;
    }
  }
  if ( v2 )
    __fastfail(0xEu);
  CempLockAcquireExclusive((__int64)&AcGlobals);
  _m_prefetchw((char *)&xmmword_18002FC68 + 8);
  v5 = *((_QWORD *)&xmmword_18002FC68 + 1);
  while ( (unsigned __int64)(v5 + 1) > 1 )
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange64((_QWORD *)&xmmword_18002FC68 + 1, v5 + 1, v5);
    if ( v6 == v5 )
      goto LABEL_15;
  }
  if ( v5 )
    __fastfail(0xEu);
  v4 = CrmRegister(
         (struct _CRMP_REGISTRATION_CONTEXT **)&xmmword_18002FC68,
         0x133u,
         (__int64)L"ActivityCoordinator API");
  if ( v4 >= 0 )
  {
    *((_QWORD *)&xmmword_18002FC68 + 1) = 1LL;
LABEL_15:
    v4 = 0;
    *a1 = xmmword_18002FC68;
  }
  DWORD2(AcGlobals) = 0;
  RtlReleaseSRWLockExclusive(&AcGlobals);
  return (unsigned int)v4;
}
