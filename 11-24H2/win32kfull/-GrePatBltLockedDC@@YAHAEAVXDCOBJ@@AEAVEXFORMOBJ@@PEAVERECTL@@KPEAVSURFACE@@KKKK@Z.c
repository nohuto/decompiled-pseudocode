/*
 * XREFs of ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x140017510
 * Callers:
 *     ?GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x140016D8C (-GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     GrePatBlt @ 0x1400C4060 (GrePatBlt.c)
 *     ?GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z @ 0x1400C4DA4 (-GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x140172FB0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x140016CFC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     EngBitBlt @ 0x1400179A0 (EngBitBlt.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x140018520 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400C71EC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrePatBltLockedDC(
        struct XDCOBJ *this,
        struct EXFORMOBJ *a2,
        RECTL *a3,
        ROP4 a4,
        struct SURFACE *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  ROP4 rop4; // esi
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 left; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 right; // r10
  __int64 v20; // rcx
  __int64 top; // rbp
  __int64 bottom; // r11
  LONG v23; // r9d
  int v24; // ecx
  LONG v25; // r8d
  int v26; // ecx
  unsigned __int64 v27; // rdx
  _DWORD *v28; // rax
  unsigned int *v29; // rcx
  BRUSHOBJ *pbo; // r13
  unsigned int v31; // ebx
  unsigned int v32; // edi
  unsigned int v33; // esi
  unsigned int v34; // ebp
  __int64 v35; // r9
  int (*v36)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  POINTL *pptlBrush; // rdx
  SURFOBJ *v38; // r10
  _DWORD *v41; // rdi
  struct REGION *v42; // rax
  int v43; // eax
  ULONG v44; // ecx
  XLATEOBJ *pxlo; // [rsp+20h] [rbp-88h]
  RECTL v46; // [rsp+60h] [rbp-48h] BYREF
  CLIPOBJ *pco; // [rsp+B8h] [rbp+10h]

  rop4 = a4;
  pco = 0LL;
  v12 = 1;
  if ( ((*((_DWORD *)a5 + 29) & 8) != 0 || *((_QWORD *)a5 + 28)) && _bittest16((const signed __int16 *)a5 + 51, 9u) )
    goto LABEL_42;
  v13 = *((_DWORD *)a5 + 28);
  if ( (v13 & 0x800) != 0 )
  {
    v14 = UserSurfaceAccessCheck(*((_QWORD *)a5 + 81));
  }
  else
  {
    if ( (v13 & 0x10000000) == 0 )
      goto LABEL_7;
    v14 = UserScreenAccessCheck(this, a2);
  }
  if ( !v14 )
  {
LABEL_42:
    v44 = 5;
LABEL_44:
    EngSetLastError(v44);
    return 0LL;
  }
LABEL_7:
  v15 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0x10000) != 0 )
  {
    v44 = 87;
    goto LABEL_44;
  }
  left = a3->left;
  v17 = *(_DWORD *)(v15 + 40) & 1LL;
  v18 = *(int *)(v15 + 8 * v17 + 1016);
  if ( (unsigned __int64)(v18 + left + 0x80000000LL) <= 0xFFFFFFFF )
  {
    right = a3->right;
    if ( (unsigned __int64)(v18 + right + 0x80000000LL) <= 0xFFFFFFFF )
    {
      v20 = *(int *)(v15 + 8 * v17 + 1020);
      top = a3->top;
      if ( (unsigned __int64)(v20 + top + 0x80000000LL) <= 0xFFFFFFFF )
      {
        bottom = a3->bottom;
        if ( (unsigned __int64)(v20 + bottom + 0x80000000LL) <= 0xFFFFFFFF )
        {
          v23 = left + v18;
          a3->left = v23;
          a3->right = right + *(_DWORD *)(v15 + 8 * v17 + 1016);
          a3->top = top + *(_DWORD *)(v15 + 8 * v17 + 1020);
          v24 = *(_DWORD *)(v15 + 8 * v17 + 1020);
          v25 = a3->right;
          a3->bottom = bottom + v24;
          if ( v23 < v25 )
          {
            v26 = a3->top;
            v27 = (unsigned int)a3->bottom;
            if ( v26 < (int)v27 )
            {
              if ( (v28 = *(_DWORD **)this, v23 >= *(_DWORD *)(*(_QWORD *)this + 1000LL))
                && v25 <= v28[252]
                && v26 >= v28[251]
                && (int)v27 <= v28[253]
                || (v41 = v28 + 442,
                    pco = (CLIPOBJ *)(v28 + 442),
                    v42 = XDCOBJ::prgnEffRao((DC **)this),
                    XCLIPOBJ::vSetup((XCLIPOBJ *)v41, v42, (const struct ERECTL *)a3, 2),
                    *a3 = *(RECTL *)(v41 + 1),
                    a3->left != a3->right)
                && a3->top != a3->bottom )
              {
                if ( (((unsigned __int8)rop4 ^ (unsigned __int8)(16 * rop4)) & 0xF0) != 0 )
                {
                  v29 = *(unsigned int **)(*(_QWORD *)this + 976LL);
                  pbo = (BRUSHOBJ *)(*(_QWORD *)this + 1200LL);
                  v27 = v29[38];
                  if ( (v27 & 1) != 0
                    || (*(_DWORD *)(*(_QWORD *)this + 316LL) & 1) != 0
                    || (v43 = *(_DWORD *)(*(_QWORD *)this + 1320LL), (v43 & 1) != 0)
                    && *(_DWORD *)(*(_QWORD *)this + 1248LL) != a6
                    || (v43 & 2) != 0 && *(_DWORD *)(*(_QWORD *)this + 1252LL) != a7 )
                  {
                    v31 = v29[46];
                    v32 = v29[44];
                    v33 = v29[47];
                    v34 = v29[45];
                    v29[38] = v27 & 0xFFFFFFFE;
                    *(_DWORD *)(*(_QWORD *)this + 316LL) &= ~1u;
                    pxlo = (XLATEOBJ *)*((_QWORD *)a5 + 16);
                    v35 = *(_QWORD *)(*(_QWORD *)this + 88LL);
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 184LL) = a6;
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 176LL) = a7;
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 188LL) = a8;
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 180LL) = a9;
                    EBRUSHOBJ::vInitBrush(pbo, *(_QWORD *)this, *(_QWORD *)(*(_QWORD *)this + 136LL), v35, pxlo, a5, 1);
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 184LL) = v31;
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 176LL) = v32;
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 188LL) = v33;
                    rop4 = a4;
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 180LL) = v34;
                  }
                }
                else
                {
                  pbo = 0LL;
                }
                if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0xE0) != 0 && (!pbo || (pbo[5].iSolidColor & 0x100) == 0) )
                {
                  v46 = *a3;
                  XDCOBJ::vAccumulateTight(this, (struct ECLIPOBJ *)v27, (struct ERECTL *)&v46);
                }
                ++*((_DWORD *)a5 + 23);
                v36 = SURFACE::pfnBitBlt(a5);
                if ( v36 == EngBitBlt )
                  return EngBitBlt(v38, 0LL, 0LL, pco, 0LL, a3, 0LL, 0LL, pbo, pptlBrush, rop4);
                else
                  return ((unsigned int (__fastcall *)(SURFOBJ *, _QWORD, _QWORD, CLIPOBJ *, _QWORD, RECTL *, _QWORD, _QWORD, BRUSHOBJ *, POINTL *, ROP4))v36)(
                           v38,
                           0LL,
                           0LL,
                           pco,
                           0LL,
                           a3,
                           0LL,
                           0LL,
                           pbo,
                           pptlBrush,
                           rop4);
              }
            }
          }
        }
      }
    }
  }
  return v12;
}
