/*
 * XREFs of ?GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z @ 0x1400551B0
 * Callers:
 *     ?DetermineDefaultTopology@@YA?AW4MultiScreenDefaultShellTopology@@IE@Z @ 0x1401BFE58 (-DetermineDefaultTopology@@YA-AW4MultiScreenDefaultShellTopology@@IE@Z.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1404098D0 (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 * Callees:
 *     ?IsMultiScreenClonedByDefault@@YA_NXZ @ 0x140055278 (-IsMultiScreenClonedByDefault@@YA_NXZ.c)
 *     ?IsXbox@@YA_NXZ @ 0x140060EFC (-IsXbox@@YA_NXZ.c)
 *     ?DetermineMultiScreenCapabilities@DefaultMultiScreenConfig@@YAJPEAW4MultiScreenShellCapabilities@@@Z @ 0x140061514 (-DetermineMultiScreenCapabilities@DefaultMultiScreenConfig@@YAJPEAW4MultiScreenShellCapabilities.c)
 */

__int64 __fastcall GetMultiScreenDefaultShellTopology(enum MultiScreenDefaultShellTopology *a1)
{
  unsigned int v2; // edi
  enum MultiScreenShellCapabilities *v3; // rdx
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( !`IsWindowsTeamEdition'::`2'::s_dwProductType
    && !RtlGetProductInfo(0xAu, 0, 0, 0, &`IsWindowsTeamEdition'::`2'::s_dwProductType) )
  {
    `IsWindowsTeamEdition'::`2'::s_dwProductType = 0;
  }
  if ( `IsWindowsTeamEdition'::`2'::s_dwProductType == 119 )
    goto LABEL_8;
  if ( IsXbox() )
  {
    *(_WORD *)a1 = 1;
    return v2;
  }
  if ( IsMultiScreenClonedByDefault() )
  {
LABEL_8:
    *(_WORD *)a1 = 3;
    return v2;
  }
  *(_WORD *)a1 = 0;
  v5 = 0;
  v2 = DefaultMultiScreenConfig::DetermineMultiScreenCapabilities((DefaultMultiScreenConfig *)&v5, v3);
  if ( (v2 & 0x80000000) == 0 && (v5 & 0x20000000) != 0 )
    *(_WORD *)a1 = (v5 & 0x4000000) != 0 ? 5 : 3;
  return v2;
}
