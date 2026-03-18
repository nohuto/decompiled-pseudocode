/*
 * XREFs of ?TrackObjectReferenceDecrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x1401C3AEC
 * Callers:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x140022558 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?DecrementClientReferenceCount@PDEV@@QEAAKXZ @ 0x140174050 (-DecrementClientReferenceCount@PDEV@@QEAAKXZ.c)
 *     ?DecrementClientReferenceCountFastOpt@PDEV@@QEAAKAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C0BC0 (-DecrementClientReferenceCountFastOpt@PDEV@@QEAAKAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnreferencePdevFast@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C0ED0 (-vUnreferencePdevFast@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?HmgDecrementShareReferenceCountExFastOpt@@YAKAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@PEAH@Z @ 0x1401C1BDC (-HmgDecrementShareReferenceCountExFastOpt@@YAKAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@PEA.c)
 * Callees:
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1400D9130 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall TrackObjectReferenceDecrementFast(
        __int64 a1,
        unsigned int a2,
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *a3)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v3; // rcx

  if ( a3 )
  {
    v3 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(a1 + 16LL * a2 + 5704);
    if ( v3 )
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v3, a3, 0);
  }
}
