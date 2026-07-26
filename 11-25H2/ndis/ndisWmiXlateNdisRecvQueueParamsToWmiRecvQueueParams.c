/*
 * XREFs of ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams @ 0x1400B86C8
 * Callers:
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x14002D500 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 * Callees:
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

__int64 __fastcall ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams(__int64 a1)
{
  __int64 v1; // rax
  _DWORD *v2; // r8
  __int64 v4; // rdx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rdx
  __int64 v16; // r8
  char *v17; // rax
  _OWORD *v18; // rcx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  _OWORD *v26; // rcx
  char *v27; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int64 result; // rax
  _DWORD v36[6]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v37; // [rsp+18h] [rbp-E8h]
  __int16 v38; // [rsp+20h] [rbp-E0h]
  __int16 v39; // [rsp+22h] [rbp-DEh]
  __int16 v40; // [rsp+24h] [rbp-DCh]
  __int16 v41; // [rsp+26h] [rbp-DAh]
  int v42; // [rsp+28h] [rbp-D8h]
  int v43; // [rsp+2Ch] [rbp-D4h]
  int v44; // [rsp+30h] [rbp-D0h]
  char v45; // [rsp+34h] [rbp-CCh] BYREF
  char v46; // [rsp+238h] [rbp+138h] BYREF

  v1 = 8LL;
  v2 = v36;
  v4 = a1;
  do
  {
    v5 = *(_OWORD *)(v4 + 16);
    *(_OWORD *)v2 = *(_OWORD *)v4;
    v6 = *(_OWORD *)(v4 + 32);
    *((_OWORD *)v2 + 1) = v5;
    v7 = *(_OWORD *)(v4 + 48);
    *((_OWORD *)v2 + 2) = v6;
    v8 = *(_OWORD *)(v4 + 64);
    *((_OWORD *)v2 + 3) = v7;
    v9 = *(_OWORD *)(v4 + 80);
    *((_OWORD *)v2 + 4) = v8;
    v10 = *(_OWORD *)(v4 + 96);
    *((_OWORD *)v2 + 5) = v9;
    v11 = *(_OWORD *)(v4 + 112);
    v4 += 128LL;
    *((_OWORD *)v2 + 6) = v10;
    v2 += 32;
    *((_OWORD *)v2 - 1) = v11;
    --v1;
  }
  while ( v1 );
  v12 = *(_QWORD *)(v4 + 48);
  v13 = *(_OWORD *)(v4 + 16);
  *(_OWORD *)v2 = *(_OWORD *)v4;
  v14 = *(_OWORD *)(v4 + 32);
  *((_OWORD *)v2 + 1) = v13;
  *((_OWORD *)v2 + 2) = v14;
  *((_QWORD *)v2 + 6) = v12;
  LODWORD(v12) = *(_DWORD *)(v4 + 56);
  v15 = 4LL;
  v2[14] = v12;
  *(_DWORD *)(a1 + 20) = 0;
  v16 = 4LL;
  *(_DWORD *)a1 = v36[0];
  *(_DWORD *)(a1 + 4) = v36[1];
  *(_DWORD *)(a1 + 8) = v36[2];
  *(_DWORD *)(a1 + 12) = v36[3];
  *(_DWORD *)(a1 + 16) = v36[4];
  *(_QWORD *)(a1 + 24) = v37;
  *(_WORD *)(a1 + 32) = v38;
  *(_WORD *)(a1 + 34) = v39;
  *(_WORD *)(a1 + 36) = v40;
  *(_WORD *)(a1 + 38) = v41;
  *(_DWORD *)(a1 + 40) = v42;
  *(_DWORD *)(a1 + 44) = v43;
  *(_DWORD *)(a1 + 48) = v44;
  v17 = &v45;
  *(_WORD *)(a1 + 2) = 1084;
  v18 = (_OWORD *)(a1 + 52);
  do
  {
    v19 = *((_OWORD *)v17 + 1);
    *v18 = *(_OWORD *)v17;
    v20 = *((_OWORD *)v17 + 2);
    v18[1] = v19;
    v21 = *((_OWORD *)v17 + 3);
    v18[2] = v20;
    v22 = *((_OWORD *)v17 + 4);
    v18[3] = v21;
    v23 = *((_OWORD *)v17 + 5);
    v18[4] = v22;
    v24 = *((_OWORD *)v17 + 6);
    v18[5] = v23;
    v25 = *((_OWORD *)v17 + 7);
    v17 += 128;
    v18[6] = v24;
    v18 += 8;
    *(v18 - 1) = v25;
    --v16;
  }
  while ( v16 );
  *(_DWORD *)v18 = *(_DWORD *)v17;
  v26 = (_OWORD *)(a1 + 568);
  v27 = &v46;
  do
  {
    v28 = *((_OWORD *)v27 + 1);
    *v26 = *(_OWORD *)v27;
    v29 = *((_OWORD *)v27 + 2);
    v26[1] = v28;
    v30 = *((_OWORD *)v27 + 3);
    v26[2] = v29;
    v31 = *((_OWORD *)v27 + 4);
    v26[3] = v30;
    v32 = *((_OWORD *)v27 + 5);
    v26[4] = v31;
    v33 = *((_OWORD *)v27 + 6);
    v26[5] = v32;
    v34 = *((_OWORD *)v27 + 7);
    v27 += 128;
    v26[6] = v33;
    v26 += 8;
    *(v26 - 1) = v34;
    --v15;
  }
  while ( v15 );
  result = *(unsigned int *)v27;
  *(_DWORD *)v26 = result;
  return result;
}
