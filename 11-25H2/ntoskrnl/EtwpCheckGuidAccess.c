/*
 * XREFs of EtwpCheckGuidAccess @ 0x140898F2C
 * Callers:
 *     EtwpLogFileNameRundown @ 0x1407A180C (EtwpLogFileNameRundown.c)
 *     EtwpNotifyGuid @ 0x140897964 (EtwpNotifyGuid.c)
 *     EtwpCheckNotificationAccess @ 0x140898DE4 (EtwpCheckNotificationAccess.c)
 *     EtwpEnableGuid @ 0x14089BB2C (EtwpEnableGuid.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x140A11800 (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpStartLogger @ 0x140A374DC (EtwpStartLogger.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A3F778 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckSystemTraceAccess @ 0x140A74364 (EtwpCheckSystemTraceAccess.c)
 * Callees:
 *     EtwpAccessCheck @ 0x140898E74 (EtwpAccessCheck.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14089A850 (EtwpGetSecurityDescriptorByGuid.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCheckGuidAccess(__int64 a1, ACCESS_MASK a2, struct _SECURITY_SUBJECT_CONTEXT *a3)
{
  struct _SECURITY_SUBJECT_CONTEXT *v5; // r8
  PVOID v6; // rbx
  unsigned int v7; // edi
  PVOID P; // [rsp+48h] [rbp+20h] BYREF

  P = 0LL;
  EtwpGetSecurityDescriptorByGuid(a1, &P);
  v5 = a3;
  v6 = P;
  v7 = EtwpAccessCheck(P, a2, v5);
  if ( v6 && v6 != (PVOID)WmipDefaultAccessSd && v6 != EtwpDefaultTraceSecurityDescriptor )
    ExFreePoolWithTag(v6, 0);
  return v7;
}
