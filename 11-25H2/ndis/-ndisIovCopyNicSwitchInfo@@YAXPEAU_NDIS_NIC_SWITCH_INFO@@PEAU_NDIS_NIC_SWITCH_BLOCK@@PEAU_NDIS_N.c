/*
 * XREFs of ?ndisIovCopyNicSwitchInfo@@YAXPEAU_NDIS_NIC_SWITCH_INFO@@PEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400E4DC4
 * Callers:
 *     ?ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_NDIS_SRIOV_CAPABILITIES@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z @ 0x1400E5E5C (-ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_N.c)
 *     ?ndisOidPreIovEnumNicSwitches@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E7E90 (-ndisOidPreIovEnumNicSwitches@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     memset @ 0x1400EE380 (memset.c)
 */

void __fastcall ndisIovCopyNicSwitchInfo(
        struct _NDIS_NIC_SWITCH_INFO *a1,
        struct _NDIS_NIC_SWITCH_BLOCK *a2,
        struct _NDIS_NIC_SWITCH_CAPABILITIES *a3)
{
  _OWORD *v6; // rcx
  _OWORD *v7; // rax
  __int64 v8; // rdx
  __int128 v9; // xmm1
  int v10; // ecx

  memset((char *)a1 + 4, 0, 0x238uLL);
  *(_DWORD *)a1 = 37486976;
  v6 = (_OWORD *)((char *)a1 + 16);
  *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 27);
  *((_DWORD *)a1 + 3) = *((_DWORD *)a2 + 9);
  v7 = (_OWORD *)((char *)a2 + 116);
  v8 = 4LL;
  do
  {
    *v6 = *v7;
    v6[1] = v7[1];
    v6[2] = v7[2];
    v6[3] = v7[3];
    v6[4] = v7[4];
    v6[5] = v7[5];
    v6[6] = v7[6];
    v6 += 8;
    v9 = v7[7];
    v7 += 8;
    *(v6 - 1) = v9;
    --v8;
  }
  while ( v8 );
  *(_DWORD *)v6 = *(_DWORD *)v7;
  *((_DWORD *)a1 + 133) = *((_DWORD *)a2 + 158);
  *((_DWORD *)a1 + 134) = *((_DWORD *)a2 + 18);
  *((_DWORD *)a1 + 135) = a3->MaxNumVPorts;
  *((_DWORD *)a1 + 136) = *((_DWORD *)a2 + 12);
  v10 = *((_DWORD *)a2 + 162);
  *((_DWORD *)a1 + 137) = v10;
  *((_DWORD *)a1 + 138) = a3->MaxNumQueuePairs - v10;
  *((_DWORD *)a1 + 139) = *((_DWORD *)a2 + 163);
  *((_DWORD *)a1 + 140) = *((_DWORD *)a2 + 164);
  *((_DWORD *)a1 + 141) = *((_DWORD *)a2 + 165);
  *((_DWORD *)a1 + 142) = *((_DWORD *)a2 + 166);
}
