/*
 * XREFs of NtGdiGetCharacterPlacementW @ 0x140337120
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x1400BB3D8 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?GrepGetCharacterPlacementW@@YAKAEAVUDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x140310390 (-GrepGetCharacterPlacementW@@YAKAEAVUDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtGdiGetCharacterPlacementW(
        HDC a1,
        const void *a2,
        signed int a3,
        signed int a4,
        ULONG64 a5,
        int a6)
{
  signed int v7; // r12d
  int v8; // ebx
  unsigned int v9; // edi
  __int64 v10; // r15
  __int64 v11; // rsi
  const void *v12; // r10
  _BYTE *v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  char *v17; // r14
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  size_t v25; // r8
  ULONG64 v26; // rcx
  __int64 v27; // rdx
  int v28; // ecx
  void *v29; // r9
  ULONG64 v30; // rcx
  __int64 SessionState; // rax
  __int64 v32; // rdx
  int CharacterPlacementW; // eax
  size_t v34; // r12
  __int64 v35; // rcx
  __int64 v36; // r13
  _BYTE **v37; // rdi
  size_t v38; // r8
  const void *v39; // rdx
  char *v40; // rcx
  const void *v41; // rdx
  const void *v42; // rdx
  const void *v43; // rdx
  const void *v44; // rdx
  const void *v45; // rdx
  char *v46; // rcx
  int v47; // [rsp+30h] [rbp-158h]
  int v48; // [rsp+44h] [rbp-144h]
  unsigned int v49; // [rsp+48h] [rbp-140h]
  unsigned int v50; // [rsp+4Ch] [rbp-13Ch]
  unsigned int v51; // [rsp+50h] [rbp-138h]
  unsigned int v52; // [rsp+54h] [rbp-134h]
  unsigned int v53; // [rsp+58h] [rbp-130h]
  unsigned int v54; // [rsp+5Ch] [rbp-12Ch]
  void *v55[2]; // [rsp+70h] [rbp-118h] BYREF
  void *v56[2]; // [rsp+80h] [rbp-108h]
  void *v57[2]; // [rsp+90h] [rbp-F8h]
  void *v58[2]; // [rsp+A0h] [rbp-E8h]
  __int64 v59; // [rsp+B0h] [rbp-D8h]
  __m128i *v60; // [rsp+B8h] [rbp-D0h]
  _QWORD v61[10]; // [rsp+C0h] [rbp-C8h] BYREF
  _BYTE v62[120]; // [rsp+110h] [rbp-78h] BYREF

  v7 = a3;
  v8 = 0;
  v48 = 0;
  v9 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v10 = 0LL;
  v59 = 0LL;
  v11 = 0LL;
  memset_0(v55, 0, 0x40uLL);
  if ( v7 < 0 )
    return 0LL;
  if ( a4 < -1 )
    return 0LL;
  v12 = a2;
  if ( !a2 )
    return 0LL;
  if ( a5 )
  {
    if ( (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = (_BYTE *)a5;
    if ( a5 >= MmUserProbeAddress )
      v13 = (_BYTE *)MmUserProbeAddress;
    *v13 = *v13;
    v13[63] = v13[63];
    *(_OWORD *)v55 = *(_OWORD *)a5;
    *(_OWORD *)v56 = *(_OWORD *)(a5 + 16);
    *(_OWORD *)v57 = *(_OWORD *)(a5 + 32);
    *(_OWORD *)v58 = *(_OWORD *)(a5 + 48);
    v7 = a3;
    v14 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v58, 8));
    if ( a3 > v14 )
      v7 = v14;
  }
  if ( (unsigned int)v7 > 0x9C4000 )
    return 0LL;
  v15 = (unsigned int)(2 * v7);
  v16 = 4 * v7;
  if ( a5 )
  {
    v9 = 64;
    if ( v55[1] )
    {
      v49 = 64;
      v9 = ((v15 + 3) & 0xFFFFFFFC) + 64;
      if ( (((_DWORD)v15 + 3) & 0xFFFFFFFC) >= 0xFFFFFFC0 )
        return 0LL;
    }
    if ( v56[0] )
    {
      v50 = v9;
      v9 += v16;
      if ( v9 < v50 )
        return 0LL;
    }
    v17 = (char *)v56[1];
    if ( v56[1] )
    {
      v51 = v9;
      v9 += v16;
      if ( v9 < v51 )
        return 0LL;
    }
    if ( v57[0] )
    {
      v52 = v9;
      v9 += v16;
      if ( v9 < v52 )
        return 0LL;
    }
    if ( v57[1] )
    {
      v53 = v9;
      v9 += (v7 + 3) & 0xFFFFFFFC;
      if ( v9 < v53 )
        return 0LL;
    }
    if ( v58[0] )
    {
      v54 = v9;
      v9 += v15;
      if ( v9 < v54 )
        return 0LL;
    }
  }
  else
  {
    v17 = (char *)v56[1];
  }
  if ( v9 <= 40960000 - (int)v15 )
  {
    v11 = AllocFreeTmpBuffer(v9 + (unsigned int)v15);
    v15 = (unsigned int)(2 * v7);
    v12 = a2;
  }
  if ( v11 )
  {
    v60 = (__m128i *)(v11 + v9);
    if ( a5 )
    {
      v10 = v11;
      v59 = v11;
      if ( v55[1] )
        v19 = v11 + v49;
      else
        v19 = 0LL;
      *(_QWORD *)(v11 + 8) = v19;
      if ( v56[0] )
        v20 = v11 + v50;
      else
        v20 = 0LL;
      *(_QWORD *)(v11 + 16) = v20;
      if ( v17 )
        v21 = v11 + v51;
      else
        v21 = 0LL;
      *(_QWORD *)(v11 + 24) = v21;
      if ( v57[0] )
        v22 = v11 + v52;
      else
        v22 = 0LL;
      *(_QWORD *)(v11 + 32) = v22;
      if ( v57[1] )
        v23 = v11 + v53;
      else
        v23 = 0LL;
      *(_QWORD *)(v11 + 40) = v23;
      if ( v58[0] )
        v24 = v11 + v54;
      else
        v24 = 0LL;
      *(_QWORD *)(v11 + 48) = v24;
      *(_DWORD *)v11 = v9;
      *(_DWORD *)(v11 + 56) = v7;
    }
    v25 = (unsigned int)v15;
    v26 = (ULONG64)v12 + v15;
    if ( v26 < (unsigned __int64)v12 || v26 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove((void *)(v11 + v9), v12, v25);
    if ( (a6 & 0x200000) != 0 && a5 && v17 )
    {
      v29 = *(void **)(v10 + 24);
      v30 = (ULONG64)&v17[4 * v7];
      if ( v30 < (unsigned __int64)v17 || v30 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v29, v17, (unsigned int)(4 * v7));
    }
    SessionState = W32GetSessionState(v28, v27);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v62,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
    if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v62, v32) )
    {
      UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v61, a1);
      if ( v61[0] )
      {
        CharacterPlacementW = GrepGetCharacterPlacementW((struct UDCOBJ *)v61, v60, v7, a4, (__int128 *)v10, a6, v47);
        v48 = CharacterPlacementW;
      }
      else
      {
        CharacterPlacementW = 0;
      }
      if ( CharacterPlacementW && a5 )
      {
        *(_DWORD *)(a5 + 60) = *(_DWORD *)(v10 + 60);
        v34 = *(int *)(v10 + 56);
        *(_DWORD *)(a5 + 56) = v34;
        v35 = (unsigned int)(2 * v34);
        v36 = (unsigned int)(4 * v34);
        v37 = (_BYTE **)MmUserProbeAddress;
        if ( v55[1] )
        {
          v38 = (unsigned int)v35;
          v39 = *(const void **)(v10 + 8);
          v40 = (char *)v55[1] + v35;
          if ( (unsigned __int64)v40 > MmUserProbeAddress || v40 <= v55[1] )
          {
            *(_BYTE *)MmUserProbeAddress = 0;
            v37 = (_BYTE **)MmUserProbeAddress;
          }
          memmove(v55[1], v39, v38);
        }
        if ( v56[0] )
        {
          v41 = *(const void **)(v10 + 16);
          if ( (char *)v56[0] + v36 > *v37 || (char *)v56[0] + v36 <= v56[0] )
          {
            **v37 = 0;
            v37 = (_BYTE **)MmUserProbeAddress;
          }
          memmove(v56[0], v41, (unsigned int)v36);
        }
        if ( v17 )
        {
          v42 = *(const void **)(v10 + 24);
          if ( &v17[v36] > *v37 || &v17[v36] <= v17 )
          {
            **v37 = 0;
            v37 = (_BYTE **)MmUserProbeAddress;
          }
          memmove(v17, v42, (unsigned int)v36);
        }
        if ( v57[0] )
        {
          v43 = *(const void **)(v10 + 32);
          if ( (char *)v57[0] + v36 > *v37 || (char *)v57[0] + v36 <= v57[0] )
          {
            **v37 = 0;
            v37 = (_BYTE **)MmUserProbeAddress;
          }
          memmove(v57[0], v43, (unsigned int)v36);
        }
        if ( v57[1] )
        {
          v44 = *(const void **)(v10 + 40);
          if ( (char *)v57[1] + v34 > *v37 || (char *)v57[1] + v34 <= v57[1] )
          {
            **v37 = 0;
            v37 = (_BYTE **)MmUserProbeAddress;
          }
          memmove(v57[1], v44, v34);
        }
        if ( v58[0] )
        {
          v45 = *(const void **)(v10 + 48);
          v46 = (char *)v58[0] + (unsigned int)(2 * v34);
          if ( v46 > *v37 || v46 <= v58[0] )
            **v37 = 0;
          memmove(v58[0], v45, (unsigned int)(2 * v34));
        }
        v8 = 1;
      }
      else
      {
        v8 = 1;
      }
      UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v61);
    }
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v62);
    FreeTmpBuffer(v11);
  }
  return v48 & (unsigned int)-(v8 != 0);
}
