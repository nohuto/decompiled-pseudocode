/*
 * XREFs of ?bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1400E01B8
 * Callers:
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1400DF584 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1400DF7B0 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34K.c)
 * Callees:
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14001F7E4 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x14004F094 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400D5534 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400D5640 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400D5F30 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1400DFA4C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1400DFAB0 (-bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1400E0798 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1400E0854 (-vUnlockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1400E08E8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x14016D28C (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1401FA4D8 (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x14020FB00 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x140229BD8 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x14032BD28 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x14032CAD0 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpPIDUnlockSpriteArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x14032D3DC (-vSpPIDUnlockSpriteArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall bSpUpdateSprite(
        struct SPRITE *a1,
        struct OPTAPIDCOBJ *a2,
        struct _POINTL *a3,
        struct tagSIZE *a4,
        struct OPTAPIDCOBJ *a5,
        struct _POINTL *a6,
        unsigned int a7,
        struct _BLENDFUNCTION *a8,
        unsigned int a9,
        struct _RECTL *a10)
{
  struct _BLENDFUNCTION *v11; // r14
  struct _RECTL *v12; // r13
  __int64 *v13; // rsi
  unsigned int v14; // eax
  unsigned int v15; // edi
  int v16; // r12d
  _DWORD *v17; // rsi
  LONG cx; // eax
  LONG cy; // ecx
  LONG v20; // eax
  unsigned int v21; // r15d
  __int64 v22; // rdx
  unsigned int v23; // esi
  struct _POINTL *v25; // rax
  unsigned int v26; // r8d
  int v27; // eax
  BOOL updated; // r14d
  int v29; // ecx
  LONG right; // edx
  LONG top; // r9d
  LONG bottom; // r8d
  LONG v33; // eax
  int v34; // ecx
  bool v35; // zf
  int v36; // ecx
  struct _SPRITESTATE *v37; // rdi
  LONG v38; // eax
  LONG v39; // ecx
  struct _BLENDFUNCTION v40; // [rsp+50h] [rbp-B0h] BYREF
  struct _RECTL v41; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v42; // [rsp+70h] [rbp-90h]
  struct _RECTL v43; // [rsp+80h] [rbp-80h] BYREF
  __int64 v44; // [rsp+90h] [rbp-70h]
  OPTAPIDCOBJ *v45; // [rsp+A0h] [rbp-60h]
  struct tagSIZE *v46; // [rsp+A8h] [rbp-58h]
  struct _POINTL *v47; // [rsp+B0h] [rbp-50h]
  struct _POINTL *v48; // [rsp+B8h] [rbp-48h]
  __int64 v49; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v50; // [rsp+C8h] [rbp-38h] BYREF
  struct _SPRITESTATE *v51; // [rsp+D0h] [rbp-30h]
  struct _SPRITESTATE *v52[24]; // [rsp+E0h] [rbp-20h] BYREF
  struct _RECTL v53; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v54; // [rsp+1B0h] [rbp+B0h]

  v40 = 0;
  v11 = a8;
  v12 = a10;
  v45 = a5;
  v47 = a6;
  v46 = a4;
  v48 = a3;
  *(_QWORD *)&v41.left = a2;
  if ( a1 )
  {
    v13 = (__int64 *)*((_QWORD *)a1 + 2);
    v51 = (struct _SPRITESTATE *)v13;
    v49 = *v13;
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v52, (struct PDEVOBJ *)&v49);
    v14 = a9 & 0xEFFFFFFF;
    v42 = a9 & 0x10000000;
    v53 = 0LL;
    if ( (a9 & 0x10000000) == 0 )
      v14 = a9;
    v15 = v14 & 0xFFDFFFFF;
    v16 = v14 & 0x200000;
    if ( (v14 & 0x200000) == 0 )
      v15 = v14;
    v50 = 0LL;
    SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(v13 + 15));
    v17 = (_DWORD *)*((_QWORD *)a1 + 16);
    if ( v17 && (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v17 - 6)) )
    {
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v17 + 62));
      if ( (*(_DWORD *)a1 & 0x200) != 0 )
      {
        v43.left = 0;
        v43.top = 0;
        v38 = v17[8];
        v39 = v17[9];
        v43.right = v38;
        v43.bottom = v39;
        if ( a10 )
        {
          v53 = *a10;
          ERECTL::operator*=(&v53.left, &v43.left);
        }
        else
        {
          *(_QWORD *)&v53.right = __PAIR64__(v39, v38);
        }
        v12 = &v53;
      }
      if ( OPTAPIDCOBJ::bValid((HDC *)v45) && v46 )
      {
        cx = v17[8];
        if ( v46->cx < cx )
          cx = v46->cx;
        cy = v46->cy;
        LODWORD(v50) = cx;
        v20 = v17[9];
        if ( cy < v20 )
          v20 = cy;
        HIDWORD(v50) = v20;
        v46 = (struct tagSIZE *)&v50;
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v17 + 62));
    }
    SPRITERANGELOCK::vUnlockShared((struct _SPRITESTATE *)((char *)v51 + 120));
    if ( (v15 & 0x20000000) != 0 )
    {
      v15 &= ~0x20000000u;
      *((_DWORD *)a1 + 56) = v15 | ((a9 & 0x10000000) != 0 ? 0x10000000 : 0);
      if ( (v15 & 2) != 0 && a8 )
        *((struct _BLENDFUNCTION *)a1 + 57) = *a8;
      v35 = v42 == 0;
      v21 = a7;
      *((_DWORD *)a1 + 58) = a7;
      if ( !v35 )
      {
        vSpCreateExMirror(**((HDEV **)a1 + 2));
        *(_DWORD *)a1 |= 0x100u;
      }
      v22 = (__int64)v45;
      if ( !*((_QWORD *)v45 + 13) )
      {
        v36 = *((_DWORD *)a1 + 56);
        v23 = 1;
        v22 = *((unsigned int *)a1 + 51);
        v40 = (struct _BLENDFUNCTION)*((_DWORD *)a1 + 50);
        if ( v36 == 3 && !a8->AlphaFormat )
        {
          v36 = 2;
          v40 = *a8;
          v11 = &v40;
          v40.AlphaFormat = 1;
          v22 = a7;
        }
        *((_DWORD *)a1 + 1) = v36;
        *((_DWORD *)a1 + 51) = v22;
        *((struct _BLENDFUNCTION *)a1 + 50) = *v11;
        goto LABEL_22;
      }
    }
    else
    {
      if ( v15 == 0x40000000 )
      {
        v15 = *((_DWORD *)a1 + 56) & 0xEFFFFFFF;
        if ( (*((_DWORD *)a1 + 56) & 0x10000000) == 0 )
          v15 = *((_DWORD *)a1 + 56);
        if ( (*(_DWORD *)a1 & 0x40) != 0 && !v15 )
          v15 = *((_DWORD *)a1 + 1);
        v11 = &v40;
        v21 = *((_DWORD *)a1 + 58);
        v40 = (struct _BLENDFUNCTION)*((_DWORD *)a1 + 57);
      }
      else
      {
        v21 = a7;
      }
      v22 = (__int64)v45;
    }
    v23 = 1;
    if ( (*(_DWORD *)(v49 + 40) & 0x400) != 0 )
    {
LABEL_22:
      SPRITEDDIACCESS::~SPRITEDDIACCESS(v52, v22);
      return v23;
    }
    if ( *(_QWORD *)(*(_QWORD *)&v41.left + 104LL) || v46 || *(_QWORD *)(v22 + 104) || v47 || v21 )
    {
      updated = bSpUpdateShape(
                  a1,
                  v15,
                  *(struct OPTAPIDCOBJ **)&v41.left,
                  (struct Gre::Base::SESSION_GLOBALS **)v22,
                  v21,
                  v11,
                  v47,
                  v46,
                  v12);
      if ( !updated || v16 )
        goto LABEL_35;
      v25 = v48;
      if ( !v48 )
        v25 = (struct _POINTL *)((char *)a1 + 112);
      v26 = 0;
    }
    else
    {
      v25 = v48;
      if ( v15 - 2 <= 1 && v11 && !v48 )
      {
        v27 = bSpUpdateAlpha(a1, v11, 1);
        goto LABEL_33;
      }
      if ( (v15 & 0x7FFFFFFF) != 0 || v11 )
      {
        updated = 1;
        goto LABEL_35;
      }
      v26 = v15 & 0x80000000;
    }
    v27 = bSpUpdatePosition(a1, v25, v26, 0);
LABEL_33:
    updated = v27;
LABEL_35:
    if ( v12 )
    {
      v29 = *((_DWORD *)a1 + 28);
      right = v12->right;
      top = v12->top;
      bottom = v12->bottom;
      v41.left = v29 + v12->left;
      v33 = right + v29;
      v34 = *((_DWORD *)a1 + 29);
      v41.right = v33;
      v41.top = top + v34;
      v41.bottom = bottom + v34;
      ERECTL::operator*=(&v41.left, (int *)a1 + 20);
      if ( v41.left != v41.right && v41.top != v41.bottom )
        v23 = 0;
      if ( !v23 )
      {
        v43 = v41;
        vSpAddAndCompactDirtyRect(a1, &v43);
        v54 = 0LL;
        v53 = 0LL;
        if ( v16 )
          PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v53, v51, &v41);
        if ( !*(_QWORD *)&v53.left && v16 || (vSpRedrawArea(*((struct _SPRITESTATE **)a1 + 2), &v41, 0), v16) )
          PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v53);
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v53);
      }
    }
    else
    {
      v44 = 0LL;
      v43 = 0LL;
      if ( v16 )
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v43, v51, (struct _RECTL *)a1 + 5);
      v37 = *(struct _SPRITESTATE **)&v43.left;
      if ( !*(_QWORD *)&v43.left && v16 || (vSpRedrawSprite(a1), v16) )
      {
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v43);
        v37 = *(struct _SPRITESTATE **)&v43.left;
      }
      if ( v37 && v43.right != (_DWORD)v44 && v43.bottom != HIDWORD(v44) )
        vSpPIDUnlockSpriteArea(v37, (struct _RECTL *)&v43.right);
      if ( (*(_DWORD *)(v49 + 40) & 0x400) == 0 )
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v49,
          (struct _SURFOBJ *)((*(_QWORD *)(v49 + 2544) + 24LL) & -(__int64)(*(_QWORD *)(v49 + 2544) != 0LL)),
          0LL,
          0);
    }
    v23 = updated;
    goto LABEL_22;
  }
  return 0LL;
}
