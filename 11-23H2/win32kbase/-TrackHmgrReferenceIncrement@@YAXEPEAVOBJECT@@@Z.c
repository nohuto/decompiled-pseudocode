/*
 * XREFs of ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1C00444D0
 * Callers:
 *     GreSetBitmapOwner @ 0x1C003AA60 (GreSetBitmapOwner.c)
 *     HmgIncrementShareReferenceCount @ 0x1C003FFA0 (HmgIncrementShareReferenceCount.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C00AC70C (HmgShareLockIgnoreStockBit.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0041CF0 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C016EC54 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall TrackHmgrReferenceIncrement(__int64 a1, struct OBJECT *a2)
{
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v2; // rbx
  __int64 v3; // rax
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v4; // rcx

  if ( (_BYTE)a1 == 5 )
  {
    v2 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a2 + 85);
    v3 = SGDGetSessionState(a1);
    if ( v2 )
    {
      v4 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(*(_QWORD *)(v3 + 24) + 8040LL);
      if ( v4 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v4, v2, 1);
    }
  }
  else if ( (_BYTE)a1 == 16 )
  {
    TrackObjectReferenceIncrement(
      2LL,
      *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)a2 + 17));
  }
}
