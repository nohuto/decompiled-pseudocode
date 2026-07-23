/*
 * XREFs of EtwpCheckLoggerControlAccess @ 0x1408375F4
 * Callers:
 *     EtwpGetPmcSessions @ 0x14064B0B8 (EtwpGetPmcSessions.c)
 *     EtwTraceRaw @ 0x14064D8FC (EtwTraceRaw.c)
 *     EtwpTransitionToRealtime @ 0x14064DB08 (EtwpTransitionToRealtime.c)
 *     EtwpGetSoftRestartInformation @ 0x1407AFBC0 (EtwpGetSoftRestartInformation.c)
 *     EtwpQueryTrace @ 0x1408360C0 (EtwpQueryTrace.c)
 *     EtwpUpdateEnableMask @ 0x14083745C (EtwpUpdateEnableMask.c)
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 *     EtwpCheckSystemTraceAccess @ 0x1409454B0 (EtwpCheckSystemTraceAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14094649C (EtwQueryPerformanceTraceInformation.c)
 *     EtwpStopTrace @ 0x1409D2184 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x1409D2420 (EtwpFlushTrace.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140A0EEA0 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A39934 (EtwSetPerformanceTraceInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140A39DC4 (EtwpSetSoftRestartInformation.c)
 *     EtwpRealtimeConnect @ 0x140A56DA8 (EtwpRealtimeConnect.c)
 *     EtwpUpdateTrace @ 0x140ADA038 (EtwpUpdateTrace.c)
 * Callees:
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x14083732C (EtwpReferenceLoggerSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     ObDereferenceSecurityDescriptor @ 0x14087E040 (ObDereferenceSecurityDescriptor.c)
 */

__int64 __fastcall EtwpCheckLoggerControlAccess(ACCESS_MASK DesiredAccess, __int64 a2)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi
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
  while ( (v5 ^ v6) < 0xF )
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 784), v6 + 1, v6);
    if ( v7 == v6 )
      return (unsigned int)AccessStatus;
  }
  ObDereferenceSecurityDescriptor(v5, 1LL);
  return (unsigned int)AccessStatus;
}
