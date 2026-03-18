/*
 * XREFs of ??1CCursorClip@@AEAA@XZ @ 0x1C00B7408
 * Callers:
 *     UnInitializeInputComponents @ 0x1C00B6FA4 (UnInitializeInputComponents.c)
 * Callees:
 *     ?Cleanup@DeadzoneJumping@CCursorClip@@AEAAXXZ @ 0x1C0064174 (-Cleanup@DeadzoneJumping@CCursorClip@@AEAAXXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall CCursorClip::~CCursorClip(CCursorClip *this)
{
  char *v1; // rdx

  v1 = (char *)*((_QWORD *)this + 33);
  if ( v1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
  CCursorClip::DeadzoneJumping::Cleanup((CCursorClip *)((char *)this + 280));
}
