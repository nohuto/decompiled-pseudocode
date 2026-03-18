/*
 * XREFs of InitializeInteractionStateInfo @ 0x1801B040C
 * Callers:
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x1801AFFBC (--0CInteractionProcessor@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall InitializeInteractionStateInfo(__int64 a1)
{
  _OWORD *v1; // rdx
  _OWORD *v2; // rax
  __int64 v3; // r8
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  char result; // al
  _OWORD v16[3]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v17; // [rsp+30h] [rbp-D0h]
  int v18; // [rsp+78h] [rbp-88h]
  int v19; // [rsp+BCh] [rbp-44h]
  int v20; // [rsp+100h] [rbp+0h]
  int v21; // [rsp+144h] [rbp+44h]
  int v22; // [rsp+188h] [rbp+88h]
  int v23; // [rsp+1CCh] [rbp+CCh]

  v1 = v16;
  v17 = 0LL;
  v18 = 0;
  memset(v16, 0, sizeof(v16));
  v19 = 0;
  v2 = (_OWORD *)a1;
  v3 = 3LL;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  do
  {
    v4 = v1[1];
    *v2 = *v1;
    v5 = v1[2];
    v2[1] = v4;
    v6 = v1[3];
    v2[2] = v5;
    v7 = v1[4];
    v2[3] = v6;
    v8 = v1[5];
    v2[4] = v7;
    v9 = v1[6];
    v2[5] = v8;
    v10 = v1[7];
    v1 += 8;
    v2[6] = v9;
    v2 += 8;
    *(v2 - 1) = v10;
    --v3;
  }
  while ( v3 );
  v11 = v1[1];
  *v2 = *v1;
  v12 = v1[2];
  v2[1] = v11;
  v13 = v1[3];
  v2[2] = v12;
  v14 = v1[4];
  v2[3] = v13;
  v2[4] = v14;
  *(_BYTE *)(a1 + 24) &= 0xC0u;
  result = 41;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_QWORD *)(a1 + 36) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 1065353216LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 76) = 1065353216LL;
  *(_QWORD *)(a1 + 84) = 0LL;
  *(_DWORD *)(a1 + 92) = 0;
  *(_QWORD *)(a1 + 96) = 1065353216LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 116) = 1065353216;
  *(_BYTE *)(a1 + 121) &= 0xE9u;
  *(_BYTE *)(a1 + 121) |= 0x29u;
  *(_BYTE *)(a1 + 120) = -86;
  *(_QWORD *)(a1 + 124) = 1065353216LL;
  *(_QWORD *)(a1 + 132) = 0LL;
  *(_DWORD *)(a1 + 140) = 0;
  *(_QWORD *)(a1 + 144) = 1065353216LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 164) = 1065353216LL;
  *(_QWORD *)(a1 + 172) = 0LL;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 184) = 1065353216;
  *(_BYTE *)(a1 + 189) &= 0xE9u;
  *(_BYTE *)(a1 + 189) |= 0x29u;
  *(_BYTE *)(a1 + 188) = -86;
  *(_QWORD *)(a1 + 192) = 1065353216LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_DWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 212) = 1065353216LL;
  *(_QWORD *)(a1 + 220) = 0LL;
  *(_DWORD *)(a1 + 228) = 0;
  *(_QWORD *)(a1 + 232) = 1065353216LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_DWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 252) = 1065353216;
  *(_BYTE *)(a1 + 257) &= 0xE9u;
  *(_BYTE *)(a1 + 257) |= 0x29u;
  *(_BYTE *)(a1 + 256) = -86;
  *(_QWORD *)(a1 + 260) = 1065353216LL;
  *(_QWORD *)(a1 + 268) = 0LL;
  *(_DWORD *)(a1 + 276) = 0;
  *(_QWORD *)(a1 + 280) = 1065353216LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_DWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 300) = 1065353216LL;
  *(_QWORD *)(a1 + 308) = 0LL;
  *(_DWORD *)(a1 + 316) = 0;
  *(_DWORD *)(a1 + 320) = 1065353216;
  *(_BYTE *)(a1 + 325) &= 0xE9u;
  *(_BYTE *)(a1 + 325) |= 0x29u;
  *(_BYTE *)(a1 + 324) = -86;
  *(_QWORD *)(a1 + 328) = 1065353216LL;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_DWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 348) = 1065353216LL;
  *(_QWORD *)(a1 + 356) = 0LL;
  *(_DWORD *)(a1 + 364) = 0;
  *(_QWORD *)(a1 + 368) = 1065353216LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_DWORD *)(a1 + 384) = 0;
  *(_DWORD *)(a1 + 388) = 1065353216;
  *(_BYTE *)(a1 + 393) &= 0xE9u;
  *(_BYTE *)(a1 + 393) |= 0x29u;
  *(_BYTE *)(a1 + 392) = -86;
  *(_QWORD *)(a1 + 396) = 1065353216LL;
  *(_QWORD *)(a1 + 404) = 0LL;
  *(_DWORD *)(a1 + 412) = 0;
  *(_QWORD *)(a1 + 416) = 1065353216LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_DWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 436) = 1065353216LL;
  *(_QWORD *)(a1 + 444) = 0LL;
  *(_DWORD *)(a1 + 452) = 0;
  *(_DWORD *)(a1 + 456) = 1065353216;
  *(_BYTE *)(a1 + 461) &= 0xE9u;
  *(_BYTE *)(a1 + 461) |= 0x29u;
  *(_BYTE *)(a1 + 460) = -86;
  return result;
}
