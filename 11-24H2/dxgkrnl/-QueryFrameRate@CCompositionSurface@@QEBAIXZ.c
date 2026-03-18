/*
 * XREFs of ?QueryFrameRate@CCompositionSurface@@QEBAIXZ @ 0x14005F3A4
 * Callers:
 *     NtQueryCompositionSurfaceFrameRate @ 0x140037EC0 (NtQueryCompositionSurfaceFrameRate.c)
 * Callees:
 *     ?CalcFrameRate@CPresentRate@@QEBAIXZ @ 0x14005F560 (-CalcFrameRate@CPresentRate@@QEBAIXZ.c)
 *     Feature_DWM_MPO_Enhancement__private_IsEnabledDeviceUsageNoInline @ 0x14009D120 (Feature_DWM_MPO_Enhancement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CalcFrameRate@COldPresentRate@@QEBAIXZ @ 0x14009DB38 (-CalcFrameRate@COldPresentRate@@QEBAIXZ.c)
 */

unsigned int __fastcall CCompositionSurface::QueryFrameRate(CCompositionSurface *this)
{
  if ( (unsigned int)Feature_DWM_MPO_Enhancement__private_IsEnabledDeviceUsageNoInline() )
    return CPresentRate::CalcFrameRate((CCompositionSurface *)((char *)this + 76));
  else
    return COldPresentRate::CalcFrameRate((CCompositionSurface *)((char *)this + 56));
}
