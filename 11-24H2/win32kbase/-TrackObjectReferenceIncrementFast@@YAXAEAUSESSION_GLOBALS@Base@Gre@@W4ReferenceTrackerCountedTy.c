/*
 * XREFs of ?TrackObjectReferenceIncrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x1401C3B24
 * Callers:
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x140023540 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x140031250 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?IncrementClientReferenceCountFastOpt@PDEV@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C0CB0 (-IncrementClientReferenceCountFastOpt@PDEV@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vReferencePdevFast@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C0E40 (-vReferencePdevFast@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?HmgIncrementShareReferenceCountFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@@Z @ 0x1401C1CA4 (-HmgIncrementShareReferenceCountFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@@Z.c)
 * Callees:
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1400D9130 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall TrackObjectReferenceIncrementFast(
        __int64 a1,
        unsigned int a2,
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *a3)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v3; // rcx

  if ( a3 )
  {
    v3 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(a1 + 16LL * a2 + 5704);
    if ( v3 )
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v3, a3, 1u);
  }
}
