/*
 * XREFs of SeLockSubjectContext @ 0x140868470
 * Callers:
 *     SepTrustLevelCheck @ 0x140357F50 (SepTrustLevelCheck.c)
 *     SeAccessCheckWithHint @ 0x14035A620 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140360470 (SepCommonAccessCheckEx.c)
 *     IopCreateSecurityCheck @ 0x14046DA5C (IopCreateSecurityCheck.c)
 *     CMFCheckAccess @ 0x1407C1620 (CMFCheckAccess.c)
 *     CmpCheckCreateAccess @ 0x140867CFC (CmpCheckCreateAccess.c)
 *     ObpCheckTraverseAccess @ 0x140867E80 (ObpCheckTraverseAccess.c)
 *     ObpCheckObjectReference @ 0x14086802C (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x1408682F0 (ObCheckCreateObjectAccess.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     PspIsContextAdmin @ 0x1408E917C (PspIsContextAdmin.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A09994 (ObpVerifyCreatorAccessCheck.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
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
