/*
 * XREFs of _dynamic_atexit_destructor_for__CProjectedShadow::s_cpMaskForBlur__ @ 0x1802DFB00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800DA5C0 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

__int64 dynamic_atexit_destructor_for__CProjectedShadow::s_cpMaskForBlur__()
{
  __int64 result; // rax

  if ( CProjectedShadow::s_cpMaskForBlur )
    return CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(CProjectedShadow::s_cpMaskForBlur);
  return result;
}
