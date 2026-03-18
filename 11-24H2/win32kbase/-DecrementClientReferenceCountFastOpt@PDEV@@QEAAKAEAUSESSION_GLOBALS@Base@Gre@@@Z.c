/*
 * XREFs of ?DecrementClientReferenceCountFastOpt@PDEV@@QEAAKAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C0BC0
 * Callers:
 *     ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x140015DB8 (--$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x140023278 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 * Callees:
 *     ?TrackObjectReferenceDecrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x1401C3AEC (-TrackObjectReferenceDecrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedTy.c)
 */

__int64 __fastcall PDEV::DecrementClientReferenceCountFastOpt(PDEV *this, struct Gre::Base::SESSION_GLOBALS *a2)
{
  __int64 result; // rax

  TrackObjectReferenceDecrementFast(a2, 1LL, *((_QWORD *)this + 442));
  result = (unsigned int)(*((_DWORD *)this + 2) - 1);
  *((_DWORD *)this + 2) = result;
  return result;
}
