/*
 * XREFs of EtwpCheckLoggerControlAccess @ 0x1408970A0
 * Callers:
 *     EtwpGetPmcSessions @ 0x140640A88 (EtwpGetPmcSessions.c)
 *     EtwTraceRaw @ 0x14064325C (EtwTraceRaw.c)
 *     EtwpTransitionToRealtime @ 0x140643468 (EtwpTransitionToRealtime.c)
 *     EtwpGetSoftRestartInformation @ 0x1407A03A0 (EtwpGetSoftRestartInformation.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14082425C (EtwQueryPerformanceTraceInformation.c)
 *     EtwpStopTrace @ 0x140892F28 (EtwpStopTrace.c)
 *     EtwpUpdateTrace @ 0x140893BB4 (EtwpUpdateTrace.c)
 *     EtwpFlushTrace @ 0x140894628 (EtwpFlushTrace.c)
 *     EtwpQueryTrace @ 0x140895150 (EtwpQueryTrace.c)
 *     EtwpUpdateEnableMask @ 0x140896F0C (EtwpUpdateEnableMask.c)
 *     EtwpRegisterUMProvider @ 0x14089D2F0 (EtwpRegisterUMProvider.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140A118E4 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A3F778 (EtwSetPerformanceTraceInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140A3FC08 (EtwpSetSoftRestartInformation.c)
 *     EtwpRealtimeConnect @ 0x140A5E498 (EtwpRealtimeConnect.c)
 *     EtwpCheckSystemTraceAccess @ 0x140A74364 (EtwpCheckSystemTraceAccess.c)
 * Callees:
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ObDereferenceSecurityDescriptor @ 0x14086EF20 (ObDereferenceSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x140897194 (EtwpReferenceLoggerSecurityDescriptor.c)
 */

__int64 __fastcall EtwpCheckLoggerControlAccess(ACCESS_MASK DesiredAccess, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+18h] BYREF

  v4 = EtwpReferenceLoggerSecurityDescriptor(a2);
  AccessStatus = 0;
  GrantedAccess = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v5 = v4;
  SeCaptureSubjectContext(&SubjectContext);
  SeAccessCheck(
    (PSECURITY_DESCRIPTOR)v5,
    &SubjectContext,
    0,
    DesiredAccess,
    0,
    0LL,
    (PGENERIC_MAPPING)&EtwpGenericMapping,
    1,
    &GrantedAccess,
    &AccessStatus);
  SeReleaseSubjectContext(&SubjectContext);
  _m_prefetchw((const void *)(a2 + 784));
  v6 = *(_QWORD *)(a2 + 784);
  while ( (v5 ^ (unsigned __int64)v6) < 0xF )
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 784), v6 + 1, v6);
    if ( v7 == v6 )
      return (unsigned int)AccessStatus;
  }
  ObDereferenceSecurityDescriptor(v5, 1u);
  return (unsigned int)AccessStatus;
}
