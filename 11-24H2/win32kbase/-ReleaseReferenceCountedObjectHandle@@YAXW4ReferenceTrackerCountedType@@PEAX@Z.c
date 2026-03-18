/*
 * XREFs of ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x14019D294
 * Callers:
 *     bDeleteBrush @ 0x140014820 (bDeleteBrush.c)
 *     SURFACE_Free @ 0x14001A7E0 (SURFACE_Free.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x14003D9D0 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x140040DAC (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?ReleaseToMostRecentlyFreedList@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAXPEAUSCircularBuffer@123@@Z @ 0x1401D0EC8 (-ReleaseToMostRecentlyFreedList@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAX.c)
 */

void __fastcall ReleaseReferenceCountedObjectHandle(
        __int64 a1,
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *a2)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v3; // rbx
  NSInstrumentation::CPointerHashTable *v4; // rcx
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(*(_QWORD *)(W32GetSessionState(a1) + 88)
                                                                       + 16LL * (unsigned int)a1
                                                                       + 5704);
  if ( v3 )
  {
    v4 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)v3 + 3);
    v5 = 0LL;
    NSInstrumentation::CPointerHashTable::Remove(v4, (unsigned __int64)a2, &v5);
    NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReleaseToMostRecentlyFreedList(v3, v5, a2);
  }
}
