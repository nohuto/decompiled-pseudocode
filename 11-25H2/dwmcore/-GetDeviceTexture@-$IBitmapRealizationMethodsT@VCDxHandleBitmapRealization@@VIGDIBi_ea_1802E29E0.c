/*
 * XREFs of ?GetDeviceTexture@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802E29E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetDeviceTexture(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  return IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetDeviceTexture(
           a1 - 320,
           a2,
           a3);
}
