/*
 * XREFs of Feature_HdrRequireSourcePixelFormat__private_IsEnabledDeviceUsageNoInline @ 0x140090DBC
 * Callers:
 *     ?IsHdrSourceModePinned@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1402698C8 (-IsHdrSourceModePinned@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x140365490 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 * Callees:
 *     Feature_HdrRequireSourcePixelFormat__private_IsEnabledFallback @ 0x140090DF4 (Feature_HdrRequireSourcePixelFormat__private_IsEnabledFallback.c)
 */

__int64 Feature_HdrRequireSourcePixelFormat__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_HdrRequireSourcePixelFormat__private_featureState & 0x10) != 0 )
    return Feature_HdrRequireSourcePixelFormat__private_featureState & 1;
  else
    return Feature_HdrRequireSourcePixelFormat__private_IsEnabledFallback(
             (unsigned int)Feature_HdrRequireSourcePixelFormat__private_featureState,
             3LL);
}
