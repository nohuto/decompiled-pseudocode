/*
 * XREFs of ?FillOnePathModalityFromVidPn@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x140269824
 * Callers:
 *     ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x14025A554 (-DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_.c)
 * Callees:
 *     memset @ 0x1400A2000 (memset.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR3@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR3@@@Z @ 0x1403C8F00 (--$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR3@@@@YAXPEBVDMMVIDPNP.c)
 */

void __fastcall FillOnePathModalityFromVidPn(
        const struct DMMVIDPNPRESENTPATH *a1,
        struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  _OWORD v10[10]; // [rsp+20h] [rbp-A8h] BYREF

  memset(v10, 0, sizeof(v10));
  _BmlFillOnePathModalityFromVidPn<_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR3>(a1, v10);
  v4 = v10[1];
  *(_OWORD *)a2 = v10[0];
  v5 = v10[2];
  *((_OWORD *)a2 + 1) = v4;
  v6 = v10[3];
  *((_OWORD *)a2 + 2) = v5;
  v7 = v10[4];
  *((_OWORD *)a2 + 3) = v6;
  v8 = v10[5];
  *((_OWORD *)a2 + 4) = v7;
  v9 = v10[6];
  *((_OWORD *)a2 + 5) = v8;
  *((_OWORD *)a2 + 6) = v9;
  a2 = (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)((char *)a2 + 128);
  *((_OWORD *)a2 - 1) = v10[7];
  *(_QWORD *)a2 = *(_QWORD *)&v10[8];
  *((_DWORD *)a2 + 2) = DWORD2(v10[8]);
}
