/*
 * XREFs of ??4?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1802AC66C
 * Callers:
 *     ?CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z @ 0x1802AC6B4 (-CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180072160 (-InternalRelease@-$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@VCMilObjectDeleter.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 *__fastcall wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx

  v2 = *a1;
  v4 = *a2;
  *a1 = *a2;
  if ( v4 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v4 + 8));
  if ( v2 )
    CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance,CMilObjectDeleter>::InternalRelease(v2);
  return a1;
}
