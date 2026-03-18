/*
 * XREFs of SepAdtAuditThisEventWithContext @ 0x140856980
 * Callers:
 *     SepCommonAccessCheckEx @ 0x1403CD1A0 (SepCommonAccessCheckEx.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1403D6510 (SeReportSecurityEventWithSubCategory.c)
 *     SeAuditingAnyFileEventsWithContextEx @ 0x14042A770 (SeAuditingAnyFileEventsWithContextEx.c)
 *     SeAuditingFileEventsWithContextEx @ 0x140487D50 (SeAuditingFileEventsWithContextEx.c)
 *     SeAuditingFileOrGlobalEvents @ 0x140782B60 (SeAuditingFileOrGlobalEvents.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140854390 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140854730 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140854E70 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x140856A90 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14089FC40 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ObpCheckObjectReference @ 0x1409156D0 (ObpCheckObjectReference.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14092B360 (SepAccessCheckAndAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140982C90 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140982FF4 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409851A4 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x140985C34 (SepAdtCloseObjectAuditAlarm.c)
 *     SeAuditingHardLinkEventsWithContext @ 0x140A5F070 (SeAuditingHardLinkEventsWithContext.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x140A730B0 (SeOpenObjectAuditAlarmForNonObObject.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x14041E1D0 (SepAuditingEnabledForSubcategory.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140782CA8 (SepAdtIncorporatePerUserPolicy.c)
 *     SepAuditFailed @ 0x140854DA0 (SepAuditFailed.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x14099C480 (SepAdtAuditThisEventByCategoryWithContext.c)
 */

char __fastcall SepAdtAuditThisEventWithContext(__int64 a1, char a2, char a3, struct _SECURITY_SUBJECT_CONTEXT *a4)
{
  int v7; // ebx
  char result; // al
  __int64 v9; // rbx
  char v10; // di
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r15
  __int64 ClientToken; // r9
  BOOL v13; // eax
  __int64 v14; // rdx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-38h] BYREF
  char v16; // [rsp+70h] [rbp+8h] BYREF

  v7 = a1;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( (unsigned int)a1 <= 8 )
  {
    v13 = a2 != 0;
    v14 = v13 | 0x10u;
    if ( !a3 )
      v14 = v13;
    return SepAdtAuditThisEventByCategoryWithContext(a1, v14, a4);
  }
  else
  {
    result = SepAuditingEnabledForSubcategory(a1, a2, a3);
    v9 = (unsigned int)(v7 - 100);
    v16 = result;
    v10 = result;
    if ( SepTokenPolicyCounter[v9] )
    {
      if ( a4 )
      {
        p_SubjectContext = a4;
      }
      else
      {
        p_SubjectContext = &SubjectContext;
        SeCaptureSubjectContext(&SubjectContext);
      }
      ClientToken = (__int64)p_SubjectContext->ClientToken;
      if ( p_SubjectContext->ClientToken || (ClientToken = (__int64)p_SubjectContext->PrimaryToken) != 0 )
      {
        SepAdtIncorporatePerUserPolicy(v9, a2, a3, ClientToken, &v16);
        v10 = v16;
      }
      else
      {
        SepAuditFailed(-1073741700);
      }
      if ( !a4 )
        SeReleaseSubjectContext(p_SubjectContext);
      return v10;
    }
  }
  return result;
}
