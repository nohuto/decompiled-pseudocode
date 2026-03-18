/*
 * XREFs of FinishStockFontInit @ 0x140151750
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1401513A0 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     FinishStockFontReinit @ 0x140151630 (FinishStockFontReinit.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x140037A84 (GreCreateFontIndirectW.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x1400BEA9C (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1401136F0 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ @ 0x140113BD8 (-IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?vInitEmergencyStockFont@@YAXPEBG@Z @ 0x14015197C (-vInitEmergencyStockFont@@YAXPEBG@Z.c)
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x140151A74 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x140151E58 (-bSetStockFont@@YAHPEAXHH@Z.c)
 */

void __fastcall FinishStockFontInit(__int64 c, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v4; // rdx
  Gre::Base *v5; // rcx
  __int64 v6; // r8
  struct Gre::Base::SESSION_GLOBALS *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // edi
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __m128i v14; // xmm2
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  INT v17; // eax
  __int64 FontIndirectW; // rax
  const unsigned __int16 *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // [rsp+28h] [rbp-19h] BYREF
  struct LFONT *v24; // [rsp+30h] [rbp-11h]
  INT a[4]; // [rsp+38h] [rbp-9h] BYREF
  __int128 v26; // [rsp+48h] [rbp+7h]
  __int128 v27; // [rsp+58h] [rbp+17h]
  __int128 v28; // [rsp+68h] [rbp+27h]
  __int128 v29; // [rsp+78h] [rbp+37h]
  __int64 v30; // [rsp+88h] [rbp+47h]
  int v31; // [rsp+90h] [rbp+4Fh]
  __int16 v32; // [rsp+94h] [rbp+53h]

  v3 = c;
  v4 = *(_QWORD *)(W32GetSessionState(c, a2, a3) + 96);
  if ( *(_BYTE *)(v4 + 24290)
    || UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost((__int64)v5, v4, v6)
    || UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread((__int64)v5, v21, v22) )
  {
    v7 = Gre::Base::Globals(v5);
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v23, *(struct HLFONT__ **)(*((_QWORD *)v7 + 376) + 136LL), 0LL);
    v9 = v23;
    v10 = 1;
    v11 = v23 != 0;
    if ( v23 )
    {
      *(_DWORD *)(v23 + 252) = -((*(_DWORD *)(v23 + 252) * v3 + 36) / 0x48);
      v12 = *(_OWORD *)(v9 + 268);
      v13 = *(_OWORD *)(v9 + 284);
      v31 = *(_DWORD *)(v9 + 340);
      v14 = *(__m128i *)(v9 + 252);
      v26 = v12;
      v15 = *(_OWORD *)(v9 + 300);
      v27 = v13;
      v16 = *(_OWORD *)(v9 + 316);
      v28 = v15;
      v30 = *(_QWORD *)(v9 + 332);
      *(__m128i *)a = v14;
      v29 = v16;
      a[0] = EngMulDiv(_mm_cvtsi128_si32(v14), 96, v3);
      v17 = EngMulDiv(a[1], 96, v3);
      v32 = 1;
      a[1] = v17;
      FontIndirectW = GreCreateFontIndirectW((__int128 *)a);
      v11 = *((_QWORD *)v7 + 377);
      *(_QWORD *)(v11 + 136) = FontIndirectW;
    }
    if ( v3 > 0x6C )
    {
      FinishStockFontInitInternal(
        L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize\\LargeFont",
        0);
    }
    else
    {
      if ( (*(_DWORD *)(*(_QWORD *)(W32GetSessionState(v11, v8, v9) + 96) + 19592LL) & 2) != 0 )
        FinishStockFontInitInternal(
          L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize\\LargeFont",
          0);
      v10 = 0;
    }
    FinishStockFontInitInternal(
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize\\SmallFont",
      v10);
    vInitEmergencyStockFont(v19);
    v20 = *((_QWORD *)v7 + 376);
    if ( !*(_QWORD *)(v20 + 128) )
      bSetStockFont(*(void **)(v20 + 104), 16, 0);
    *((_QWORD *)v7 + 55) = *(_QWORD *)(*((_QWORD *)v7 + 376) + 104LL);
    if ( v24 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v24);
  }
}
