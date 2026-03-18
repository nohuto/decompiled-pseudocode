/*
 * XREFs of EtwpCheckGuidAccess @ 0x14083848C
 * Callers:
 *     EtwpLogFileNameRundown @ 0x1407B0BDC (EtwpLogFileNameRundown.c)
 *     EtwpStartLogger @ 0x140831694 (EtwpStartLogger.c)
 *     EtwpNotifyGuid @ 0x140836EE4 (EtwpNotifyGuid.c)
 *     EtwpCheckNotificationAccess @ 0x140838344 (EtwpCheckNotificationAccess.c)
 *     EtwpEnableGuid @ 0x14083B040 (EtwpEnableGuid.c)
 *     EtwpCheckSystemTraceAccess @ 0x14095D9F0 (EtwpCheckSystemTraceAccess.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x140A15BDC (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A440A4 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpAccessCheck @ 0x1408383D4 (EtwpAccessCheck.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x140839D68 (EtwpGetSecurityDescriptorByGuid.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
