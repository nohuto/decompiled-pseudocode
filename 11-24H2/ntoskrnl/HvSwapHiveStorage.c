/*
 * XREFs of HvSwapHiveStorage @ 0x1407DFCA8
 * Callers:
 *     CmpSwapHiveStorage @ 0x1407DECCC (CmpSwapHiveStorage.c)
 * Callees:
 *     HvpSwapDual @ 0x1407E0268 (HvpSwapDual.c)
 */

__int64 __fastcall HvSwapHiveStorage(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rbx
  __int64 v6; // r10
  __int64 v7; // rbp
  __int64 v8; // r9
  __int64 v9; // r11
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  char v15; // al
  int v16; // eax
  __int128 v17; // xmm3
  __int128 v18; // xmm4
  __int128 v19; // xmm5
  __int64 v20; // xmm2_8
  __int64 v21; // rsi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 40);
  v4 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = 2LL;
  v8 = *(_QWORD *)(a1 + 32);
  v9 = *(_QWORD *)(a2 + 16);
  v10 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 40) = v2;
  *(_QWORD *)(a2 + 8) = v4;
  *(_QWORD *)(a2 + 16) = v9;
  *(_QWORD *)(a2 + 24) = v6;
  *(_QWORD *)(a2 + 32) = v8;
  *(_QWORD *)(a2 + 48) = v10;
  v11 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a2 + 64) = v11;
  LODWORD(v11) = *(_DWORD *)(a1 + 108);
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(a2 + 108);
  *(_DWORD *)(a2 + 108) = v11;
  v12 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a2 + 96) = v12;
  LODWORD(v12) = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a2 + 88) = v12;
  LODWORD(v12) = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 104);
  *(_DWORD *)(a2 + 104) = v12;
  v13 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 120);
  *(_QWORD *)(a2 + 120) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 112);
  *(_DWORD *)(a2 + 112) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 128);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 128);
  *(_DWORD *)(a2 + 128) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 132);
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 132);
  *(_DWORD *)(a2 + 132) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 136);
  *(_DWORD *)(a2 + 136) = v13;
  LOBYTE(v13) = *(_BYTE *)(a1 + 140);
  *(_BYTE *)(a1 + 140) = v13 ^ (*(_BYTE *)(a2 + 140) ^ v13) & 1;
  LOBYTE(v2) = *(_BYTE *)(a2 + 140) ^ (v13 ^ *(_BYTE *)(a2 + 140)) & 1;
  *(_BYTE *)(a2 + 140) = v2;
  LOBYTE(v10) = *(_BYTE *)(a1 + 140);
  v14 = a1 + 280;
  *(_BYTE *)(a1 + 140) = v10 ^ (v10 ^ v2) & 2;
  v15 = *(_BYTE *)(a2 + 141);
  *(_BYTE *)(a2 + 140) ^= (v10 ^ *(_BYTE *)(a2 + 140)) & 2;
  LOBYTE(v13) = *(_BYTE *)(a1 + 141);
  *(_BYTE *)(a1 + 141) = v15;
  *(_BYTE *)(a2 + 141) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 144);
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a2 + 144);
  *(_DWORD *)(a2 + 144) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 148);
  *(_DWORD *)(a1 + 148) = *(_DWORD *)(a2 + 148);
  *(_DWORD *)(a2 + 148) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 152);
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(a2 + 152);
  *(_DWORD *)(a2 + 152) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 156);
  *(_DWORD *)(a1 + 156) = *(_DWORD *)(a2 + 156);
  *(_DWORD *)(a2 + 156) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 160);
  *(_DWORD *)(a1 + 160) = v13 & 0xFFE07FEC;
  v16 = *(_DWORD *)(a2 + 160);
  *(_DWORD *)(a2 + 160) = v16 ^ (v16 ^ v13) & 0x1F8013;
  *(_DWORD *)(a1 + 160) |= v16 & 0x1F8013;
  v17 = *(_OWORD *)(a1 + 224);
  v18 = *(_OWORD *)(a1 + 240);
  v19 = *(_OWORD *)(a1 + 256);
  v20 = *(_QWORD *)(a1 + 272);
  *(_OWORD *)(a1 + 224) = *(_OWORD *)(a2 + 224);
  *(_OWORD *)(a1 + 240) = *(_OWORD *)(a2 + 240);
  *(_OWORD *)(a1 + 256) = *(_OWORD *)(a2 + 256);
  *(_QWORD *)(a1 + 272) = *(_QWORD *)(a2 + 272);
  *(_OWORD *)(a2 + 224) = v17;
  *(_OWORD *)(a2 + 240) = v18;
  *(_OWORD *)(a2 + 256) = v19;
  *(_QWORD *)(a2 + 272) = v20;
  v21 = a2 - a1;
  do
  {
    result = HvpSwapDual(v14, v21 + v14);
    v14 += 632LL;
    --v7;
  }
  while ( v7 );
  return result;
}
