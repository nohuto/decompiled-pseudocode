/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x180091D58
 * Callers:
 *     CrmGlobalsStart @ 0x180078A68 (CrmGlobalsStart.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180001954 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     CreateTlgAggregateSession @ 0x180091B6C (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x180091C48 (DestroyAggregateSession.c)
 */

__int64 TlgRegisterAggregateProviderEx()
{
  RTL_SRWLOCK *TlgAggregateSession; // rax
  RTL_SRWLOCK *v1; // rbx
  int v3; // esi
  __int64 *i; // rax
  __int64 v5; // rcx

  TlgAggregateSession = CreateTlgAggregateSession(0);
  v1 = TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_1800E82E8, 0LL, 0LL);
  TlgAggregateSession[39].Ptr = 0LL;
  TlgAggregateSession[40].Ptr = 0LL;
  TlgAggregateSession[41].Ptr = &dword_1800E82E8;
  v3 = TraceLoggingRegisterEx_EventRegister_EventSetInformation(
         (ULONGLONG *)&dword_1800E82E8,
         (ULONGLONG)TlgAggregateInternalRegisteredProviderEtwCallback,
         (ULONGLONG)TlgAggregateSession);
  if ( v3 < 0 )
  {
    qword_1800E8310 = 0LL;
    DestroyAggregateSession(v1);
    return (unsigned int)v3;
  }
  else
  {
    AcquireSRWLockExclusive(&stru_1800EA4E8);
    if ( !qword_1800EA4F0 )
      TraceLoggingRegisterEx_EventRegister_EventSetInformation(
        (ULONGLONG *)&dword_1800E8378,
        (ULONGLONG)TlgAggregateInternalProviderCallback,
        0LL);
    for ( i = &qword_1800EA4F0; ; i = (__int64 *)(v5 + 336) )
    {
      v5 = *i;
      if ( !*i )
        break;
      if ( *(int **)(v5 + 328) == &dword_1800E82E8 )
        goto LABEL_11;
    }
    *i = (__int64)v1;
LABEL_11:
    ReleaseSRWLockExclusive(&stru_1800EA4E8);
    return 0LL;
  }
}
