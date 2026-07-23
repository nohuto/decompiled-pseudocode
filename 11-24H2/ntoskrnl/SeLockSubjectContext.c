/*
 * XREFs of SeLockSubjectContext @ 0x14086C760
 * Callers:
 *     IopCreateSecurityCheck @ 0x1403B5AE0 (IopCreateSecurityCheck.c)
 *     SeAccessCheckWithHint @ 0x1403B6970 (SeAccessCheckWithHint.c)
 *     SepTrustLevelCheck @ 0x1403E33C0 (SepTrustLevelCheck.c)
 *     SepCommonAccessCheckEx @ 0x140465250 (SepCommonAccessCheckEx.c)
 *     SepCreateAppContainerToken @ 0x140606A30 (SepCreateAppContainerToken.c)
 *     CMFCheckAccess @ 0x1407C2854 (CMFCheckAccess.c)
 *     PspIsContextAdmin @ 0x14085A9A4 (PspIsContextAdmin.c)
 *     CmpCheckCreateAccess @ 0x14086BFEC (CmpCheckCreateAccess.c)
 *     ObpCheckTraverseAccess @ 0x14086C170 (ObpCheckTraverseAccess.c)
 *     ObpCheckObjectReference @ 0x14086C31C (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x14086C5E0 (ObCheckCreateObjectAccess.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A05EC4 (ObpVerifyCreatorAccessCheck.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 */

void __stdcall SeLockSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext->PrimaryToken + 6), 1u);
  if ( SubjectContext->ClientToken )
  {
    v3 = KeGetCurrentThread();
    --v3->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext->ClientToken + 6), 1u);
  }
}
