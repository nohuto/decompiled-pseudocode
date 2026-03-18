/*
 * XREFs of ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1403A8D54
 * Callers:
 *     ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x14018884C (-_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDE.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x14026B350 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1403A8C68 (-_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDM.c)
 * Callees:
 *     ?_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@E@Z @ 0x1403A97FC (-_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_.c)
 */

bool __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(
        const struct DXGADAPTER *a1,
        const struct DMMVIDEOPRESENTTARGET *a2,
        const struct DMMVIDEOPRESENTTARGET *a3)
{
  __int64 v5; // rax
  unsigned int v6; // eax
  bool v7; // cf
  bool v8; // cc
  int VotPreference; // eax
  int v10; // r11d
  char v12; // al
  unsigned int v13; // eax

  if ( !a3 )
    return 1;
  v5 = *((_QWORD *)a3 + 14);
  if ( *((_QWORD *)a2 + 14) )
  {
    if ( !v5 )
      return 1;
    v12 = *((_BYTE *)a3 + 412);
    if ( *((_BYTE *)a2 + 412) )
    {
      if ( !v12 )
        return 0;
    }
    else if ( v12 )
    {
      return 1;
    }
    v13 = *((_DWORD *)a2 + 31);
    v7 = v13 < *((_DWORD *)a3 + 31);
    v8 = v13 <= *((_DWORD *)a3 + 31);
LABEL_5:
    if ( !v7 )
    {
      if ( v8 )
      {
        BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(a1, *((unsigned int *)a2 + 21), *((unsigned int *)a2 + 25), 0LL);
        VotPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(
                          a1,
                          *((unsigned int *)a3 + 21),
                          *((unsigned int *)a3 + 25),
                          0LL);
        return v10 < VotPreference;
      }
      return 0;
    }
    return 1;
  }
  if ( !v5 )
  {
    v6 = *((_DWORD *)a2 + 32);
    v7 = v6 < *((_DWORD *)a3 + 32);
    v8 = v6 <= *((_DWORD *)a3 + 32);
    goto LABEL_5;
  }
  return 0;
}
