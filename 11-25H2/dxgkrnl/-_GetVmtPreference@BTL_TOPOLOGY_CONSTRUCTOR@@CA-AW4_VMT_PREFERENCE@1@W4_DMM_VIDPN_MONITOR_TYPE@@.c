/*
 * XREFs of ?_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1402D2684
 * Callers:
 *     ?_IsBetterAnchorTarget@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@W4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1402D23AC (-_IsBetterAnchorTarget@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAA_NAEBVDXGADAPTER@@AEBVDMMVIDEO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference(int a1)
{
  int v1; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( !v1 )
      return 1LL;
    v3 = v1 - 1;
    if ( !v3 )
      return 2LL;
    v4 = v3 - 1;
    if ( !v4 )
      return 4LL;
    v5 = v4 - 1;
    if ( !v5 )
      return 5LL;
    if ( v5 == 1 )
      return 3LL;
  }
  return 6LL;
}
