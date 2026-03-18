/*
 * XREFs of ?_IsBetterAnchorTarget@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@W4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1402D23AC
 * Callers:
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1402D1CCC (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA?AW4_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1402D2378 (-_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA-AW4_ADAPTER_PREFERENCE@12@AEBVD.c)
 *     ?_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA?AW4_POST_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1402D24A4 (-_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA-AW4_POST_ADAPTER_PREFERENCE.c)
 *     ?_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1402D2684 (-_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@.c)
 *     ?_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@E@Z @ 0x1402D2A90 (-_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_.c)
 */

bool __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_IsBetterAnchorTarget(__int64 a1, __int64 a2)
{
  int AdapterPreference; // eax
  unsigned int v4; // r9d
  __int64 v5; // r11
  __int64 v6; // r11
  int VmtPreference; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  int *v11; // r11
  int v12; // edx
  bool v13; // sf
  bool v14; // of
  char v15; // al
  int v16; // edi
  int v17; // esi
  unsigned int v18; // eax
  int VotPreference; // eax
  __int64 v20; // r11
  __int64 v21; // r9
  int v22; // ebp
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r11
  int PostAdapterPreference; // eax
  __int64 v29; // r11

  AdapterPreference = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference(a2);
  if ( *(_DWORD *)(v5 + 36) < AdapterPreference )
    return 1;
  BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference(v4);
  VmtPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference(*(unsigned int *)(v6 + 32));
  v14 = __OFSUB__(v12, VmtPreference);
  v13 = v12 - VmtPreference < 0;
  if ( v12 != VmtPreference )
    return v13 ^ v14;
  v15 = *((_BYTE *)v11 + 49);
  if ( !*(_BYTE *)(v8 + 412) )
  {
    if ( !v15 )
      goto LABEL_5;
    return 1;
  }
  if ( !v15 )
    return 0;
LABEL_5:
  v16 = *v11;
  v17 = *(_DWORD *)(a2 + 412);
  if ( *(_QWORD *)v11 != *(_QWORD *)(a2 + 412) || (v18 = *(_DWORD *)(v8 + 124), v18 == v11[7]) )
  {
    LOBYTE(v9) = 1;
    VotPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(
                      a2,
                      *(unsigned int *)(v10 + 84),
                      *(unsigned int *)(v8 + 100),
                      v9);
    LOBYTE(v21) = 1;
    v22 = VotPreference;
    v23 = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(a2, *(unsigned int *)(v20 + 20), *(unsigned int *)(v20 + 24), v21);
    v14 = __OFSUB__(v22, v23);
    v13 = v22 - v23 < 0;
    if ( v22 != v23 )
      return v13 ^ v14;
    if ( v16 != v17 || *(_DWORD *)(v26 + 4) != *(_DWORD *)(a2 + 416) )
    {
      PostAdapterPreference = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference(a2, v24, v25);
      v14 = __OFSUB__(PostAdapterPreference, *(_DWORD *)(v29 + 44));
      v13 = PostAdapterPreference - *(_DWORD *)(v29 + 44) < 0;
      return v13 ^ v14;
    }
    return 0;
  }
  return v18 < v11[7];
}
