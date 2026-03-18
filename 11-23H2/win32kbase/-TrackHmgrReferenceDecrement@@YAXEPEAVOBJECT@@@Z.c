/*
 * XREFs of ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0044470
 * Callers:
 *     DEC_SHARE_REF_CNT @ 0x1C0042440 (DEC_SHARE_REF_CNT.c)
 *     HmgRemoveObject @ 0x1C0047F80 (HmgRemoveObject.c)
 *     HmgShareUnlockRemoveObject @ 0x1C0099840 (HmgShareUnlockRemoveObject.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C009D9C0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C004193C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C016EC54 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall TrackHmgrReferenceDecrement(__int64 a1, struct OBJECT *a2)
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
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v4, v2, 0);
    }
  }
  else if ( (_BYTE)a1 == 16 )
  {
    TrackObjectReferenceDecrement(
      2LL,
      *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)a2 + 17));
  }
}
