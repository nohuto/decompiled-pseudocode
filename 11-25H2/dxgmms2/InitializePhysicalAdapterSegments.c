/*
 * XREFs of InitializePhysicalAdapterSegments @ 0x14010DE00
 * Callers:
 *     CreatePhysicalAdapterSegments @ 0x14009B368 (CreatePhysicalAdapterSegments.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     memset @ 0x140056780 (memset.c)
 *     ??0VIDMM_SEGMENT@@QEAA@PEAUVIDMM_PHYSICAL_ADAPTER@@GGPEBUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z @ 0x14009BE84 (--0VIDMM_SEGMENT@@QEAA@PEAUVIDMM_PHYSICAL_ADAPTER@@GGPEBUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z.c)
 *     ?SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z @ 0x14009D560 (-SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z.c)
 */

__int64 __fastcall InitializePhysicalAdapterSegments(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        __int16 a7)
{
  __int16 v7; // di
  __int64 v8; // rbx
  unsigned __int8 v9; // r12
  char v10; // si
  unsigned __int16 v12; // r15
  char v13; // al
  unsigned int v14; // eax
  int v15; // ebx
  bool v16; // zf
  char v17; // al
  unsigned int v18; // ebx
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rax
  __int128 v22; // xmm1
  __m128i v23; // xmm2
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  unsigned int v27; // r12d
  char v28; // al
  __int64 v29; // rdx
  __int64 result; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r10
  unsigned __int64 *v34; // r8
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned int v37; // eax
  unsigned int i; // r13d
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rdi
  __int64 v42; // rcx
  __int64 v43; // rsi
  unsigned __int64 v44; // rax
  __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  int v47; // eax
  unsigned int v48; // r12d
  int v49; // eax
  char v50; // cl
  int v51; // eax
  __int64 v52; // rcx
  char v53; // r11
  char v54; // si
  char v55; // [rsp+50h] [rbp-B0h]
  char v56; // [rsp+51h] [rbp-AFh]
  char v57; // [rsp+52h] [rbp-AEh]
  char v58; // [rsp+53h] [rbp-ADh]
  char v59; // [rsp+54h] [rbp-ACh]
  unsigned __int8 v60; // [rsp+58h] [rbp-A8h]
  char v61; // [rsp+5Ch] [rbp-A4h]
  char v62; // [rsp+60h] [rbp-A0h]
  char v63; // [rsp+64h] [rbp-9Ch]
  __int64 v64; // [rsp+68h] [rbp-98h]
  __int64 v65; // [rsp+70h] [rbp-90h]
  _QWORD v67[2]; // [rsp+80h] [rbp-80h]
  _DWORD *v68; // [rsp+90h] [rbp-70h]
  _OWORD v69[7]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v70; // [rsp+110h] [rbp+10h] BYREF
  __int64 v71; // [rsp+120h] [rbp+20h]

  v7 = a7;
  v8 = a3;
  v9 = 0;
  v68 = a4;
  v10 = 0;
  v67[0] = a3;
  v56 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v12 = 0;
  v57 = 0;
  v63 = 0;
  v62 = 0;
  v58 = 0;
  v55 = 0;
  v65 = 0LL;
  v64 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  *(_WORD *)(a2 + 68) = a7;
  while ( 1 )
  {
    if ( v12 >= a6 )
    {
      v32 = 0LL;
      v33 = 2LL;
      do
      {
        v34 = (unsigned __int64 *)((char *)&v70 + v32 * 8);
        v35 = *(_QWORD *)((char *)&v70 + v32 * 8 + a2 - (_QWORD)&v70);
        if ( v35 && *v34 <= v35 )
          v36 = v35 - *v34;
        else
          v36 = 0LL;
        v67[v32++] = v36;
        --v33;
      }
      while ( v33 );
      v37 = a6;
      for ( i = 0; ; ++i )
      {
        if ( i >= v37 )
        {
          *(_BYTE *)(a1 + 7017) |= v56;
          *(_BYTE *)(a1 + 7018) |= v59;
          v53 = *(_BYTE *)(a2 + 477) | (16 * (v61 & 1));
          *(_BYTE *)(a2 + 476) |= (v57 & 1) << 6;
          *(_BYTE *)(a2 + 478) |= 2 * (v62 & 1);
          v54 = (v58 << 7) | v53 & 0xDF ^ (v53 | (32 * v63)) & 0x20;
          *(_BYTE *)(a2 + 477) = v54 & 0xBF ^ (v54 | (v55 << 6)) & 0x40;
          *(_QWORD *)(a1 + 44424) += v64;
          *(_QWORD *)(a1 + 7072) += v65;
          return 0LL;
        }
        v39 = *(_QWORD *)(a2 + 1648);
        v40 = *(_QWORD *)(v39 + 8LL * i);
        v41 = *(int *)(v40 + 516);
        if ( (_DWORD)v41 == 2 || (v42 = *(_QWORD *)(a2 + 8 * v41)) == 0 )
        {
          v42 = *(_QWORD *)(v40 + 88);
          v43 = *(_QWORD *)(v39 + 8LL * i);
        }
        else
        {
          v43 = *(_QWORD *)(v39 + 8LL * i);
          if ( (*(_DWORD *)(v40 + 104) & 0x1000) == 0 )
          {
            v44 = v67[v41];
            v45 = *(_QWORD *)(v40 + 80);
            v46 = *(_QWORD *)(v40 + 88) - v45;
            if ( v46 >= v44 )
              v46 = v67[v41];
            v67[v41] = v44 - v46;
            v42 = v45 + v46;
          }
        }
        *(_QWORD *)(v40 + 72) = v42;
        v47 = (*(__int64 (__fastcall **)(__int64, void (__fastcall *)(VIDMM_PHYSICAL_ADAPTER *, struct VIDMM_PHYSICAL_ALLOC *), _QWORD, __int64))(*(_QWORD *)v40 + 8LL))(
                v40,
                NotifyAllocationReclaimed,
                0LL,
                1LL);
        v48 = v47;
        if ( v47 < 0 )
        {
          _InterlockedAdd(&dword_140081740, 1u);
          WdLogSingleEntry1(6LL, v47);
          WdLogGlobalForLineNumber = 537;
          DxgkLogInternalTriageEvent(v52, 262145LL);
          return v48;
        }
        if ( (_DWORD)v41 )
        {
          if ( (_DWORD)v41 == 1 )
          {
            v55 = 1;
          }
          else if ( (_DWORD)v41 == 2 )
          {
            goto LABEL_76;
          }
          if ( (*(_DWORD *)(v43 + 104) & 0x1001) == 0 )
            goto LABEL_75;
        }
        else
        {
          v49 = *(_DWORD *)(v43 + 104);
          v50 = v62;
          if ( (v49 & 4) == 0 )
            v50 = 1;
          v62 = v50;
          if ( (v49 & 0x1001) == 0 )
          {
            v58 = 1;
LABEL_75:
            *(_QWORD *)(a2 + 24 * v41 + 544) += *(_QWORD *)(v40 + 72) - *(_QWORD *)(v40 + 96);
          }
        }
LABEL_76:
        v51 = *(_DWORD *)(v43 + 104);
        if ( (v51 & 0x1001) != 0 )
        {
          *(_BYTE *)(a2 + 478) |= 1u;
          *(_BYTE *)(a2 + 24 * (v41 + 23)) |= 1u;
        }
        else if ( (v51 & 0x40) == 0 )
        {
          v64 += *(_QWORD *)(v40 + 72);
        }
        v37 = a6;
      }
    }
    memset(v69, 0, 0x68uLL);
    if ( v12 != v7 )
      break;
    v13 = *(_BYTE *)(a2 + 476);
    if ( (v13 & 1) != 0 )
    {
      v14 = *v68 & 0x10 | 0x1180;
    }
    else if ( (v13 & 0x10) != 0 )
    {
      v14 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 2992LL) + 344LL * a5 + 16) & 0x100 | 0x11800u) >> 4;
    }
    else
    {
      v14 = 4496;
    }
    v15 = v14 ^ ((unsigned __int16)v14 ^ (unsigned __int16)(v9 << 10)) & 0x400;
    *(_QWORD *)&v69[1] = qword_1400812D8;
    v16 = (v14 & 0x10) == 0;
    v17 = v59;
    if ( v16 )
      v17 = 1;
    v59 = v17;
    if ( *((_QWORD *)&v70 + 1) )
      v18 = v15 | 0x100004;
    else
      v18 = v15 | 0x80004;
    LODWORD(v69[0]) = v18;
    v19 = operator new(552LL, 0x36306956u, 64LL);
    if ( v19 )
    {
      VIDMM_SEGMENT::VIDMM_SEGMENT(
        (VIDMM_SEGMENT *)v19,
        (struct VIDMM_PHYSICAL_ADAPTER *)a2,
        a5,
        v12,
        (const struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)v69);
      *(_QWORD *)v19 = &VIDMM_SYSMEM_SEGMENT::`vftable';
    }
    else
    {
      v19 = 0LL;
    }
LABEL_28:
    v20 = v12;
    if ( !v19 )
      goto LABEL_44;
    v27 = DWORD1(v69[5]);
LABEL_38:
    if ( (v18 & 0x1000) == 0 )
    {
      v29 = *(int *)(v19 + 516);
      *((_QWORD *)&v70 + v29) += *(_QWORD *)(v19 + 80);
      if ( (v18 & 0x10000) != 0 && ((_DWORD)v29 == 2 || !*(_QWORD *)(a2 + 8 * v29)) )
      {
        result = VIDMM_SEGMENT::SetVprRange(
                   (VIDMM_SEGMENT *)v19,
                   *(unsigned __int64 *)&v69[4],
                   *((unsigned __int64 *)&v69[4] + 1),
                   v69[5],
                   v27,
                   DWORD2(v69[5]));
        if ( (int)result < 0 )
          return result;
      }
    }
    v9 = v60;
    ++v12;
    v8 = v67[0];
    *(_QWORD *)(*(_QWORD *)(a2 + 1648) + 8 * v20) = v19;
    v10 = v63;
    v7 = a7;
  }
  v20 = v12;
  v21 = 104LL * v12;
  v22 = *(_OWORD *)(v21 + v8 + 32);
  v23 = *(__m128i *)(v21 + v8);
  v69[1] = *(_OWORD *)(v21 + v8 + 16);
  v24 = *(_OWORD *)(v21 + v8 + 48);
  v69[2] = v22;
  v25 = *(_OWORD *)(v21 + v8 + 64);
  v69[3] = v24;
  v26 = *(_OWORD *)(v21 + v8 + 80);
  v69[4] = v25;
  *(_QWORD *)&v25 = *(_QWORD *)(v21 + v8 + 96);
  v18 = _mm_cvtsi128_si32(v23);
  v69[0] = v23;
  v69[5] = v26;
  *(_QWORD *)&v69[6] = v25;
  if ( ((v18 >> 10) & 1) != 0 )
    v65 += *(_QWORD *)&v69[1];
  if ( (v18 & 1) != 0 )
  {
    if ( (v18 & 0x10) != 0 )
      v56 = 1;
    else
      v59 = 1;
    if ( ((v18 >> 10) & 1) != 0 )
      v9 = 1;
    v60 = v9;
    v19 = operator new(584LL, 0x36306956u, 64LL);
    if ( v19 )
    {
      VIDMM_SEGMENT::VIDMM_SEGMENT(
        (VIDMM_SEGMENT *)v19,
        (struct VIDMM_PHYSICAL_ADAPTER *)a2,
        a5,
        v12,
        (const struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)v69);
      *(_QWORD *)(v19 + 552) = 0LL;
      *(_QWORD *)v19 = &VIDMM_APERTURE_SEGMENT::`vftable';
      *(_QWORD *)(v19 + 560) = 0LL;
      *(_QWORD *)(v19 + 576) = 0LL;
      *(_QWORD *)(v19 + 568) = 0LL;
    }
    else
    {
      v19 = 0LL;
    }
    goto LABEL_28;
  }
  v27 = DWORD1(v69[5]);
  v57 = 1;
  if ( (v18 & 0x10000) != 0 )
  {
    if ( !DWORD1(v69[5]) )
      v10 = 1;
    v63 = v10;
  }
  v28 = v61;
  if ( (v18 & 0x800) != 0 )
    v28 = 1;
  v61 = v28;
  v19 = operator new(568LL, 0x36306956u, 64LL);
  if ( v19 )
  {
    VIDMM_SEGMENT::VIDMM_SEGMENT(
      (VIDMM_SEGMENT *)v19,
      (struct VIDMM_PHYSICAL_ADAPTER *)a2,
      a5,
      v12,
      (const struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)v69);
    *(_QWORD *)(v19 + 552) = 0LL;
    *(_DWORD *)(v19 + 560) = 0;
    *(_QWORD *)v19 = &VIDMM_MEMORY_SEGMENT::`vftable';
    goto LABEL_38;
  }
LABEL_44:
  if ( (v18 & 0x1000) != 0 )
  {
    _InterlockedAdd(dword_140081744, 1u);
    WdLogSingleEntry2(6LL, a5, v20);
    WdLogGlobalForLineNumber = 415;
  }
  else if ( (v18 & 1) != 0 )
  {
    _InterlockedAdd(&dword_14008173C, 1u);
    WdLogSingleEntry2(6LL, a5, v20);
    WdLogGlobalForLineNumber = 422;
  }
  else
  {
    _InterlockedAdd(&dword_140081718, 1u);
    WdLogSingleEntry2(6LL, a5, v20);
    WdLogGlobalForLineNumber = 429;
  }
  DxgkLogInternalTriageEvent(v31, 262145LL);
  return 3221225495LL;
}
