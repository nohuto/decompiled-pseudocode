/*
 * XREFs of ??_GCLinearGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C020DE70
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x1C009E150 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 */

DirectComposition::CLinearGradientLegacyMilBrushMarshaler *__fastcall DirectComposition::CLinearGradientLegacyMilBrushMarshaler::`scalar deleting destructor'(
        DirectComposition::CLinearGradientLegacyMilBrushMarshaler *this,
        char a2)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CLinearGradientLegacyMilBrushMarshaler *)((char *)this + 104));
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
