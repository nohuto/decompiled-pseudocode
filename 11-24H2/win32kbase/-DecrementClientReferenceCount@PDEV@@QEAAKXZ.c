/*
 * XREFs of ?DecrementClientReferenceCount@PDEV@@QEAAKXZ @ 0x140174050
 * Callers:
 *     <none>
 * Callees:
 *     ?TrackObjectReferenceDecrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x1401C3AEC (-TrackObjectReferenceDecrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedTy.c)
 */

__int64 __fastcall PDEV::DecrementClientReferenceCount(PDEV *this)
{
  __int64 SessionState; // rax
  __int64 result; // rax

  SessionState = W32GetSessionState(this);
  TrackObjectReferenceDecrementFast(*(_QWORD *)(SessionState + 88), 1LL, *((_QWORD *)this + 442));
  result = (unsigned int)(*((_DWORD *)this + 2) - 1);
  *((_DWORD *)this + 2) = result;
  return result;
}
