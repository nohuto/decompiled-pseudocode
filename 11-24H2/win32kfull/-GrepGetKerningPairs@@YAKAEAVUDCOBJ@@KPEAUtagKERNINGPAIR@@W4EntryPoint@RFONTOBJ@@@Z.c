/*
 * XREFs of ?GrepGetKerningPairs@@YAKAEAVUDCOBJ@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400C1550
 * Callers:
 *     NtGdiGetKerningPairs @ 0x1402602F0 (NtGdiGetKerningPairs.c)
 *     ?GrepGetCharacterPlacementW@@YAKAEAVUDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x140310390 (-GrepGetCharacterPlacementW@@YAKAEAVUDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x14005D30C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DB50 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVUDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z @ 0x1400C17BC (-bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVUDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z.c)
 *     ?cKernPairs@PFEOBJ@@QEAAKPEAPEBU_FD_KERNINGPAIR@@@Z @ 0x1400C1DEC (-cKernPairs@PFEOBJ@@QEAAKPEAPEBU_FD_KERNINGPAIR@@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1400DB6B8 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ?vAddRFONTRef@PFFOBJ@@QEAAXXZ @ 0x140178A00 (-vAddRFONTRef@PFFOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GrepGetKerningPairs(struct UDCOBJ *a1, unsigned int a2, HSEMAPHORE a3, unsigned int a4)
{
  __int64 v5; // rsi
  char v7; // r14
  HSEMAPHORE v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v14; // eax
  HSEMAPHORE v15; // r9
  struct _FD_KERNINGPAIR *v16; // rcx
  __m128i v17; // xmm0
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 SessionState; // rax
  __int64 v22; // [rsp+38h] [rbp-50h] BYREF
  struct _FD_KERNINGPAIR *v23[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v24; // [rsp+50h] [rbp-38h]
  HSEMAPHORE v25[6]; // [rsp+58h] [rbp-30h] BYREF
  float v26; // [rsp+90h] [rbp+8h] BYREF
  char v27; // [rsp+A8h] [rbp+20h]

  v5 = a2;
  v7 = 0;
  v27 = 0;
  v26 = 0.0;
  v23[0] = (struct _FD_KERNINGPAIR *)__PAIR64__(*(unsigned __int16 *)(*(_QWORD *)a1 + 12LL), a4);
  v22 = 0LL;
  RFONTOBJ::vInit((RFONTOBJ *)&v22, a1, 0, 2u, (const struct RFONTOBJ::Tag *)v23);
  if ( v22
    && (v25[0] = *(HSEMAPHORE *)(v22 + 120),
        (unsigned int)bGetNtoWScale((struct EFLOAT *)&v26, a1, (struct RFONTOBJ *)&v22, (struct PFEOBJ *)v25)) )
  {
    v8 = *(HSEMAPHORE *)(v22 + 120);
    v23[0] = *(struct _FD_KERNINGPAIR **)(v22 + 128);
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v25, *(struct PFT **)&v23[0][16].wcFirst);
    if ( ((_DWORD)v25[0][10] & 0x8000) != 0 )
    {
      SessionState = W32GetSessionState(v25[0], v9, v10);
      SEMOBJ<17>::SEMOBJ<17>(v25, *(_QWORD *)(SessionState + 96) + 4872LL);
      PFFOBJ::vAddRFONTRef((PFFOBJ *)v23);
      v7 = 1;
      v27 = 1;
      SEMOBJ<17>::vUnlock(v25);
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v22);
    v25[0] = v8;
    if ( (_DWORD)v5 && a3 )
    {
      v23[0] = 0LL;
      v14 = PFEOBJ::cKernPairs((PFEOBJ *)v25, (const struct _FD_KERNINGPAIR **)v23);
      if ( v14 < (unsigned int)v5 )
        v5 = v14;
      v15 = a3 + 2 * v5;
      while ( a3 < v15 )
      {
        v16 = v23[0];
        *(_WORD *)a3 = v23[0]->wcFirst;
        *((_WORD *)a3 + 1) = v16->wcSecond;
        v11 = 0LL;
        v17 = (__m128i)COERCE_UNSIGNED_INT((float)v16->fwdKern);
        *(float *)v17.m128i_i32 = *(float *)v17.m128i_i32 * v26;
        LODWORD(v22) = v17.m128i_i32[0];
        v24 = 0LL;
        v12 = (unsigned int)_mm_cvtsi128_si32(v17);
        v18 = (unsigned __int8)((int)v12 >> 23) - 118;
        if ( v18 <= 40 )
        {
          v19 = v12 & 0x7FFFFF | 0x800000;
          v24 = v19;
          if ( v18 < 0 )
            v20 = v19 >> (118 - (unsigned __int8)((int)v12 >> 23));
          else
            v20 = v19 << v18;
          v24 = v20 + 0x80000000LL;
          v11 = (v20 + 0x80000000LL) >> 32;
          if ( (int)v12 < 0 )
            v11 = (unsigned int)-(int)v11;
        }
        *((_DWORD *)a3 + 1) = v11;
        ++v23[0];
        a3 += 2;
        v25[2] = a3;
      }
    }
    else
    {
      LODWORD(v5) = *(_DWORD *)(*((_QWORD *)v8 + 4) + 164LL);
    }
    if ( v7 )
    {
      v25[0] = *(HSEMAPHORE *)v8;
      PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v25, v11, v12);
    }
    return (unsigned int)v5;
  }
  else
  {
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v22);
    return 0LL;
  }
}
