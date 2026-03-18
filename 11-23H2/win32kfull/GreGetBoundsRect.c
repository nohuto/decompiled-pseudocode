/*
 * XREFs of GreGetBoundsRect @ 0x1C0009A58
 * Callers:
 *     NtGdiGetBoundsRect @ 0x1C00099F0 (NtGdiGetBoundsRect.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005C068 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0076170 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00BB318 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00BDAA4 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00C2470 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBoundsRect(HDC a1, struct _POINTL *a2, __int16 a3)
{
  __int64 v5; // rdx
  unsigned int v6; // edi
  struct tagRECT *v7; // rbx
  __m128i v8; // xmm1
  __int64 v9; // rcx
  int v10; // eax
  LONG left; // r8d
  LONG right; // r9d
  int v13; // eax
  LONG top; // ecx
  LONG bottom; // r10d
  __int128 v16; // xmm0
  LONG v17; // ecx
  LONG v18; // eax
  LONG v19; // edx
  LONG v20; // r8d
  LONG v21; // eax
  LONG v22; // r9d
  LONG v23; // eax
  LONG v24; // eax
  LONG v25; // eax
  LONG v26; // eax
  LONG v27; // eax
  LONG v28; // edx
  LONG v29; // r8d
  LONG v30; // ecx
  LONG v31; // eax
  LONG v32; // eax
  LONG v33; // r9d
  LONG v34; // eax
  LONG v35; // eax
  LONG v36; // eax
  LONG v37; // eax
  LONG v38; // eax
  _QWORD v40[2]; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v41[2]; // [rsp+30h] [rbp-89h] BYREF
  _BYTE v42[32]; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v43[32]; // [rsp+60h] [rbp-59h] BYREF
  _QWORD v44[2]; // [rsp+80h] [rbp-39h] BYREF
  _BYTE v45[64]; // [rsp+90h] [rbp-29h] BYREF
  struct _POINTL v46[2]; // [rsp+D0h] [rbp+17h] BYREF
  LONG x; // [rsp+E0h] [rbp+27h]
  LONG y; // [rsp+E4h] [rbp+2Bh]
  LONG v49; // [rsp+E8h] [rbp+2Fh]
  LONG v50; // [rsp+ECh] [rbp+33h]

  DCOBJ::DCOBJ((DCOBJ *)v41, a1);
  v5 = v41[0];
  v6 = 3;
  if ( !v41[0] )
  {
    v6 = 0;
    goto LABEL_97;
  }
  v7 = 0LL;
  if ( a3 < 0 )
  {
    v7 = (struct tagRECT *)(v41[0] + 1064LL);
LABEL_5:
    if ( (unsigned int)IsRectEmptyInl(v7) )
    {
LABEL_6:
      v6 = 1;
      goto LABEL_97;
    }
    *(struct tagRECT *)&a2->x = *v7;
    goto LABEL_95;
  }
  if ( (a3 & 0x4000) != 0 )
  {
    v7 = (struct tagRECT *)(v41[0] + 1080LL);
    goto LABEL_5;
  }
  if ( (unsigned int)IsRectEmptyInl((const struct tagRECT *)(v41[0] + 1096LL)) )
    goto LABEL_6;
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v44);
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v43, (struct XDCOBJ *)v41, 0);
  if ( (v43[24] & 1) == 0 )
  {
    v6 = XDCOBJ::bFullScreen((XDCOBJ *)v41) != 0;
    goto LABEL_92;
  }
  v8 = *(__m128i *)((char *)XDCOBJ::prgnEffRao((XDCOBJ *)v41) + 56);
  v7 = (struct tagRECT *)(v41[0] + 1096LL);
  v9 = *(_DWORD *)(v41[0] + 40LL) & 1;
  v10 = *(_DWORD *)(v41[0] + 8 * v9 + 1016);
  left = _mm_cvtsi128_si32(v8) - v10;
  right = _mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) - v10;
  v13 = *(_DWORD *)(v41[0] + 8 * v9 + 1020);
  top = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4)) - v13;
  bottom = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12)) - v13;
  if ( *(_DWORD *)(v41[0] + 1096LL) > left )
    left = v7->left;
  a2->x = left;
  if ( v7->right < right )
    right = v7->right;
  a2[1].x = right;
  if ( v7->top > top )
    top = v7->top;
  a2->y = top;
  if ( v7->bottom < bottom )
    bottom = v7->bottom;
  a2[1].y = bottom;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v40, (struct XDCOBJ *)v41, 0x402u);
  if ( !v40[0] )
    goto LABEL_26;
  if ( (*(_DWORD *)(v40[0] + 32LL) & 1) != 0 )
  {
    if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v40, a2, 2uLL) )
      goto LABEL_92;
    goto LABEL_26;
  }
  v16 = *(_OWORD *)&a2->x;
  x = a2->x;
  y = a2[1].y;
  v49 = a2[1].x;
  v50 = a2->y;
  *(_OWORD *)&v46[0].x = v16;
  if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v40, v46, 4uLL) )
  {
LABEL_26:
    v6 = 0;
    goto LABEL_92;
  }
  v17 = v46[1].x;
  v18 = v46[1].x;
  v19 = v46[0].x;
  v20 = x;
  if ( v46[0].x < v46[1].x )
    v18 = v46[0].x;
  if ( v18 >= x )
  {
    v21 = x;
  }
  else
  {
    v21 = v46[1].x;
    if ( v46[0].x < v46[1].x )
      v21 = v46[0].x;
  }
  v22 = v49;
  if ( v21 >= v49 )
  {
    v24 = v49;
  }
  else
  {
    v23 = v46[1].x;
    if ( v46[0].x < v46[1].x )
      v23 = v46[0].x;
    if ( v23 >= x )
    {
      v24 = x;
    }
    else
    {
      v24 = v46[1].x;
      if ( v46[0].x < v46[1].x )
        v24 = v46[0].x;
    }
  }
  a2->x = v24;
  v25 = v17;
  if ( v19 > v17 )
    v25 = v19;
  if ( v25 <= v20 )
  {
    v26 = v20;
  }
  else
  {
    v26 = v17;
    if ( v19 > v17 )
      v26 = v19;
  }
  if ( v26 <= v22 )
  {
    v17 = v22;
  }
  else
  {
    v27 = v17;
    if ( v19 > v17 )
      v27 = v19;
    if ( v27 <= v20 )
    {
      v17 = v20;
    }
    else if ( v19 > v17 )
    {
      v17 = v19;
    }
  }
  v28 = v46[0].y;
  v29 = y;
  a2[1].x = v17;
  v30 = v46[1].y;
  v31 = v46[1].y;
  if ( v28 < v46[1].y )
    v31 = v28;
  if ( v31 >= v29 )
  {
    v32 = v29;
  }
  else
  {
    v32 = v46[1].y;
    if ( v28 < v46[1].y )
      v32 = v28;
  }
  v33 = v50;
  if ( v32 >= v50 )
  {
    v35 = v50;
  }
  else
  {
    v34 = v46[1].y;
    if ( v28 < v46[1].y )
      v34 = v28;
    if ( v34 >= v29 )
    {
      v35 = v29;
    }
    else
    {
      v35 = v46[1].y;
      if ( v28 < v46[1].y )
        v35 = v28;
    }
  }
  a2->y = v35;
  v36 = v30;
  if ( v28 > v30 )
    v36 = v28;
  if ( v36 <= v29 )
  {
    v37 = v29;
  }
  else
  {
    v37 = v30;
    if ( v28 > v30 )
      v37 = v28;
  }
  if ( v37 <= v33 )
  {
    v30 = v33;
  }
  else
  {
    v38 = v30;
    if ( v28 > v30 )
      v38 = v28;
    if ( v38 <= v29 )
    {
      v30 = v29;
    }
    else if ( v28 > v30 )
    {
      v30 = v28;
    }
  }
  a2[1].y = v30;
LABEL_92:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v43);
  if ( v44[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v44);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v45);
  v5 = v41[0];
  if ( v6 == 3 )
  {
LABEL_95:
    if ( (a3 & 1) != 0 )
    {
      v7->top = 0x7FFFFFFF;
      v7->left = 0x7FFFFFFF;
      v7->bottom = 0x80000000;
      v7->right = 0x80000000;
      v5 = v41[0];
    }
  }
LABEL_97:
  if ( v5 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v41);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v42);
  return v6;
}
