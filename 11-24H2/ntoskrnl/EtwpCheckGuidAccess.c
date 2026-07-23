/*
 * XREFs of EtwpCheckGuidAccess @ 0x140836754
 * Callers:
 *     EtwpLogFileNameRundown @ 0x1407B102C (EtwpLogFileNameRundown.c)
 *     EtwpIsRegEntryAllowed @ 0x140832F04 (EtwpIsRegEntryAllowed.c)
 *     EtwpNotifyGuid @ 0x140834644 (EtwpNotifyGuid.c)
 *     EtwpCheckNotificationAccess @ 0x14083638C (EtwpCheckNotificationAccess.c)
 *     EtwpCheckSystemTraceAccess @ 0x1409454B0 (EtwpCheckSystemTraceAccess.c)
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x140A0EDBC (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A39934 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpAccessCheck @ 0x14083669C (EtwpAccessCheck.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x140836FE0 (EtwpGetSecurityDescriptorByGuid.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
