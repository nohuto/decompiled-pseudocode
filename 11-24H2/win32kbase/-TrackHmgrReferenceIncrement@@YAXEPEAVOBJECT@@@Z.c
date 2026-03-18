/*
 * XREFs of ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x140031210
 * Callers:
 *     HmgShareLockIgnoreStockBit @ 0x1401047F0 (HmgShareLockIgnoreStockBit.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x140031250 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall TrackHmgrReferenceIncrement(char a1, struct OBJECT *a2)
{
  if ( a1 == 5 )
  {
    TrackObjectReferenceIncrement(0LL, *((_QWORD *)a2 + 85));
  }
  else if ( a1 == 16 )
  {
    TrackObjectReferenceIncrement(2LL, *((_QWORD *)a2 + 17));
  }
}
