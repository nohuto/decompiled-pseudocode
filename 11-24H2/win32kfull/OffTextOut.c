/*
 * XREFs of OffTextOut @ 0x1400553EC
 * Callers:
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x140054F70 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 * Callees:
 *     EngTextOut @ 0x140058790 (EngTextOut.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall OffTextOut(
        BOOL (__stdcall *a1)(SURFOBJ *pso, STROBJ *pstro, FONTOBJ *pfo, CLIPOBJ *pco, RECTL *prclExtra, RECTL *prclOpaque, BRUSHOBJ *pboFore, BRUSHOBJ *pboOpaque, POINTL *pptlOrg, MIX mix),
        LONG *a2,
        SURFOBJ *a3,
        int *a4,
        FONTOBJ *pfo,
        CLIPOBJ *pco,
        RECTL *a7,
        RECTL *a8,
        BRUSHOBJ *a9,
        BRUSHOBJ *a10,
        POINTL *a11,
        MIX mix)
{
  RECTL *prclOpaque; // r15
  FONTOBJ *v14; // r11
  LONG v17; // r14d
  LONG v18; // esi
  unsigned int v19; // eax
  int v20; // esi
  unsigned int v21; // r15d
  int v22; // r14d
  int v24; // ecx
  __int64 v25; // rax
  int v26; // r9d
  int v27; // r10d
  int v28; // edx
  _DWORD *v29; // r8
  _DWORD *v30; // rcx
  int v31; // ecx
  _DWORD *v32; // rax
  int v33; // ecx
  __int64 v34; // rax
  int v35; // r8d
  int v36; // r9d
  int v37; // edx
  _DWORD *v38; // r10
  _DWORD *v39; // rcx
  int v40; // ecx
  _DWORD *v41; // rax
  RECTL *prclExtra; // [rsp+60h] [rbp-51h] BYREF
  struct _POINTL v43; // [rsp+68h] [rbp-49h] BYREF
  POINTL *pptlOrg; // [rsp+70h] [rbp-41h]
  BRUSHOBJ *pboOpaque; // [rsp+78h] [rbp-39h]
  BRUSHOBJ *pboFore; // [rsp+80h] [rbp-31h]
  FONTOBJ *v47; // [rsp+88h] [rbp-29h]
  __int128 v48; // [rsp+90h] [rbp-21h] BYREF

  prclOpaque = a8;
  v14 = pfo;
  v17 = *a2;
  v18 = a2[1];
  prclExtra = a7;
  pboFore = a9;
  pboOpaque = a10;
  pptlOrg = a11;
  v47 = pfo;
  v48 = 0LL;
  if ( a8 )
  {
    LODWORD(v48) = v17 + a8->left;
    DWORD2(v48) = v17 + a8->right;
    DWORD1(v48) = v18 + a8->top;
    prclOpaque = (RECTL *)&v48;
    HIDWORD(v48) = v18 + a8->bottom;
  }
  if ( v17 || v18 )
  {
    a4[3] += v17;
    a4[5] += v17;
    a4[4] += v18;
    a4[6] += v18;
    v24 = a4[58];
    v25 = *((_QWORD *)a4 + 8);
    v26 = 16 * v17;
    if ( (v24 & 0x100) == 0 )
      v26 = v17;
    v27 = 16 * v18;
    if ( (v24 & 0x100) == 0 )
      v27 = v18;
    if ( (v24 & 0x1400) != 0 )
    {
      v28 = *a4;
      v29 = (_DWORD *)*((_QWORD *)a4 + 26);
      if ( *a4 )
      {
        v30 = (_DWORD *)(v25 + 20);
        do
        {
          if ( *v29 == a4[59] )
          {
            *(v30 - 1) += v26;
            --v28;
            *v30 += v27;
          }
          v30 += 6;
          ++v29;
        }
        while ( v28 );
      }
    }
    else if ( a4[2] )
    {
      *(_DWORD *)(v25 + 16) += v26;
      *(_DWORD *)(v25 + 20) += v27;
    }
    else
    {
      v31 = *a4;
      if ( *a4 )
      {
        v32 = (_DWORD *)(v25 + 20);
        do
        {
          *(v32 - 1) += v26;
          *v32 += v27;
          v32 += 6;
          --v31;
        }
        while ( v31 );
      }
    }
  }
  if ( pco && (v17 || v18) )
  {
    pco->rclBounds.left += v17;
    pco->rclBounds.right += v17;
    pco->rclBounds.top += v18;
    pco->rclBounds.bottom += v18;
    if ( pco->iDComplexity )
    {
      v43.x = v17;
      v43.y = v18;
      RGNOBJ::bOffset((RGNOBJ *)&pco[2].rclBounds.top, &v43);
      v14 = v47;
    }
  }
  if ( a1 == EngTextOut )
    v19 = EngTextOut(a3, (STROBJ *)a4, v14, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
  else
    v19 = ((__int64 (__fastcall *)(SURFOBJ *, int *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))a1)(
            a3,
            a4,
            v14,
            pco,
            prclExtra,
            prclOpaque,
            pboFore,
            pboOpaque,
            pptlOrg,
            mix);
  v20 = -v18;
  v21 = v19;
  v22 = -v17;
  if ( v22 || v20 )
  {
    a4[3] += v22;
    a4[5] += v22;
    a4[4] += v20;
    a4[6] += v20;
    v33 = a4[58];
    v34 = *((_QWORD *)a4 + 8);
    v35 = 16 * v22;
    if ( (v33 & 0x100) == 0 )
      v35 = v22;
    v36 = 16 * v20;
    if ( (v33 & 0x100) == 0 )
      v36 = v20;
    if ( (v33 & 0x1400) != 0 )
    {
      v37 = *a4;
      v38 = (_DWORD *)*((_QWORD *)a4 + 26);
      if ( *a4 )
      {
        v39 = (_DWORD *)(v34 + 20);
        do
        {
          if ( *v38 == a4[59] )
          {
            *(v39 - 1) += v35;
            --v37;
            *v39 += v36;
          }
          v39 += 6;
          ++v38;
        }
        while ( v37 );
      }
    }
    else if ( a4[2] )
    {
      *(_DWORD *)(v34 + 16) += v35;
      *(_DWORD *)(v34 + 20) += v36;
    }
    else
    {
      v40 = *a4;
      if ( *a4 )
      {
        v41 = (_DWORD *)(v34 + 20);
        do
        {
          *(v41 - 1) += v35;
          *v41 += v36;
          v41 += 6;
          --v40;
        }
        while ( v40 );
      }
    }
  }
  if ( pco && (v22 || v20) )
  {
    pco->rclBounds.left += v22;
    pco->rclBounds.right += v22;
    pco->rclBounds.top += v20;
    pco->rclBounds.bottom += v20;
    if ( pco->iDComplexity )
    {
      prclExtra = (RECTL *)__PAIR64__(v20, v22);
      RGNOBJ::bOffset((RGNOBJ *)&pco[2].rclBounds.top, (const struct _POINTL *)&prclExtra);
    }
  }
  return v21;
}
