/*
 * XREFs of CcSetVacbLargeOffset @ 0x140357260
 * Callers:
 *     CcUnmapVacbArray @ 0x1402073E0 (CcUnmapVacbArray.c)
 *     CcGetVirtualAddress @ 0x140229480 (CcGetVirtualAddress.c)
 *     CcGetVacbMiss @ 0x140356790 (CcGetVacbMiss.c)
 *     SetVacb @ 0x1403571D0 (SetVacb.c)
 *     CcAdjustVacbLevelLockCount @ 0x1403EAB94 (CcAdjustVacbLevelLockCount.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403EE88C (CcUnmapInactiveViewsInternal.c)
 *     CcSetFileSizesEx @ 0x1404A10D0 (CcSetFileSizesEx.c)
 * Callees:
 *     CcDeallocateVacbLevel @ 0x1402E5538 (CcDeallocateVacbLevel.c)
 *     CcFreeUnusedVacbLevels @ 0x1403579AC (CcFreeUnusedVacbLevels.c)
 *     VacbLevelReference @ 0x1403ED150 (VacbLevelReference.c)
 *     CcGetBcbListHeadLargeOffset @ 0x14041AFB0 (CcGetBcbListHeadLargeOffset.c)
 *     CcAllocateVacbLevels @ 0x14047255C (CcAllocateVacbLevels.c)
 *     CcAllocateVacbLevel @ 0x1404795EC (CcAllocateVacbLevel.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall CcSetVacbLargeOffset(__int64 a1, __int64 a2, unsigned __int64 a3, __int128 *a4)
{
  __int64 v6; // rbx
  _QWORD *v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rdx
  unsigned int v10; // edi
  int v11; // ecx
  char v12; // si
  unsigned int v13; // r10d
  __int64 v14; // rdx
  __int64 v15; // rax
  _QWORD *VacbLevel; // r15
  __int64 v17; // rax
  char v18; // cl
  int v19; // esi
  __int64 v20; // rbx
  _DWORD *v21; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // eax
  int v26; // edx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  int v29; // eax
  BOOL v30; // r15d
  __int64 v31; // r9
  _DWORD *v32; // rax
  __int64 BcbListHeadLargeOffset; // rax
  __int64 i; // rcx
  _QWORD *v35; // r10
  BOOL v36; // [rsp+20h] [rbp-D8h]
  unsigned int v37; // [rsp+24h] [rbp-D4h]
  __int128 *v38; // [rsp+28h] [rbp-D0h]
  __int128 v39; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v40; // [rsp+40h] [rbp-B8h]
  __int64 v41; // [rsp+50h] [rbp-A8h]
  __int64 v42; // [rsp+58h] [rbp-A0h]
  _OWORD v43[3]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v44; // [rsp+90h] [rbp-68h]
  _DWORD v45[8]; // [rsp+98h] [rbp-60h]

  v41 = a2;
  v38 = a4;
  v6 = a2;
  memset(v43, 0, sizeof(v43));
  v7 = *(_QWORD **)(a1 + 88);
  LODWORD(v8) = 0;
  v9 = *(_QWORD *)(a1 + 32);
  v10 = 0;
  v44 = 0LL;
  v11 = 25;
  v39 = 0LL;
  v40 = 0LL;
  do
  {
    v12 = v11;
    v11 += 7;
    ++v10;
  }
  while ( v9 > 1LL << v11 );
  do
  {
    v37 = v10;
    v13 = v10;
    v14 = v6 >> v12;
    --v10;
    if ( (unsigned int)v8 >= 7 )
      return 0;
    v15 = (unsigned int)v8;
    LODWORD(v8) = v8 + 1;
    v45[v15] = v14;
    *((_QWORD *)v43 + v15) = v7;
    v42 = (unsigned int)v14;
    VacbLevel = (_QWORD *)v7[(unsigned int)v14];
    if ( !VacbLevel )
    {
      v29 = *(_DWORD *)(a1 + 152) & 0x200;
      v30 = v29 && !v10;
      v36 = v30;
      if ( !a4 )
      {
        *(_QWORD *)&v40 = 0LL;
        *((_QWORD *)&v39 + 1) = &v39;
        DWORD2(v40) = 0;
        *(_QWORD *)&v39 = &v39;
        LOBYTE(v14) = v29 != 0;
        if ( !(unsigned __int8)CcAllocateVacbLevels(v13, v14, &v39) )
          return 0;
        a4 = &v39;
        v38 = &v39;
      }
      VacbLevel = (_QWORD *)CcAllocateVacbLevel(a4, v30);
      if ( v36 )
      {
        BcbListHeadLargeOffset = CcGetBcbListHeadLargeOffset(a1, v41, 0LL, v31);
        for ( i = *(_QWORD *)(BcbListHeadLargeOffset + 8); *(_WORD *)(i - 16) == 765; i = *(_QWORD *)(i + 8) )
          BcbListHeadLargeOffset = i;
        v35 = *(_QWORD **)(BcbListHeadLargeOffset + 8);
        *(_QWORD *)(BcbListHeadLargeOffset + 8) = VacbLevel + 128;
        VacbLevel[128] = BcbListHeadLargeOffset;
        VacbLevel[129] = VacbLevel + 130;
        VacbLevel[130] = VacbLevel + 128;
        VacbLevel[131] = VacbLevel + 132;
        VacbLevel[132] = VacbLevel + 130;
        VacbLevel[133] = VacbLevel + 134;
        VacbLevel[134] = VacbLevel + 132;
        VacbLevel[135] = VacbLevel + 136;
        VacbLevel[136] = VacbLevel + 134;
        VacbLevel[137] = VacbLevel + 138;
        VacbLevel[138] = VacbLevel + 136;
        VacbLevel[139] = VacbLevel + 140;
        VacbLevel[140] = VacbLevel + 138;
        VacbLevel[141] = VacbLevel + 142;
        VacbLevel[142] = VacbLevel + 140;
        VacbLevel[143] = VacbLevel + 144;
        VacbLevel[144] = VacbLevel + 142;
        VacbLevel[145] = VacbLevel + 146;
        VacbLevel[146] = VacbLevel + 144;
        VacbLevel[147] = VacbLevel + 148;
        VacbLevel[148] = VacbLevel + 146;
        VacbLevel[149] = VacbLevel + 150;
        VacbLevel[150] = VacbLevel + 148;
        VacbLevel[151] = VacbLevel + 152;
        VacbLevel[152] = VacbLevel + 150;
        VacbLevel[153] = VacbLevel + 154;
        VacbLevel[154] = VacbLevel + 152;
        VacbLevel[155] = VacbLevel + 156;
        VacbLevel[156] = VacbLevel + 154;
        VacbLevel[157] = VacbLevel + 158;
        VacbLevel[158] = VacbLevel + 156;
        VacbLevel[159] = VacbLevel + 160;
        VacbLevel[160] = VacbLevel + 158;
        VacbLevel[161] = VacbLevel + 162;
        VacbLevel[162] = VacbLevel + 160;
        VacbLevel[163] = VacbLevel + 164;
        VacbLevel[164] = VacbLevel + 162;
        VacbLevel[165] = VacbLevel + 166;
        VacbLevel[166] = VacbLevel + 164;
        VacbLevel[167] = VacbLevel + 168;
        VacbLevel[168] = VacbLevel + 166;
        VacbLevel[169] = VacbLevel + 170;
        VacbLevel[170] = VacbLevel + 168;
        VacbLevel[171] = VacbLevel + 172;
        VacbLevel[172] = VacbLevel + 170;
        VacbLevel[173] = VacbLevel + 174;
        VacbLevel[174] = VacbLevel + 172;
        VacbLevel[175] = VacbLevel + 176;
        VacbLevel[176] = VacbLevel + 174;
        VacbLevel[177] = VacbLevel + 178;
        VacbLevel[178] = VacbLevel + 176;
        VacbLevel[179] = VacbLevel + 180;
        VacbLevel[180] = VacbLevel + 178;
        VacbLevel[181] = VacbLevel + 182;
        VacbLevel[182] = VacbLevel + 180;
        VacbLevel[183] = VacbLevel + 184;
        VacbLevel[184] = VacbLevel + 182;
        VacbLevel[185] = VacbLevel + 186;
        VacbLevel[186] = VacbLevel + 184;
        VacbLevel[187] = VacbLevel + 188;
        VacbLevel[188] = VacbLevel + 186;
        VacbLevel[189] = VacbLevel + 190;
        VacbLevel[190] = VacbLevel + 188;
        VacbLevel[191] = VacbLevel + 192;
        VacbLevel[192] = VacbLevel + 190;
        VacbLevel[193] = VacbLevel + 194;
        VacbLevel[194] = VacbLevel + 192;
        VacbLevel[195] = VacbLevel + 196;
        VacbLevel[196] = VacbLevel + 194;
        VacbLevel[197] = VacbLevel + 198;
        VacbLevel[198] = VacbLevel + 196;
        VacbLevel[199] = VacbLevel + 200;
        VacbLevel[200] = VacbLevel + 198;
        VacbLevel[201] = VacbLevel + 202;
        VacbLevel[202] = VacbLevel + 200;
        VacbLevel[203] = VacbLevel + 204;
        VacbLevel[204] = VacbLevel + 202;
        VacbLevel[205] = VacbLevel + 206;
        VacbLevel[206] = VacbLevel + 204;
        VacbLevel[207] = VacbLevel + 208;
        VacbLevel[208] = VacbLevel + 206;
        VacbLevel[209] = VacbLevel + 210;
        VacbLevel[210] = VacbLevel + 208;
        VacbLevel[211] = VacbLevel + 212;
        VacbLevel[212] = VacbLevel + 210;
        VacbLevel[213] = VacbLevel + 214;
        VacbLevel[214] = VacbLevel + 212;
        VacbLevel[215] = VacbLevel + 216;
        VacbLevel[216] = VacbLevel + 214;
        VacbLevel[217] = VacbLevel + 218;
        VacbLevel[218] = VacbLevel + 216;
        VacbLevel[219] = VacbLevel + 220;
        VacbLevel[220] = VacbLevel + 218;
        VacbLevel[221] = VacbLevel + 222;
        VacbLevel[222] = VacbLevel + 220;
        VacbLevel[223] = VacbLevel + 224;
        VacbLevel[224] = VacbLevel + 222;
        VacbLevel[225] = VacbLevel + 226;
        VacbLevel[226] = VacbLevel + 224;
        VacbLevel[227] = VacbLevel + 228;
        VacbLevel[228] = VacbLevel + 226;
        VacbLevel[229] = VacbLevel + 230;
        VacbLevel[230] = VacbLevel + 228;
        VacbLevel[231] = VacbLevel + 232;
        VacbLevel[232] = VacbLevel + 230;
        VacbLevel[233] = VacbLevel + 234;
        VacbLevel[234] = VacbLevel + 232;
        VacbLevel[235] = VacbLevel + 236;
        VacbLevel[236] = VacbLevel + 234;
        VacbLevel[237] = VacbLevel + 238;
        VacbLevel[238] = VacbLevel + 236;
        VacbLevel[239] = VacbLevel + 240;
        VacbLevel[240] = VacbLevel + 238;
        VacbLevel[241] = VacbLevel + 242;
        VacbLevel[242] = VacbLevel + 240;
        VacbLevel[243] = VacbLevel + 244;
        VacbLevel[244] = VacbLevel + 242;
        VacbLevel[245] = VacbLevel + 246;
        VacbLevel[246] = VacbLevel + 244;
        VacbLevel[247] = VacbLevel + 248;
        VacbLevel[248] = VacbLevel + 246;
        VacbLevel[249] = VacbLevel + 250;
        VacbLevel[250] = VacbLevel + 248;
        VacbLevel[251] = VacbLevel + 252;
        VacbLevel[252] = VacbLevel + 250;
        VacbLevel[253] = VacbLevel + 254;
        VacbLevel[254] = VacbLevel + 252;
        VacbLevel[255] = v35;
        *v35 = VacbLevel + 254;
      }
      v7[v42] = VacbLevel;
      v32 = (_DWORD *)VacbLevelReference(a1, v7, v37);
      a4 = v38;
      ++*v32;
    }
    v17 = 1LL << v12;
    v12 -= 7;
    v7 = VacbLevel;
    v6 &= v17 - 1;
  }
  while ( v10 );
  if ( a3 >= 0xFFFFFFFFFFFFFFFEuLL )
  {
    v19 = 1;
    if ( a3 != -2LL )
      goto LABEL_8;
    while ( 1 )
    {
LABEL_16:
      v23 = 128LL;
      if ( !v10 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
        v23 = 256LL;
      if ( v19 )
        --HIDWORD(v7[v23]);
      else
        --LODWORD(v7[v23]);
      v19 = 0;
      v24 = 128LL;
      if ( !v10 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
        v24 = 256LL;
      if ( v7[v24] || !(_DWORD)v8 )
        break;
      v25 = v10;
      v8 = (unsigned int)(v8 - 1);
      ++v10;
      v26 = 0;
      if ( !v25 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      {
        v27 = v7[128];
        v26 = 1;
        v28 = (_QWORD *)v7[255];
        *(_QWORD *)(v27 + 8) = v28;
        *v28 = v27;
      }
      CcDeallocateVacbLevel(v7, v26);
      v7 = (_QWORD *)*((_QWORD *)v43 + v8);
      v7[v45[v8]] = 0LL;
    }
    a4 = v38;
    goto LABEL_12;
  }
  v18 = v12;
  v19 = 0;
  VacbLevel[(unsigned int)(v6 >> v18)] = a3;
  if ( !a3 )
    goto LABEL_16;
LABEL_8:
  v20 = 256LL;
  if ( (*(_DWORD *)(a1 + 152) & 0x200) == 0 )
    v20 = 128LL;
  v21 = &VacbLevel[v20];
  if ( v19 )
    ++v21[1];
  else
    ++*v21;
LABEL_12:
  if ( a4 == &v39 )
    CcFreeUnusedVacbLevels(a4);
  return 1;
}
