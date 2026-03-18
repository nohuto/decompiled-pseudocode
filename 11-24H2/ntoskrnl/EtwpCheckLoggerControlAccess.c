/*
 * XREFs of EtwpCheckLoggerControlAccess @ 0x140836724
 * Callers:
 *     EtwpGetPmcSessions @ 0x14064CAA8 (EtwpGetPmcSessions.c)
 *     EtwTraceRaw @ 0x14064F1FC (EtwTraceRaw.c)
 *     EtwpTransitionToRealtime @ 0x14064F408 (EtwpTransitionToRealtime.c)
 *     EtwpGetSoftRestartInformation @ 0x1407AF770 (EtwpGetSoftRestartInformation.c)
 *     EtwpStopTrace @ 0x1408325A4 (EtwpStopTrace.c)
 *     EtwpUpdateTrace @ 0x14083311C (EtwpUpdateTrace.c)
 *     EtwpFlushTrace @ 0x140833B94 (EtwpFlushTrace.c)
 *     EtwpQueryTrace @ 0x1408347C0 (EtwpQueryTrace.c)
 *     EtwpUpdateEnableMask @ 0x14083658C (EtwpUpdateEnableMask.c)
 *     EtwpRegisterUMProvider @ 0x14083C6F0 (EtwpRegisterUMProvider.c)
 *     EtwpCheckSystemTraceAccess @ 0x14095D9F0 (EtwpCheckSystemTraceAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14095E9DC (EtwQueryPerformanceTraceInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140A15CC0 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A440A4 (EtwSetPerformanceTraceInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140A44534 (EtwpSetSoftRestartInformation.c)
 *     EtwpRealtimeConnect @ 0x140A5EC30 (EtwpRealtimeConnect.c)
 * Callees:
 *     SeAccessCheck @ 0x14035A5B0 (SeAccessCheck.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x140836818 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     ObDereferenceSecurityDescriptor @ 0x140879D10 (ObDereferenceSecurityDescriptor.c)
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
  ObDereferenceSecurityDescriptor(v5, 1LL);
  return (unsigned int)AccessStatus;
}
