/*
 * XREFs of ?IncrementClientReferenceCountFastOpt@PDEV@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C0CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?TrackObjectReferenceIncrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x1401C3B24 (-TrackObjectReferenceIncrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedTy.c)
 */

void __fastcall PDEV::IncrementClientReferenceCountFastOpt(PDEV *this, struct Gre::Base::SESSION_GLOBALS *a2)
{
  __int64 v2; // r8

  v2 = *((_QWORD *)this + 442);
  ++*((_DWORD *)this + 2);
  TrackObjectReferenceIncrementFast(a2, 1LL, v2);
}
