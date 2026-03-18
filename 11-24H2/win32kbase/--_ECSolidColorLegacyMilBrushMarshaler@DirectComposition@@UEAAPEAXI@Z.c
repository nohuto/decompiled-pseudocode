/*
 * XREFs of ??_ECSolidColorLegacyMilBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14012B940
 * Callers:
 *     ??_ECBaseAnimationMarshaler@DirectComposition@@WBA@EAAPEAXI@Z @ 0x1402249F0 (--_ECBaseAnimationMarshaler@DirectComposition@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

DirectComposition::CSolidColorLegacyMilBrushMarshaler *__fastcall DirectComposition::CSolidColorLegacyMilBrushMarshaler::`vector deleting destructor'(
        DirectComposition::CSolidColorLegacyMilBrushMarshaler *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this);
  return this;
}
