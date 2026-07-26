/*
 * XREFs of ?ndisIovCopyVFInfo@@YAXPEAU_NDIS_NIC_SWITCH_VF_INFO@@PEAU_NDIS_VF_BLOCK@@@Z @ 0x1400DDCD4
 * Callers:
 *     ?ndisOidPreIovEnumVFs@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E0EB0 (-ndisOidPreIovEnumVFs@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

void __fastcall ndisIovCopyVFInfo(struct _NDIS_NIC_SWITCH_VF_INFO *a1, struct _NDIS_VF_BLOCK *a2)
{
  _OWORD *v4; // rcx
  _OWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int128 v8; // xmm1
  __int64 v9; // r8
  _OWORD *v10; // rcx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  _OWORD *v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1

  memset((char *)a1 + 4, 0, 0x65CuLL);
  *(_DWORD *)a1 = 106955136;
  v4 = (_OWORD *)((char *)a1 + 528);
  *((_DWORD *)a1 + 1) = *((_DWORD *)a2 + 25);
  v5 = (_OWORD *)((char *)a2 + 624);
  *((_DWORD *)a1 + 2) = *(_DWORD *)(*((_QWORD *)a2 + 8) + 36LL);
  v6 = 4LL;
  v7 = 4LL;
  do
  {
    *v4 = *v5;
    v4[1] = v5[1];
    v4[2] = v5[2];
    v4[3] = v5[3];
    v4[4] = v5[4];
    v4[5] = v5[5];
    v4[6] = v5[6];
    v4 += 8;
    v8 = v5[7];
    v5 += 8;
    *(v4 - 1) = v8;
    --v7;
  }
  while ( v7 );
  v9 = 4LL;
  *(_DWORD *)v4 = *(_DWORD *)v5;
  v10 = (_OWORD *)((char *)a1 + 12);
  v11 = (_OWORD *)((char *)a2 + 108);
  do
  {
    *v10 = *v11;
    v10[1] = v11[1];
    v10[2] = v11[2];
    v10[3] = v11[3];
    v10[4] = v11[4];
    v10[5] = v11[5];
    v10[6] = v11[6];
    v10 += 8;
    v12 = v11[7];
    v11 += 8;
    *(v10 - 1) = v12;
    --v9;
  }
  while ( v9 );
  *(_DWORD *)v10 = *(_DWORD *)v11;
  v13 = (_OWORD *)((char *)a1 + 1044);
  v14 = (_OWORD *)((char *)a2 + 1140);
  do
  {
    *v13 = *v14;
    v13[1] = v14[1];
    v13[2] = v14[2];
    v13[3] = v14[3];
    v13[4] = v14[4];
    v13[5] = v14[5];
    v13[6] = v14[6];
    v13 += 8;
    v15 = v14[7];
    v14 += 8;
    *(v13 - 1) = v15;
    --v6;
  }
  while ( v6 );
  *(_DWORD *)v13 = *(_DWORD *)v14;
  *((_WORD *)a1 + 780) = *((_WORD *)a2 + 828);
  memmove((char *)a1 + 1562, (char *)a2 + 1658, *((unsigned __int16 *)a2 + 828));
  memmove((char *)a1 + 1594, (char *)a2 + 1690, *((unsigned __int16 *)a2 + 828));
  *((_WORD *)a1 + 813) = *((_WORD *)a2 + 861);
  *((_DWORD *)a1 + 407) = *((_DWORD *)a2 + 431);
}
