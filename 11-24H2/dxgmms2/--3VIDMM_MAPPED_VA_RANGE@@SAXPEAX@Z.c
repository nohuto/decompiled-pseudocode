/*
 * XREFs of ??3VIDMM_MAPPED_VA_RANGE@@SAXPEAX@Z @ 0x1400997E4
 * Callers:
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x14003765C (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     Feature_3694358843__private_IsEnabledDeviceUsageNoInline @ 0x14004C408 (Feature_3694358843__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall VIDMM_MAPPED_VA_RANGE::operator delete(void *a1)
{
  if ( (unsigned int)Feature_3694358843__private_IsEnabledDeviceUsageNoInline() )
    ExFreeToLookasideListEx(&g_VaRangeLookasideList, a1);
  else
    operator delete(a1);
}
