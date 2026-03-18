/*
 * XREFs of _lambda_7dc7c0424fbefd701d9ba3d1e39eb072_::operator() @ 0x1401A8954
 * Callers:
 *     ?DispBrokerChangeDisplaySettings@@YAJU_LUID@@IPEAU_devicemodeW@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_NAEAW4_DXGK_DIAG_CDS_STAGE@@@Z @ 0x1400C9744 (-DispBrokerChangeDisplaySettings@@YAJU_LUID@@IPEAU_devicemodeW@@IPEAU_DXGK_DISPLAY_SCENARIO_CONT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_7dc7c0424fbefd701d9ba3d1e39eb072_::operator()(__int64 a1, __int64 a2)
{
  int *v4; // rax
  int v5; // r8d
  __int64 *v6; // rax
  __int64 v7; // r8
  int *v8; // rax
  int v9; // ecx
  _OWORD **v10; // rax
  _OWORD *v11; // rdx
  __int128 v12; // xmm0
  _OWORD *v13; // rdx

  v4 = *(int **)(a1 + 8);
  *(_DWORD *)(a2 + 84) = **(_BYTE **)a1 != 0;
  v5 = *v4;
  v6 = *(__int64 **)(a1 + 16);
  *(_DWORD *)(a2 + 80) = v5;
  v7 = *v6;
  v8 = *(int **)(a1 + 24);
  *(_QWORD *)(a2 + 88) = v7;
  v9 = *v8;
  v10 = *(_OWORD ***)(a1 + 32);
  *(_DWORD *)(a2 + 96) = v9;
  v11 = *v10;
  if ( *v10 )
  {
    *(_OWORD *)(a2 + 100) = *v11;
    *(_OWORD *)(a2 + 116) = v11[1];
    *(_OWORD *)(a2 + 132) = v11[2];
    *(_OWORD *)(a2 + 148) = v11[3];
    *(_OWORD *)(a2 + 164) = v11[4];
    *(_OWORD *)(a2 + 180) = v11[5];
    *(_OWORD *)(a2 + 196) = v11[6];
    v12 = v11[7];
    v13 = v11 + 8;
    *(_OWORD *)(a2 + 212) = v12;
    *(_OWORD *)(a2 + 228) = *v13;
    *(_OWORD *)(a2 + 244) = v13[1];
    *(_OWORD *)(a2 + 260) = v13[2];
    *(_OWORD *)(a2 + 276) = v13[3];
    *(_OWORD *)(a2 + 292) = v13[4];
    *(_QWORD *)(a2 + 308) = *((_QWORD *)v13 + 10);
    *(_DWORD *)(a2 + 316) = *((_DWORD *)v13 + 22);
  }
  return 0LL;
}
