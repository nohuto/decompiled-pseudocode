/*
 * XREFs of SeAuditingWithTokenForSubcategory @ 0x140936F00
 * Callers:
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140780E64 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeExchangePrimaryToken @ 0x14078384C (SeExchangePrimaryToken.c)
 *     PipSetDevNodeProblem @ 0x140831BCC (PipSetDevNodeProblem.c)
 *     ObDuplicateObject @ 0x140843A40 (ObDuplicateObject.c)
 *     PiDevCfgProcessDevice @ 0x1408906D0 (PiDevCfgProcessDevice.c)
 *     ObCompleteObjectDuplication @ 0x1408AD954 (ObCompleteObjectDuplication.c)
 *     PspExitLastThread @ 0x14091ECC8 (PspExitLastThread.c)
 *     SepAdtTokenRightAdjusted @ 0x140936BA8 (SepAdtTokenRightAdjusted.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14094EE88 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiPnpRtlSetObjectProperty @ 0x140955470 (PiPnpRtlSetObjectProperty.c)
 *     PipClearDevNodeProblem @ 0x1409AD2C0 (PipClearDevNodeProblem.c)
 * Callees:
 *     SepAuditingForSubCategory @ 0x14046EFD4 (SepAuditingForSubCategory.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140782CA8 (SepAdtIncorporatePerUserPolicy.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
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
