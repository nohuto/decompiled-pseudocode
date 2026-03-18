/*
 * XREFs of Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline @ 0x1401CCAE0
 * Callers:
 *     DrvBuildDevmodeList @ 0x1401180B8 (DrvBuildDevmodeList.c)
 *     ?bInitGdiInfo@@YAHPEAU_devicemodeW@@PEAU_GDIINFO@@@Z @ 0x140157590 (-bInitGdiInfo@@YAHPEAU_devicemodeW@@PEAU_GDIINFO@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140176D8C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?StubDispGetModes@@YAKPEAXKPEAU_devicemodeW@@@Z @ 0x14017A260 (-StubDispGetModes@@YAKPEAXKPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledFallback @ 0x1401CCB18 (Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledFallback.c)
 */

__int64 Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PreservePreviousDPIOnTSDDD__private_featureState & 0x10) != 0 )
    return Feature_PreservePreviousDPIOnTSDDD__private_featureState & 1;
  else
    return Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledFallback(
             (unsigned int)Feature_PreservePreviousDPIOnTSDDD__private_featureState,
             3LL);
}
