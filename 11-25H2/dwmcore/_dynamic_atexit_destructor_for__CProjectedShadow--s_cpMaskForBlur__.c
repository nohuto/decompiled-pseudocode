/*
 * XREFs of _dynamic_atexit_destructor_for__CProjectedShadow::s_cpMaskForBlur__ @ 0x1802E8DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18010FE80 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

__int64 dynamic_atexit_destructor_for__CProjectedShadow::s_cpMaskForBlur__()
{
  __int64 result; // rax

  if ( CProjectedShadow::s_cpMaskForBlur )
    return CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(CProjectedShadow::s_cpMaskForBlur);
  return result;
}
