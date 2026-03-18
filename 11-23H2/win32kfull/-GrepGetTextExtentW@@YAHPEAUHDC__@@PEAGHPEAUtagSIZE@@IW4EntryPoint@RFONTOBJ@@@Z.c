/*
 * XREFs of ?GrepGetTextExtentW@@YAHPEAUHDC__@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1C00CD004
 * Callers:
 *     GreGetTextExtentW @ 0x1C00CD5F8 (GreGetTextExtentW.c)
 *     NtGdiGetTextExtent @ 0x1C02C2DC0 (NtGdiGetTextExtent.c)
 *     ?GreGetCharacterPlacementW@@YAKPEAUHDC__@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1C02D67C0 (-GreGetCharacterPlacementW@@YAKPEAUHDC__@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?bUseMetaPtoD@DC@@QEBAHXZ @ 0x1C001763C (-bUseMetaPtoD@DC@@QEBAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0076170 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C00C4BD8 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C00C6C8C (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00C8860 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C00CA24C (--1ESTROBJ@@QEAA@XZ.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C00CCDE0 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010D900 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C010EC40 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x1C015C774 (-bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z.c)
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C028CFE0 (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 */

__int64 __fastcall GrepGetTextExtentW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        struct tagSIZE *a4,
        char a5,
        float a6)
{
  unsigned int v9; // ebx
  _DWORD *v10; // r10
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // r8
  __m128i v14; // xmm1
  float cx; // xmm0_4
  __m128i v16; // xmm0
  __m128i v17; // xmm8
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v21; // [rsp+98h] [rbp-80h] BYREF
  float v22; // [rsp+9Ch] [rbp-7Ch]
  __int64 v23; // [rsp+A0h] [rbp-78h] BYREF
  _QWORD v24[2]; // [rsp+A8h] [rbp-70h] BYREF
  DC *v25[2]; // [rsp+B8h] [rbp-60h] BYREF
  char v26[32]; // [rsp+C8h] [rbp-50h] BYREF
  float v27; // [rsp+E8h] [rbp-30h] BYREF
  float v28; // [rsp+ECh] [rbp-2Ch]
  float v29; // [rsp+F0h] [rbp-28h]
  float v30; // [rsp+F4h] [rbp-24h]
  int v31; // [rsp+F8h] [rbp-20h]
  int v32; // [rsp+FCh] [rbp-1Ch]
  __int64 v33; // [rsp+100h] [rbp-18h]
  int v34; // [rsp+108h] [rbp-10h]
  _BYTE v35[320]; // [rsp+118h] [rbp+0h] BYREF

  v9 = 0;
  if ( a3 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v25, a1);
    if ( v25[0] )
    {
      v21 = a6;
      LODWORD(v22) = *((unsigned __int16 *)v25[0] + 6);
      v23 = 0LL;
      if ( (unsigned int)RFONTOBJ::bInit(
                           (RFONTOBJ *)&v23,
                           (struct XDCOBJ *)v25,
                           0,
                           (a5 & 2) != 0 ? 4 : 2,
                           (const struct RFONTOBJ::Tag *)&v21) )
        GreAcquireSemaphore(*(_QWORD *)(v23 + 504));
      v10 = (_DWORD *)v23;
      if ( v23 )
      {
        if ( (*(_DWORD *)(v23 + 84) & 4) != 0 )
          RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v23, a2, a3);
        v11 = *((_DWORD *)v25[0] + 439);
        if ( v11 == v10[98] || v10[52] == 1 && (v10[179] & 4) == 0 )
        {
          v9 = RFONTOBJ::bTextExtent(
                 (RFONTOBJ *)&v23,
                 (struct XDCOBJ *)v25,
                 a2,
                 a3,
                 v11,
                 *(_DWORD *)(*((_QWORD *)v25[0] + 122) + 280LL),
                 *(_DWORD *)(*((_QWORD *)v25[0] + 122) + 284LL),
                 *(_DWORD *)(*((_QWORD *)v25[0] + 122) + 288LL),
                 a5,
                 a4);
          if ( v9
            && v11
            && *(_DWORD *)(*((_QWORD *)v25[0] + 122) + 208LL) == 1
            && !(unsigned int)DC::bUseMetaPtoD(v25[0])
            && (*(_DWORD *)(v23 + 716) & 4) != 0 )
          {
            v14 = _mm_cvtsi32_si128(a4->cy);
            cx = (float)a4->cx;
            v33 = 0LL;
            v34 = 0;
            v21 = cx;
            v16 = (__m128i)COERCE_UNSIGNED_INT((float)v11);
            LODWORD(v22) = _mm_cvtepi32_ps(v14).m128_u32[0];
            *(float *)v16.m128i_i32 = *(float *)v16.m128i_i32 / 10.0;
            v17 = v16;
            v18 = COERCE_FLOAT(efCos((unsigned int)_mm_cvtsi128_si32(v16)));
            v27 = v18;
            if ( v18 < 0.0 )
              LODWORD(v27) = LODWORD(v18) ^ _xmm;
            v30 = v27;
            v19 = COERCE_FLOAT(efSin((unsigned int)_mm_cvtsi128_si32(v17)));
            v28 = v19;
            if ( v19 < 0.0 )
              LODWORD(v28) = LODWORD(v19) ^ _xmm;
            v31 = 0;
            v32 = 0;
            v29 = v28;
            EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v24, (struct MATRIX *)&v27, 0x21u);
            v9 = 1;
            if ( (*(_DWORD *)(v24[0] + 32LL) & 2) == 0 )
              v9 = EXFORMOBJ::bXform((EXFORMOBJ *)v24, (struct VECTORFL *)&v21, (struct VECTORFL *)&v21, 1uLL);
            if ( v9 )
            {
              if ( v21 < 0.0 )
                LODWORD(v21) ^= _xmm;
              if ( v22 < 0.0 )
                LODWORD(v22) ^= _xmm;
              v9 = EPOINTFL::bToPOINTL((EPOINTFL *)&v21, (struct _POINTL *)a4);
            }
          }
        }
        else
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v24, (struct XDCOBJ *)v25, 516);
          ESTROBJ::vInit(
            (ESTROBJ *)v35,
            a2,
            a3,
            (struct XDCOBJ *)v25,
            (struct RFONTOBJ *)&v23,
            (struct EXFORMOBJ *)v24,
            0LL,
            0,
            v11,
            *(_DWORD *)(*((_QWORD *)v25[0] + 122) + 280LL),
            *(_DWORD *)(*((_QWORD *)v25[0] + 122) + 284LL),
            *(_DWORD *)(*((_QWORD *)v25[0] + 122) + 288LL),
            0,
            0,
            0,
            0LL,
            0LL,
            0);
          if ( (v35[232] & 4) != 0 )
            v9 = ESTROBJ::bTextExtent((ESTROBJ *)v35, (struct RFONTOBJ *)&v23, v11, a4);
          ESTROBJ::~ESTROBJ((ESTROBJ *)v35, v12, v13);
        }
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v23);
      if ( v25[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v25);
    }
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v26);
  }
  else
  {
    *a4 = 0LL;
    return 1;
  }
  return v9;
}
