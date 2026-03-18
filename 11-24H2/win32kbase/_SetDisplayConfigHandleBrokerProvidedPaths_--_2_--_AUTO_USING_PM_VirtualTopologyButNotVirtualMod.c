/*
 * XREFs of _SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14622::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14622 @ 0x1401C64D0
 * Callers:
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x14008CA1C (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14622::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14622(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  unsigned int v3; // edx
  __int64 v4; // rax

  *(_QWORD *)a1 = a2 + 56;
  v2 = *(unsigned __int16 *)(a2 + 20);
  v3 = 0;
  for ( *(_DWORD *)(a1 + 8) = v2; v3 < *(_DWORD *)(a1 + 8); *(_BYTE *)(296 * v4 + *(_QWORD *)a1 + 288) = 0 )
  {
    v4 = v3++;
    *(_DWORD *)(296 * v4 + *(_QWORD *)a1 + 256) |= 0x80u;
  }
  return a1;
}
