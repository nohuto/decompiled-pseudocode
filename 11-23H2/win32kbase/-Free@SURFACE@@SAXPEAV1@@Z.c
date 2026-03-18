/*
 * XREFs of ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C01584A0
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C005ED70 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$FreeIsolatedType@V?$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C01581F0 (--$FreeIsolatedType@V-$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C016D424 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall SURFACE::Free(_QWORD *Entry)
{
  char *v2; // rdx

  if ( Entry[85] )
    ReleaseReferenceCountedObjectHandle(0LL);
  if ( *((_BYTE *)Entry + 688) )
  {
    v2 = (char *)Entry[9];
    if ( v2 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v2);
      Entry[9] = 0LL;
    }
  }
  FreeIsolatedType<NSInstrumentation::CLookAsideTypeIsolation<221184,864>>(Entry);
}
