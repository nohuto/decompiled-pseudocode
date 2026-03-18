/*
 * XREFs of SeUnlockSubjectContext @ 0x140916420
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
 *     SepAccessCheckAndAuditAlarm @ 0x14092B360 (SepAccessCheckAndAuditAlarm.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A06724 (ObpVerifyCreatorAccessCheck.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 */

void __stdcall SeUnlockSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  ExReleaseResourceLite(*((PERESOURCE *)SubjectContext->PrimaryToken + 6));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( SubjectContext->ClientToken )
  {
    ExReleaseResourceLite(*((PERESOURCE *)SubjectContext->ClientToken + 6));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
}
