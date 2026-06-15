/*
 * XREFs of ??0SystemAudioStream@@QEAA@$$QEAU0@@Z @ 0x1800F3AC4
 * Callers:
 *     ?ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSystemAudioStream@@@Z @ 0x1800F4F70 (-ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemAudioStream::SystemAudioStream(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // rax
  _OWORD *v7; // rcx
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  _OWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r10
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  _OWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r10
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  _OWORD *v20; // rcx
  __int64 v21; // rax
  _OWORD *v22; // rax
  __int128 v23; // xmm1

  v2 = 2LL;
  v4 = 2LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  v5 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a1 + 40) = v5;
  v6 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a1 + 48) = v6;
  v7 = (_OWORD *)(a1 + 56);
  v8 = (_OWORD *)(a2 + 56);
  do
  {
    *v7 = *v8;
    v7[1] = v8[1];
    v7[2] = v8[2];
    v7[3] = v8[3];
    v7[4] = v8[4];
    v7[5] = v8[5];
    v7[6] = v8[6];
    v7 += 8;
    v9 = v8[7];
    v8 += 8;
    *(v7 - 1) = v9;
    --v4;
  }
  while ( v4 );
  *v7 = *v8;
  v7[1] = v8[1];
  *((_QWORD *)v7 + 4) = *((_QWORD *)v8 + 4);
  v10 = (_OWORD *)(a1 + 360);
  v11 = *(_QWORD *)(a2 + 352);
  *(_QWORD *)(a2 + 352) = 0LL;
  v12 = 2LL;
  *(_QWORD *)(a1 + 352) = v11;
  v13 = (_OWORD *)(a2 + 360);
  do
  {
    *v10 = *v13;
    v10[1] = v13[1];
    v10[2] = v13[2];
    v10[3] = v13[3];
    v10[4] = v13[4];
    v10[5] = v13[5];
    v10[6] = v13[6];
    v10 += 8;
    v14 = v13[7];
    v13 += 8;
    *(v10 - 1) = v14;
    --v12;
  }
  while ( v12 );
  *v10 = *v13;
  v10[1] = v13[1];
  *((_QWORD *)v10 + 4) = *((_QWORD *)v13 + 4);
  v15 = (_OWORD *)(a1 + 664);
  v16 = *(_QWORD *)(a2 + 656);
  *(_QWORD *)(a2 + 656) = 0LL;
  v17 = 2LL;
  *(_QWORD *)(a1 + 656) = v16;
  v18 = (_OWORD *)(a2 + 664);
  do
  {
    *v15 = *v18;
    v15[1] = v18[1];
    v15[2] = v18[2];
    v15[3] = v18[3];
    v15[4] = v18[4];
    v15[5] = v18[5];
    v15[6] = v18[6];
    v15 += 8;
    v19 = v18[7];
    v18 += 8;
    *(v15 - 1) = v19;
    --v17;
  }
  while ( v17 );
  *v15 = *v18;
  v15[1] = v18[1];
  *((_QWORD *)v15 + 4) = *((_QWORD *)v18 + 4);
  v20 = (_OWORD *)(a1 + 976);
  *(_DWORD *)(a1 + 960) = *(_DWORD *)(a2 + 960);
  v21 = *(_QWORD *)(a2 + 968);
  *(_QWORD *)(a2 + 968) = 0LL;
  *(_QWORD *)(a1 + 968) = v21;
  v22 = (_OWORD *)(a2 + 976);
  do
  {
    *v20 = *v22;
    v20[1] = v22[1];
    v20[2] = v22[2];
    v20[3] = v22[3];
    v20[4] = v22[4];
    v20[5] = v22[5];
    v20[6] = v22[6];
    v20 += 8;
    v23 = v22[7];
    v22 += 8;
    *(v20 - 1) = v23;
    --v2;
  }
  while ( v2 );
  *v20 = *v22;
  v20[1] = v22[1];
  *((_QWORD *)v20 + 4) = *((_QWORD *)v22 + 4);
  *(_DWORD *)(a1 + 1272) = *(_DWORD *)(a2 + 1272);
  *(_DWORD *)(a1 + 1276) = *(_DWORD *)(a2 + 1276);
  *(_DWORD *)(a1 + 1280) = *(_DWORD *)(a2 + 1280);
  *(_DWORD *)(a1 + 1284) = *(_DWORD *)(a2 + 1284);
  return a1;
}
