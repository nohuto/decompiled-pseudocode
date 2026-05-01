/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1800918F8
 * Callers:
 *     CrmGlobalsStart @ 0x180078A08 (CrmGlobalsStart.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180001954 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     CreateTlgAggregateSession @ 0x18009170C (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1800917E8 (DestroyAggregateSession.c)
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
    return TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_1800E72E8, 0LL, 0LL);
  TlgAggregateSession[39].Ptr = 0LL;
  TlgAggregateSession[40].Ptr = 0LL;
  TlgAggregateSession[41].Ptr = &dword_1800E72E8;
  v3 = TraceLoggingRegisterEx_EventRegister_EventSetInformation(
         (ULONGLONG *)&dword_1800E72E8,
         (ULONGLONG)TlgAggregateInternalRegisteredProviderEtwCallback,
         (ULONGLONG)TlgAggregateSession);
  if ( v3 < 0 )
  {
    qword_1800E7310 = 0LL;
    DestroyAggregateSession(v1);
    return (unsigned int)v3;
  }
  else
  {
    AcquireSRWLockExclusive(&stru_1800E95A0);
    if ( !qword_1800E95A8 )
      TraceLoggingRegisterEx_EventRegister_EventSetInformation(
        (ULONGLONG *)&dword_1800E7378,
        (ULONGLONG)TlgAggregateInternalProviderCallback,
        0LL);
    for ( i = &qword_1800E95A8; ; i = (__int64 *)(v5 + 336) )
    {
      v5 = *i;
      if ( !*i )
        break;
      if ( *(int **)(v5 + 328) == &dword_1800E72E8 )
        goto LABEL_11;
    }
    *i = (__int64)v1;
LABEL_11:
    ReleaseSRWLockExclusive(&stru_1800E95A0);
    return 0LL;
  }
}
