/*
 * XREFs of IsKnownFeature @ 0x1402893D0
 * Callers:
 *     ?DxgkQueryFeatureDriverInterface@@YAJPEBUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@GGPEAX@Z @ 0x1402888B4 (-DxgkQueryFeatureDriverInterface@@YAJPEBUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@GGPEAX@Z.c)
 *     ?DxgkQueryFeatureOsInterface@@YAJPEBUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@GPEAGPEAX@Z @ 0x140288A60 (-DxgkQueryFeatureOsInterface@@YAJPEBUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@GPEAGPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsKnownFeature(unsigned int a1)
{
  __int64 v1; // rdx

  if ( (a1 & 0xFFFFFFF) >= *((_DWORD *)&g_FeatureDescriptorTables + 4 * ((unsigned __int64)a1 >> 28) + 2) )
    v1 = 0LL;
  else
    v1 = *((_QWORD *)&g_FeatureDescriptorTables + 2 * ((unsigned __int64)a1 >> 28)) + 6LL * (a1 & 0xFFFFFFF);
  return v1 != 0;
}
