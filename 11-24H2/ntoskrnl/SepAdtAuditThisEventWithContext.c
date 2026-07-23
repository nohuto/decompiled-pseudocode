/*
 * XREFs of SepAdtAuditThisEventWithContext @ 0x14084EED0
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x1403C25D0 (SeReportSecurityEventWithSubCategory.c)
 *     SeAuditingAnyFileEventsWithContextEx @ 0x140418430 (SeAuditingAnyFileEventsWithContextEx.c)
 *     SepCommonAccessCheckEx @ 0x140465250 (SepCommonAccessCheckEx.c)
 *     SeAuditingFileEventsWithContextEx @ 0x140482770 (SeAuditingFileEventsWithContextEx.c)
 *     SeAuditingFileOrGlobalEvents @ 0x140791DF0 (SeAuditingFileOrGlobalEvents.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14084987C (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14084C800 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14084CBA0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14084D2F0 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14084EFE0 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14084F820 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x140862A14 (SepAdtOpenObjectAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14086395C (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     ObpCheckObjectReference @ 0x14086C31C (ObpCheckObjectReference.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140912CF0 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeAuditingHardLinkEventsWithContext @ 0x140A595E0 (SeAuditingHardLinkEventsWithContext.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x140A6FBA0 (SeOpenObjectAuditAlarmForNonObObject.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x14040F060 (SepAuditingEnabledForSubcategory.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140791F38 (SepAdtIncorporatePerUserPolicy.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SepAuditFailed @ 0x14084D220 (SepAuditFailed.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x1409875D0 (SepAdtAuditThisEventByCategoryWithContext.c)
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
