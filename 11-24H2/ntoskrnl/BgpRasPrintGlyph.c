/*
 * XREFs of BgpRasPrintGlyph @ 0x14046EF8C
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x14046ECF8 (BgpTxtDisplayCharacter.c)
 *     BgpTxtDisplayString @ 0x140BB4BB0 (BgpTxtDisplayString.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     RaspRectangleCreate @ 0x14045DF4C (RaspRectangleCreate.c)
 *     BgpFmRoundUp @ 0x14045EB04 (BgpFmRoundUp.c)
 *     RaspFreeMemory @ 0x14045EC60 (RaspFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14045ED38 (BgpFwAllocateMemory.c)
 *     RaspAntiAlias @ 0x14046EAAC (RaspAntiAlias.c)
 *     RaspGetCacheEntry @ 0x14069BED4 (RaspGetCacheEntry.c)
 *     RaspRasterize @ 0x14069CE9C (RaspRasterize.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     BgpGxCopyRectangle @ 0x140BB4620 (BgpGxCopyRectangle.c)
 *     RaspAddCacheEntry @ 0x140BB4E0C (RaspAddCacheEntry.c)
 *     RaspDestroyCachedBitmap @ 0x140BB7CE8 (RaspDestroyCachedBitmap.c)
 */

__int64 __fastcall BgpRasPrintGlyph(
        __int128 *a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4,
        int a5,
        char a6,
        _DWORD *a7,
        __int64 a8,
        __int128 *a9)
{
  __int128 *v10; // r15
  int v11; // edi
  __int64 v12; // r13
  __int128 *v13; // r14
  bool v14; // r12
  int v15; // r8d
  int v16; // r8d
  int v17; // r9d
  _BYTE *v18; // rbx
  BOOL v19; // esi
  __int64 Memory; // rax
  _BYTE *v21; // r8
  __int64 v22; // rdx
  _DWORD *v23; // r10
  __int64 v24; // r9
  int v25; // ecx
  __int64 v26; // rcx
  int v27; // esi
  __int64 v28; // rdx
  int v29; // ecx
  unsigned int *v30; // r9
  int v31; // r11d
  int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // eax
  __int128 v36; // xmm1
  __int128 v37; // xmm1
  int v38; // eax
  unsigned int v41; // [rsp+50h] [rbp-B0h]
  BOOL v42; // [rsp+54h] [rbp-ACh]
  int v43; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v44; // [rsp+5Ch] [rbp-A4h]
  __int64 v45; // [rsp+60h] [rbp-A0h]
  _DWORD *v46; // [rsp+68h] [rbp-98h] BYREF
  int v47; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v48; // [rsp+78h] [rbp-88h] BYREF
  __int64 v49; // [rsp+80h] [rbp-80h] BYREF
  __int128 *v50; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v51[4]; // [rsp+90h] [rbp-70h] BYREF
  __int128 *v52; // [rsp+A0h] [rbp-60h]
  _DWORD *v53; // [rsp+A8h] [rbp-58h]
  __int128 v54; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-40h]
  _BYTE v56[80]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v57; // [rsp+120h] [rbp+20h] BYREF
  __int128 v58; // [rsp+130h] [rbp+30h]
  __int128 v59; // [rsp+140h] [rbp+40h]
  __int128 v60; // [rsp+150h] [rbp+50h]
  __int64 v61; // [rsp+160h] [rbp+60h]
  char v62[8]; // [rsp+1F8h] [rbp+F8h]

  v45 = a2;
  v52 = a1;
  v44 = a4;
  v53 = a7;
  memset_0(&v57, 0, 0x48uLL);
  memset_0(v56, 0, 0x46uLL);
  v43 = 0;
  v10 = &v54;
  *a7 = 0;
  v11 = 0;
  v51[0] = 0;
  v12 = 0LL;
  v48 = 0LL;
  v13 = 0LL;
  v47 = 0;
  v14 = 0;
  v42 = 0;
  v55 = 0LL;
  v62[0] = a6 & 1;
  v49 = 0LL;
  v54 = 0LL;
  if ( a9 )
    v10 = a9;
  v50 = 0LL;
  if ( a3 < 0x20u )
    goto LABEL_46;
  v15 = *(_DWORD *)(a2 + 16);
  v46 = *(_DWORD **)(a2 + 8);
  RaspGetCacheEntry((unsigned int)&RaspBitmapCache, a3, v15, v46[10], (__int64)v46, (__int64)&v48);
  v18 = (_BYTE *)v48;
  if ( v48 )
  {
    v23 = v46;
    v24 = a2;
  }
  else
  {
    v19 = (dword_140EF0270 & 4) != 0;
    v42 = v19;
    if ( (dword_140EF0270 & 4) == 0 && !*(_QWORD *)v10 )
      v14 = (*(_BYTE *)(v45 + 20) & 1) == 0;
    v11 = RaspRasterize(v45, a3, v16, v17, v19, (__int64)&v49, (__int64)&v47, (__int64)&v43, (__int64)v10);
    if ( v11 < 0 )
    {
      v12 = v49;
      goto LABEL_35;
    }
    if ( v14 )
    {
      Memory = BgpFwAllocateMemory(0x46uLL);
      v18 = (_BYTE *)Memory;
      if ( !Memory )
      {
        v12 = v49;
        v11 = -1073741801;
        goto LABEL_40;
      }
      v21 = (_BYTE *)Memory;
    }
    else
    {
      v18 = v56;
      v21 = v56;
    }
    v22 = *((_QWORD *)v10 + 2);
    v23 = v46;
    v24 = v45;
    v42 = v19;
    v25 = v46[10];
    *((_DWORD *)v21 + 10) = *(_DWORD *)(v45 + 16);
    *((_DWORD *)v21 + 11) = v47;
    *((_DWORD *)v21 + 12) = v43;
    *((_WORD *)v21 + 30) = a3;
    v12 = v49;
    *((_DWORD *)v21 + 13) = 4;
    *((_DWORD *)v21 + 14) = 4;
    *((_DWORD *)v21 + 9) = v25;
    *((_QWORD *)v21 + 3) = v23;
    *((_QWORD *)v21 + 2) = v12;
    *(_QWORD *)(v21 + 62) = v22;
  }
  v26 = *((__int16 *)v23 + 43);
  v27 = *((_DWORD *)v18 + 11);
  v46 = (_DWORD *)*((_QWORD *)v18 + 2);
  v28 = *(_QWORD *)(v24 + 8);
  v43 = *v46 / *((_DWORD *)v18 + 14);
  v29 = BgpFmRoundUp(
          ((*(unsigned int *)(v24 + 16) * v26 * *(unsigned int *)(v28 + 96)) << 6)
        / (72LL
         * *(unsigned __int16 *)(v28 + 120)));
  v32 = *((_DWORD *)v18 + 12);
  v33 = a5 + v29;
  if ( v32 < 0 || v32 <= v33 )
  {
    v34 = v33 - v32;
    v41 = v34;
  }
  else
  {
    v41 = 0;
    DbgPrintEx(0x65u, 0, "BGFX internal font error char %x!\n", *((unsigned __int16 *)v18 + 30));
    v30 = (unsigned int *)v45;
    v34 = 0;
    v31 = v43;
  }
  if ( *(_DWORD *)v52 < v31 + v34 || *((_DWORD *)v52 + 1) < v27 + v44 )
  {
    v11 = -2147483643;
    goto LABEL_39;
  }
  if ( v62[0] )
  {
    v35 = v30[5];
    v13 = &v57;
    v36 = v52[1];
    v57 = *v52;
    v58 = v36;
    v37 = v52[3];
    v59 = v52[2];
    v61 = *((_QWORD *)v52 + 8);
    v60 = v37;
    if ( (v35 & 1) != 0 )
      v27 = DWORD1(v57);
    else
      DWORD1(v57) = v27;
    LODWORD(v57) = v31;
    *((_QWORD *)&v58 + 1) += v34 * v27 * (DWORD2(v57) >> 3);
    goto LABEL_30;
  }
  v51[1] = v31;
  v51[0] = v27;
  v51[2] = v27;
  v38 = RaspRectangleCreate(v51, 0x20u, &v50, (__int64)v10);
  v13 = v50;
  v11 = v38;
  if ( v38 >= 0 )
  {
    v30 = (unsigned int *)v45;
LABEL_30:
    RaspAntiAlias((__int64)v46, (__int64)v13, *((_DWORD *)v18 + 13), *((_DWORD *)v18 + 14), v30);
    if ( !v62[0] )
    {
      v46 = 0LL;
      v48 = __PAIR64__(v41, v44);
      BgpGxCopyRectangle(v52, v13, &v48, &v46);
    }
    *v53 = v27;
    if ( v14 )
      RaspAddCacheEntry(&RaspBitmapCache, v18);
  }
  v19 = v42;
LABEL_35:
  if ( v11 >= 0 )
  {
    if ( v14 )
      goto LABEL_48;
LABEL_43:
    if ( v19 )
      goto LABEL_44;
    goto LABEL_46;
  }
LABEL_39:
  if ( !v14 )
  {
    v19 = v42;
    goto LABEL_43;
  }
LABEL_40:
  if ( v18 )
  {
    RaspDestroyCachedBitmap(v18);
LABEL_44:
    if ( v11 >= 0 || v18 )
      goto LABEL_48;
  }
LABEL_46:
  if ( v12 )
    RaspFreeMemory(v12, v10);
LABEL_48:
  if ( !v62[0] && v13 )
    RaspFreeMemory((__int64)v13, v10);
  *((_QWORD *)v10 + 2) = 0LL;
  return (unsigned int)v11;
}
