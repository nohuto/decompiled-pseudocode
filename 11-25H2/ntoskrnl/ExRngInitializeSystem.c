/*
 * XREFs of ExRngInitializeSystem @ 0x140C3220C
 * Callers:
 *     KiInitializeBootStructures @ 0x140B48120 (KiInitializeBootStructures.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 ExRngInitializeSystem()
{
  _DWORD *v0; // r8
  __int64 v1; // rax
  unsigned int v2; // r9d
  __int64 v3; // r10
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 v28; // rax
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int64 result; // rax
  _OWORD v34[14]; // [rsp+20h] [rbp-F8h] BYREF

  ExpLFGRngLock = 0LL;
  v0 = &ExpLFGRngState;
  v1 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  v2 = 220;
  v3 = 2LL;
  v4 = *(_QWORD *)(v1 + 240) + 344LL;
  do
  {
    v5 = v2 + 1096LL;
    v2 += 220;
    v6 = v4 + v5;
    v7 = *(_OWORD *)(v6 + 16);
    v34[0] = *(_OWORD *)v6;
    v8 = *(_OWORD *)(v6 + 32);
    v34[1] = v7;
    v9 = *(_OWORD *)(v6 + 48);
    v34[2] = v8;
    v10 = *(_OWORD *)(v6 + 64);
    v34[3] = v9;
    v11 = *(_OWORD *)(v6 + 80);
    v34[4] = v10;
    v12 = *(_OWORD *)(v6 + 96);
    v34[5] = v11;
    v13 = *(_OWORD *)(v6 + 112);
    v6 += 128LL;
    v34[6] = v12;
    v14 = *(_QWORD *)(v6 + 80);
    v15 = *(_OWORD *)v6;
    v34[7] = v13;
    v16 = *(_OWORD *)(v6 + 16);
    v34[8] = v15;
    v17 = *(_OWORD *)(v6 + 32);
    v34[9] = v16;
    v18 = *(_OWORD *)(v6 + 48);
    v34[10] = v17;
    v19 = *(_OWORD *)(v6 + 64);
    v34[11] = v18;
    v34[12] = v19;
    *(_QWORD *)&v34[13] = v14;
    DWORD2(v34[13]) = *(_DWORD *)(v6 + 88);
    v20 = v34[0];
    v0[55] = 1;
    v21 = v34[1];
    v0[56] = 32;
    *(_OWORD *)v0 = v20;
    v22 = v34[2];
    *((_OWORD *)v0 + 1) = v21;
    v23 = v34[3];
    *((_OWORD *)v0 + 2) = v22;
    v24 = v34[4];
    *((_OWORD *)v0 + 3) = v23;
    v25 = v34[5];
    *((_OWORD *)v0 + 4) = v24;
    v26 = v34[6];
    *((_OWORD *)v0 + 5) = v25;
    v27 = v34[7];
    *((_OWORD *)v0 + 6) = v26;
    *((_OWORD *)v0 + 7) = v27;
    v28 = *(_QWORD *)&v34[13];
    v29 = v34[9];
    *((_OWORD *)v0 + 8) = v34[8];
    v30 = v34[10];
    *((_OWORD *)v0 + 9) = v29;
    v31 = v34[11];
    *((_OWORD *)v0 + 10) = v30;
    v32 = v34[12];
    *((_OWORD *)v0 + 11) = v31;
    *((_OWORD *)v0 + 12) = v32;
    *((_QWORD *)v0 + 26) = v28;
    v0[54] = DWORD2(v34[13]);
    *v0 |= 1u;
    v0 += 57;
    --v3;
  }
  while ( v3 );
  ExpRemainingLeftoverBootRngData = (1024 - v2) >> 2;
  memmove(ExpLeftoverBootRngData, (const void *)(v4 + v2 + 1096LL), 4LL * ((1024 - v2) >> 2));
  result = 0LL;
  memset((void *)(v4 + 1096), 0, 0x400uLL);
  memset(v34, 0, 0xDCuLL);
  return result;
}
