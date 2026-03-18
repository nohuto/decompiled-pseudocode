/*
 * XREFs of ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C000C5E0
 * Callers:
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C003A440 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1C00D2508 (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall XEPALOBJ::vMakeNoXlate(XEPALOBJ *this)
{
  void *v2; // rdx
  void *v3; // rdx
  void *v4; // rdx

  v2 = *(void **)(*(_QWORD *)this + 88LL);
  if ( v2 )
  {
    if ( v2 != *(void **)(*(_QWORD *)this + 72LL) )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v2);
    *(_QWORD *)(*(_QWORD *)this + 88LL) = 0LL;
  }
  v3 = *(void **)(*(_QWORD *)this + 80LL);
  if ( v3 )
  {
    if ( v3 != *(void **)(*(_QWORD *)this + 72LL) )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
    *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
  }
  v4 = *(void **)(*(_QWORD *)this + 72LL);
  if ( v4 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
    *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
  }
}
