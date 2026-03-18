/*
 * XREFs of ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x140031250
 * Callers:
 *     ?HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x14002EB90 (-HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     HmgShareLockCheck @ 0x14002F820 (HmgShareLockCheck.c)
 *     ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x140031210 (-TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?HmgShareLockCheck2@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@E@Z @ 0x140031290 (-HmgShareLockCheck2@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@E@Z.c)
 *     HmgShareLock @ 0x140031760 (HmgShareLock.c)
 *     bDeleteSurface @ 0x1400365C0 (bDeleteSurface.c)
 *     EngLockSurface @ 0x140036810 (EngLockSurface.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1400C6A40 (HmgShareLockCheckIgnoreStockBit.c)
 * Callees:
 *     ?TrackObjectReferenceIncrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x1401C3B24 (-TrackObjectReferenceIncrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedTy.c)
 */

__int64 __fastcall TrackObjectReferenceIncrement(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 SessionState; // rax

  v3 = a1;
  SessionState = W32GetSessionState(a1);
  return TrackObjectReferenceIncrementFast(*(_QWORD *)(SessionState + 88), v3, a2);
}
