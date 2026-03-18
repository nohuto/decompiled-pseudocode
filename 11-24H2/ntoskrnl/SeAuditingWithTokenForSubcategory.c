/*
 * XREFs of SeAuditingWithTokenForSubcategory @ 0x140938740
 * Callers:
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140790124 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeExchangePrimaryToken @ 0x140792C9C (SeExchangePrimaryToken.c)
 *     ObDuplicateObject @ 0x14083FFB0 (ObDuplicateObject.c)
 *     PiPnpRtlSetObjectProperty @ 0x1408B84A0 (PiPnpRtlSetObjectProperty.c)
 *     PspExitLastThread @ 0x1409374F0 (PspExitLastThread.c)
 *     SepAdtTokenRightAdjusted @ 0x1409383C4 (SepAdtTokenRightAdjusted.c)
 *     ObCompleteObjectDuplication @ 0x140940288 (ObCompleteObjectDuplication.c)
 *     PipSetDevNodeProblem @ 0x14098FC24 (PipSetDevNodeProblem.c)
 *     PiDevCfgProcessDevice @ 0x140996E44 (PiDevCfgProcessDevice.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14099B5CC (PiPnpRtlSetDeviceRegProperty.c)
 *     PipClearDevNodeProblem @ 0x1409C5678 (PipClearDevNodeProblem.c)
 * Callees:
 *     SepAuditingForSubCategory @ 0x14046D838 (SepAuditingForSubCategory.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140791F68 (SepAdtIncorporatePerUserPolicy.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 */

char __fastcall SeAuditingWithTokenForSubcategory(int a1, void *a2)
{
  __int64 v3; // rdi
  PACCESS_TOKEN PrimaryToken; // r9
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF
  char v7; // [rsp+60h] [rbp+8h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v3 = (unsigned int)(a1 - 100);
  v7 = SepAuditingForSubCategory(a1, 1);
  if ( SepTokenPolicyCounter[v3] )
  {
    if ( a2 )
    {
      PrimaryToken = a2;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      PrimaryToken = SubjectContext.PrimaryToken;
      if ( SubjectContext.ClientToken )
        PrimaryToken = SubjectContext.ClientToken;
    }
    SepAdtIncorporatePerUserPolicy(v3, 1, 0, (__int64)PrimaryToken, &v7);
    if ( !a2 )
      SeReleaseSubjectContext(&SubjectContext);
  }
  return v7;
}
