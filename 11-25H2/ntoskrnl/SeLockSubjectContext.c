/*
 * XREFs of SeLockSubjectContext @ 0x1409163C0
 * Callers:
 *     SepTrustLevelCheck @ 0x14035FC50 (SepTrustLevelCheck.c)
 *     SeAccessCheckWithHint @ 0x140362560 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1403CD1A0 (SepCommonAccessCheckEx.c)
 *     IopCreateSecurityCheck @ 0x14046F3F0 (IopCreateSecurityCheck.c)
 *     CMFCheckAccess @ 0x1407B3114 (CMFCheckAccess.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     PspIsContextAdmin @ 0x1408D9DA4 (PspIsContextAdmin.c)
 *     CmpCheckCreateAccess @ 0x140914774 (CmpCheckCreateAccess.c)
 *     ObpCheckTraverseAccess @ 0x14091495C (ObpCheckTraverseAccess.c)
 *     ObpCheckObjectReference @ 0x1409156D0 (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x140915F70 (ObCheckCreateObjectAccess.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A06724 (ObpVerifyCreatorAccessCheck.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
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
