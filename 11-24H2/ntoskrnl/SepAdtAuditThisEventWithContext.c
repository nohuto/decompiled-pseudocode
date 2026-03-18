/*
 * XREFs of SepAdtAuditThisEventWithContext @ 0x140852C10
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x140348B90 (SeReportSecurityEventWithSubCategory.c)
 *     SepCommonAccessCheckEx @ 0x140360470 (SepCommonAccessCheckEx.c)
 *     SeAuditingAnyFileEventsWithContextEx @ 0x140424580 (SeAuditingAnyFileEventsWithContextEx.c)
 *     SeAuditingFileEventsWithContextEx @ 0x140487700 (SeAuditingFileEventsWithContextEx.c)
 *     SeAuditingFileOrGlobalEvents @ 0x140791E20 (SeAuditingFileOrGlobalEvents.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14084D5BC (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140850540 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1408508E0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140851030 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x140852D20 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140853560 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ObpCheckObjectReference @ 0x14086802C (ObpCheckObjectReference.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1408F1214 (SepAdtOpenObjectAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1408F1C3C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1408F2FA8 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14091DB90 (SepAccessCheckAndAuditAlarm.c)
 *     SeAuditingHardLinkEventsWithContext @ 0x140A60F00 (SeAuditingHardLinkEventsWithContext.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x140A75700 (SeOpenObjectAuditAlarmForNonObObject.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x14041B520 (SepAuditingEnabledForSubcategory.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140791F68 (SepAdtIncorporatePerUserPolicy.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     SepAuditFailed @ 0x140850F60 (SepAuditFailed.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x14099E920 (SepAdtAuditThisEventByCategoryWithContext.c)
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
