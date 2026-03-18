/*
 * XREFs of ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C001F36C
 * Callers:
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C001E110 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C007D354 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C028B868 (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 *     GreCreateHalftonePalette @ 0x1C02D0A00 (GreCreateHalftonePalette.c)
 *     EngHTBlt @ 0x1C02DE1C0 (EngHTBlt.c)
 * Callees:
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C001F770 (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C001F9C0 (HT_CreateDeviceHalftoneInfo.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?bEqualEntries@XEPALOBJ@@QEAAHV1@@Z @ 0x1C02D7C7C (-bEqualEntries@XEPALOBJ@@QEAAHV1@@Z.c)
 */

__int64 __fastcall PDEVOBJ::bEnableHalftone(PDEVOBJ *this, struct tagCOLORADJUSTMENT *a2)
{
  unsigned int v2; // esi
  __int64 v5; // r8
  __int64 v6; // r8
  __int16 v7; // r9
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8
  __int64 ThreadWin32Thread; // rdi
  __int64 v11; // r8
  Gre::Base *v12; // rcx
  struct Gre::Base::SESSION_GLOBALS *v13; // rax
  __int64 v14; // rdx
  signed __int32 v15; // ett
  __int64 v16; // rbx
  __int64 v18; // rdi
  signed __int32 v19; // ett
  _QWORD *v20; // [rsp+28h] [rbp-D8h] BYREF
  int v21; // [rsp+30h] [rbp-D0h]
  __int128 v22; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v23; // [rsp+48h] [rbp-B8h]
  int Src; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v25; // [rsp+64h] [rbp-9Ch]
  __int16 v26; // [rsp+66h] [rbp-9Ah]
  __int64 v27; // [rsp+68h] [rbp-98h]
  __int128 v28; // [rsp+70h] [rbp-90h]
  _WORD *v29; // [rsp+80h] [rbp-80h]
  _WORD *v30; // [rsp+88h] [rbp-78h]
  __int16 v31; // [rsp+90h] [rbp-70h]
  __int16 v32; // [rsp+92h] [rbp-6Eh]
  __int16 v33; // [rsp+94h] [rbp-6Ch]
  __int16 v34; // [rsp+96h] [rbp-6Ah]
  __int128 v35; // [rsp+98h] [rbp-68h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  __int16 v37; // [rsp+B0h] [rbp-50h]
  __int16 v38; // [rsp+B2h] [rbp-4Eh]
  __int16 v39; // [rsp+B4h] [rbp-4Ch]
  char v40; // [rsp+B6h] [rbp-4Ah]
  char v41; // [rsp+B7h] [rbp-49h]
  _WORD v42[8]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v43[24]; // [rsp+D0h] [rbp-30h] BYREF

  v2 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) != 0 )
    Gre::Base::Globals(this);
  v5 = *(_QWORD *)this;
  v21 = 0;
  v20 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreateHTPalette(
                        (PALMEMOBJ *)&v20,
                        *(_DWORD *)(v5 + 2344),
                        (struct _GDIINFO *)(v5 + 2104)) )
    goto LABEL_20;
  v6 = *(_QWORD *)this;
  Src = 1213491459;
  v26 = 0;
  v36 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v35 = 0LL;
  v25 = *(_WORD *)(v6 + 2348);
  v40 = *(_BYTE *)(v6 + 2351);
  v41 = 0;
  if ( *(_DWORD *)(v6 + 2340) > 0x12u )
  {
    v7 = 17;
    v26 = 17;
  }
  else
  {
    v7 = *(unsigned __int8 *)(v6 + 2340);
    v26 = v7;
  }
  v31 = (*(_DWORD *)(v6 + 2300) + *(_DWORD *)(v6 + 2296) + *(_DWORD *)(v6 + 2304)) / 3;
  v37 = *(_WORD *)(v6 + 2296);
  v38 = *(_WORD *)(v6 + 2300);
  v39 = *(_WORD *)(v6 + 2304);
  v27 = 0LL;
  v28 = 0LL;
  if ( v7 == 18 )
  {
    if ( (unsigned int)(*(_DWORD *)(v6 + 2376) - 4) <= 0xFC
      && (unsigned int)(*(_DWORD *)(v6 + 2380) - 4) <= 0xFC
      && *(_QWORD *)(v6 + 2384)
      && *(_QWORD *)(v6 + 2392)
      && *(_QWORD *)(v6 + 2400) )
    {
      LODWORD(v22) = 32;
      WORD2(v22) = *(_WORD *)(v6 + 2376);
      WORD3(v22) = *(_WORD *)(v6 + 2380);
      *((_QWORD *)&v22 + 1) = *(_QWORD *)(v6 + 2384);
      v23 = *(_OWORD *)(v6 + 2392);
      *(_QWORD *)&v28 = &v22;
    }
    else
    {
      v26 = 17;
    }
  }
  v43[0] = *(_WORD *)(v6 + 2212);
  v43[1] = *(_WORD *)(v6 + 2216);
  v43[2] = *(_WORD *)(v6 + 2220);
  v43[3] = *(_WORD *)(v6 + 2224);
  v43[4] = *(_WORD *)(v6 + 2228);
  v43[5] = *(_WORD *)(v6 + 2232);
  v43[6] = *(_WORD *)(v6 + 2236);
  v43[7] = *(_WORD *)(v6 + 2240);
  v43[8] = *(_WORD *)(v6 + 2244);
  v43[9] = *(_WORD *)(v6 + 2248);
  v43[10] = *(_WORD *)(v6 + 2252);
  v43[11] = *(_WORD *)(v6 + 2256);
  v43[12] = *(_WORD *)(v6 + 2260);
  v43[13] = *(_WORD *)(v6 + 2264);
  v43[14] = *(_WORD *)(v6 + 2268);
  v43[15] = *(_WORD *)(v6 + 2272);
  v43[16] = *(_WORD *)(v6 + 2276);
  v43[17] = *(_WORD *)(v6 + 2280);
  v43[18] = *(_WORD *)(v6 + 2284);
  v43[19] = *(_WORD *)(v6 + 2288);
  v43[20] = *(_WORD *)(v6 + 2292);
  v29 = v43;
  v42[0] = *(_WORD *)(v6 + 2308);
  v42[1] = *(_WORD *)(v6 + 2312);
  v42[2] = *(_WORD *)(v6 + 2316);
  v42[3] = *(_WORD *)(v6 + 2320);
  v42[4] = *(_WORD *)(v6 + 2324);
  v42[5] = *(_WORD *)(v6 + 2328);
  v30 = v42;
  v32 = *(_WORD *)(v6 + 2144);
  v33 = *(_WORD *)(v6 + 2148);
  v34 = *(_WORD *)(v6 + 2332);
  if ( a2 )
  {
    v8 = *(_OWORD *)&a2->caSize;
    v9 = *(_QWORD *)&a2->caContrast;
  }
  else
  {
    v8 = DefaultCA;
    v9 = 0LL;
  }
  v36 = v9;
  v35 = v8;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( (int)HT_CreateDeviceHalftoneInfo(&Src) <= 0 )
  {
    EngSetLastError(8u);
    v18 = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( v18 && PDEVOBJ::bAllowShareAccess(this) && (*(_DWORD *)(v18 + 104) || *(_DWORD *)(v18 + 108)) )
      *(_QWORD *)(v18 + 288) = 0LL;
    else
      *(_QWORD *)(*(_QWORD *)this + 1504LL) = 0LL;
LABEL_20:
    v2 = 0;
    goto LABEL_18;
  }
  if ( ThreadWin32Thread
    && PDEVOBJ::bAllowShareAccess(this)
    && (*(_DWORD *)(ThreadWin32Thread + 104) || *(_DWORD *)(ThreadWin32Thread + 108)) )
  {
    v13 = Gre::Base::Globals(v12);
    *(_QWORD *)(ThreadWin32Thread + 288) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 296) = *((_DWORD *)v13 + 954);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 1504LL) = 0LL;
  }
  v14 = *(_QWORD *)this;
  _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
  do
    v15 = *(_DWORD *)(v14 + 40);
  while ( v15 != _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 40), v15 & 0xFFFFFDFF, v15) );
  v16 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v16 + 40) & 1) == 0 && (unsigned int)XEPALOBJ::bEqualEntries(&v20, *(_QWORD *)(v16 + 1776)) )
  {
    _m_prefetchw((const void *)(v16 + 40));
    do
      v19 = *(_DWORD *)(v16 + 40);
    while ( v19 != _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 40), v19 | 0x200, v19) );
  }
  LOBYTE(v11) = 8;
  MEMORY[0] = *v20;
  HmgSetOwner(*v20, 0LL, v11);
  v21 = 1;
LABEL_18:
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v20);
  return v2;
}
