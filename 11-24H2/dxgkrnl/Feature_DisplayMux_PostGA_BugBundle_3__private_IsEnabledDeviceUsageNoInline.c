/*
 * XREFs of Feature_DisplayMux_PostGA_BugBundle_3__private_IsEnabledDeviceUsageNoInline @ 0x14006B45C
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x140383210 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140416310 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkEscape @ 0x140419AB0 (DxgkEscape.c)
 * Callees:
 *     Feature_DisplayMux_PostGA_BugBundle_3__private_IsEnabledFallback @ 0x14006B494 (Feature_DisplayMux_PostGA_BugBundle_3__private_IsEnabledFallback.c)
 */

__int64 Feature_DisplayMux_PostGA_BugBundle_3__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DisplayMux_PostGA_BugBundle_3__private_featureState & 0x10) != 0 )
    return Feature_DisplayMux_PostGA_BugBundle_3__private_featureState & 1;
  else
    return Feature_DisplayMux_PostGA_BugBundle_3__private_IsEnabledFallback(
             (unsigned int)Feature_DisplayMux_PostGA_BugBundle_3__private_featureState,
             3LL);
}
