/*
 * XREFs of ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z @ 0x1401C0378
 * Callers:
 *     ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1401BFD24 (-CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z.c)
 *     ?LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1401C127C (-LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 *     ?SendDisplayDiagnosticsToBroker@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1401C19E4 (-SendDisplayDiagnosticsToBroker@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 * Callees:
 *     ?RtlStringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x140050B6C (-RtlStringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@QEAAIXZ @ 0x14006D130 (-GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@QEAAIXZ.c)
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x14006D18C (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::GetBlackScreenDiagPacket(
        DISPLAYSTATECHECKER *this,
        struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *a2,
        unsigned int a3)
{
  int BlackScreenDiagDataSize; // eax
  unsigned int v7; // ebp
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rbx
  __int64 v9; // r12
  char *v10; // r15
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r11
  __int64 v22; // r10
  __int64 v23; // r10
  char *v24; // r11
  unsigned int i; // r8d
  char *v26; // r9
  __int64 v27; // rdx
  int v28; // ecx
  unsigned int v29; // ecx
  int v30; // eax
  int v31; // ecx
  char *v32; // rcx

  if ( a3 < (unsigned int)DISPLAYSTATECHECKER::GetBlackScreenDiagDataSize(this) )
    return 3221225507LL;
  BlackScreenDiagDataSize = DISPLAYSTATECHECKER::GetBlackScreenDiagDataSize(this);
  *((_DWORD *)a2 + 10) = 0;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_DWORD *)a2 + 1) = BlackScreenDiagDataSize;
  v7 = 0;
  *(_DWORD *)a2 = 44;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_OWORD *)a2 + 1) = 0LL;
  *((_DWORD *)a2 + 12) = (*(_DWORD *)this >> 8) & 1;
  *((_DWORD *)a2 + 13) = *((_DWORD *)this + 3522);
  for ( *(_OWORD *)((char *)a2 + 56) = *(_OWORD *)((char *)this + 20); v7 < *((_DWORD *)this + 3522); ++v7 )
  {
    DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, v7);
    v9 = 0LL;
    v10 = (char *)a2 + 1752 * v7 + 72;
    *(_QWORD *)v10 = *((_QWORD *)DisplayAdapterDiagData + 1);
    *((_DWORD *)v10 + 2) = *((_DWORD *)DisplayAdapterDiagData + 240);
    *((_DWORD *)v10 + 3) = *((_DWORD *)DisplayAdapterDiagData + 489);
    v11 = *((_DWORD *)v10 + 5);
    *((_DWORD *)v10 + 4) = *((_DWORD *)DisplayAdapterDiagData + 4);
    v12 = (v11 & 0xFFFFFFFE ^ *((_BYTE *)DisplayAdapterDiagData + 20) & 1) & 0xFFFFFFF9;
    *((_DWORD *)v10 + 5) = v12;
    v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(8 * *((_BYTE *)DisplayAdapterDiagData + 3488))) & 8;
    *((_DWORD *)v10 + 5) = v13;
    v14 = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(16 * *((_BYTE *)DisplayAdapterDiagData + 3248))) & 0x10;
    *((_DWORD *)v10 + 5) = v14;
    v15 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(32 * *((_BYTE *)DisplayAdapterDiagData + 3504))) & 0x20;
    *((_DWORD *)v10 + 5) = v15;
    v16 = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(*((_BYTE *)DisplayAdapterDiagData + 3505) << 6)) & 0x40;
    *((_DWORD *)v10 + 5) = v16;
    for ( *((_DWORD *)v10 + 5) = v16 ^ (v16 ^ (*((unsigned __int8 *)DisplayAdapterDiagData + 3506) << 7)) & 0x80;
          (unsigned int)v9 < *((_DWORD *)DisplayAdapterDiagData + 240);
          *(_OWORD *)(v24 + 200) = *(_OWORD *)(v17 + 144) )
    {
      if ( (unsigned int)v9 >= 4 )
      {
        v17 = 64LL;
        v18 = 8LL;
        v19 = 12LL;
        v20 = 28LL;
        v21 = 32LL;
      }
      else
      {
        v17 = (__int64)DisplayAdapterDiagData + 224 * (unsigned int)v9 + 128;
        v18 = (__int64)DisplayAdapterDiagData + 224 * (unsigned int)v9 + 72;
        v19 = (__int64)DisplayAdapterDiagData + 224 * (unsigned int)v9 + 76;
        v20 = (__int64)DisplayAdapterDiagData + 224 * (unsigned int)v9 + 92;
        v21 = (__int64)DisplayAdapterDiagData + 224 * (unsigned int)v9 + 96;
      }
      v22 = 192 * v9;
      *(_DWORD *)&v10[v22 + 24] = *(_DWORD *)v18;
      *(_DWORD *)&v10[v22 + 28] = *(_DWORD *)v19;
      *(_DWORD *)&v10[v22 + 32] = *(_DWORD *)v20;
      RtlStringCchCopyA(&v10[192 * v9 + 36], 15LL, (const char *)v21);
      v24 = &v10[v23];
      *(_OWORD *)(v24 + 56) = *(_OWORD *)v17;
      *(_OWORD *)(v24 + 72) = *(_OWORD *)(v17 + 16);
      *(_OWORD *)(v24 + 88) = *(_OWORD *)(v17 + 32);
      *(_OWORD *)(v24 + 104) = *(_OWORD *)(v17 + 48);
      *(_OWORD *)(v24 + 120) = *(_OWORD *)(v17 + 64);
      *(_OWORD *)(v24 + 136) = *(_OWORD *)(v17 + 80);
      *(_OWORD *)(v24 + 152) = *(_OWORD *)(v17 + 96);
      *(_OWORD *)(v24 + 168) = *(_OWORD *)(v17 + 112);
      *(_OWORD *)(v24 + 184) = *(_OWORD *)(v17 + 128);
      v9 = (unsigned int)(v9 + 1);
    }
    for ( i = 0; i < *((_DWORD *)DisplayAdapterDiagData + 489); *((_QWORD *)v32 + 12) = *((_QWORD *)v26 + 30) )
    {
      if ( i >= 4 )
        v26 = 0LL;
      else
        v26 = (char *)DisplayAdapterDiagData + 248 * i + 964;
      v27 = 240LL * i;
      *(_DWORD *)&v10[v27 + 792] = *(_DWORD *)v26;
      v28 = *(_DWORD *)&v10[v27 + 796] ^ (*(_DWORD *)&v10[v27 + 796] ^ (unsigned __int8)v26[4]) & 1;
      *(_DWORD *)&v10[v27 + 796] = v28;
      ++i;
      v29 = (*((_DWORD *)v26 + 2) > 1u ? 4 : 0) | v28 & 0xFFFFFFFB;
      *(_DWORD *)&v10[v27 + 796] = v29;
      v30 = v29 ^ ((unsigned __int8)v29 ^ (unsigned __int8)(2 * v26[5])) & 2;
      *(_DWORD *)&v10[v27 + 796] = v30;
      v31 = v30 ^ ((unsigned __int8)v30 ^ (unsigned __int8)(8 * v26[6])) & 8;
      *(_DWORD *)&v10[v27 + 796] = v31;
      *(_DWORD *)&v10[v27 + 796] = v31 ^ ((unsigned __int8)v31 ^ (unsigned __int8)(16 * v26[7])) & 0x10;
      v32 = &v10[v27 + 800];
      *(_OWORD *)v32 = *((_OWORD *)v26 + 1);
      *((_OWORD *)v32 + 1) = *((_OWORD *)v26 + 2);
      *((_OWORD *)v32 + 2) = *((_OWORD *)v26 + 3);
      *((_OWORD *)v32 + 3) = *((_OWORD *)v26 + 4);
      *((_OWORD *)v32 + 4) = *((_OWORD *)v26 + 5);
      *((_OWORD *)v32 + 5) = *((_OWORD *)v26 + 6);
      *((_OWORD *)v32 + 6) = *((_OWORD *)v26 + 7);
      v32 += 128;
      *((_OWORD *)v32 - 1) = *((_OWORD *)v26 + 8);
      *(_OWORD *)v32 = *((_OWORD *)v26 + 9);
      *((_OWORD *)v32 + 1) = *((_OWORD *)v26 + 10);
      *((_OWORD *)v32 + 2) = *((_OWORD *)v26 + 11);
      *((_OWORD *)v32 + 3) = *((_OWORD *)v26 + 12);
      *((_OWORD *)v32 + 4) = *((_OWORD *)v26 + 13);
      *((_OWORD *)v32 + 5) = *((_OWORD *)v26 + 14);
    }
  }
  return 0LL;
}
