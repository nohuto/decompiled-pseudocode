/*
 * XREFs of ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1400DF03C
 * Callers:
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1400DFAB0 (-bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x14032AD98 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x14032AF64 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ??1MULTISURF@@QEAA@XZ @ 0x1400546F0 (--1MULTISURF@@QEAA@XZ.c)
 *     ?vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1400D5DB8 (-vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1400D5E3C (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1400DDCD0 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1400E0798 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1400E0854 (-vUnlockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x14015763C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?OffCopyBitsInternal@@YAHP6AHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z40401234@Z @ 0x140171568 (-OffCopyBitsInternal@@YAHP6AHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1401F7F78 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1401FA614 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z @ 0x140331B4C (-bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall bSpCreateShape(
        struct SPRITE *a1,
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct PALETTE *a6,
        unsigned int a7,
        unsigned int a8,
        struct _RECTL *a9)
{
  __int64 v9; // r15
  unsigned int v11; // edi
  int v12; // r14d
  int v13; // r12d
  SURFOBJ *Surface; // rcx
  __int64 v15; // r14
  LONG left; // r8d
  int v17; // eax
  int v18; // edx
  LONG v19; // edi
  LONG top; // r10d
  LONG right; // r12d
  LONG bottom; // r11d
  int v23; // eax
  int v24; // ecx
  int v25; // r9d
  LONG v26; // edx
  LONG v27; // r8d
  int v28; // ecx
  __int64 v30; // rax
  struct _SURFOBJ *v31; // r13
  __int64 v32; // rdi
  HDEV v33; // rbx
  int (*v34)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *); // r12
  int v35; // eax
  struct _SURFOBJ *v36; // rcx
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  int v39; // [rsp+20h] [rbp-E0h]
  unsigned int v40; // [rsp+50h] [rbp-B0h]
  struct _POINTL v41; // [rsp+58h] [rbp-A8h] BYREF
  struct _SURFOBJ *v42[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v43[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v44; // [rsp+80h] [rbp-80h] BYREF
  struct _XLATEOBJ *v45; // [rsp+88h] [rbp-78h]
  struct _RECTL v46; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v47[88]; // [rsp+A0h] [rbp-60h] BYREF
  struct _SURFOBJ *v48; // [rsp+F8h] [rbp-8h]
  struct _POINTL *v49; // [rsp+100h] [rbp+0h]
  struct _RECTL v50; // [rsp+110h] [rbp+10h] BYREF

  v9 = *((_QWORD *)a1 + 2);
  v11 = a7;
  v45 = a4;
  v42[0] = a3;
  v41 = (struct _POINTL)a2;
  v43[0] = a9;
  v40 = 0;
  SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v9 + 120));
  v44 = *((_QWORD *)a1 + 18);
  if ( a6 )
    INC_SHARE_REF_CNT(a6);
  XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v44);
  *((_QWORD *)a1 + 18) = a6;
  v12 = a5->right - a5->left;
  v13 = a5->bottom - a5->top;
  if ( !a7 )
    v11 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) + 72LL);
  Surface = (SURFOBJ *)*((_QWORD *)a1 + 16);
  if ( Surface
    && (!Surface->iType && (Surface->fjBitmap & 0x20) == 0 || !a8)
    && Surface->iBitmapFormat == v11
    && Surface->sizlBitmap.cx >= v12
    && Surface->sizlBitmap.cy >= v13 )
  {
    goto LABEL_11;
  }
  if ( (*(_DWORD *)a1 & 0x40) != 0 )
  {
    if ( Surface->iBitmapFormat != v11 )
    {
      EngUnlockSurface(Surface);
      v30 = *((_QWORD *)a1 + 1);
      *((_QWORD *)a1 + 16) = 0LL;
      *(_DWORD *)a1 &= ~0x40u;
      Surface = 0LL;
      *((_QWORD *)a1 + 30) = 0LL;
      if ( v30 )
        *(_DWORD *)(v30 + 16) &= ~0x40u;
    }
  }
  else
  {
    vSpDeleteSurface(Surface);
    Surface = 0LL;
  }
  if ( (*(_DWORD *)a1 & 0x40) != 0 || !*((_QWORD *)a1 + 30) || !a8 )
  {
    if ( Surface )
      goto LABEL_47;
LABEL_46:
    Surface = psoSpCreateSurface(*((struct _SPRITESTATE **)a1 + 2), v11, v12, v13, v39);
    goto LABEL_47;
  }
  Surface = EngLockSurface(*((HSURF *)a1 + 30));
  if ( !Surface )
    goto LABEL_46;
  *(_DWORD *)a1 |= 0x40u;
LABEL_47:
  *((_QWORD *)a1 + 16) = Surface;
LABEL_11:
  SPRITERANGELOCK::vUnlockExclusive((SPRITERANGELOCK *)(v9 + 120));
  SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(v9 + 120));
  v15 = *((_QWORD *)a1 + 16);
  if ( !v15 )
    goto LABEL_32;
  left = a5->left;
  v40 = 1;
  *((_DWORD *)a1 + 34) = -a5->left;
  v17 = -a5->top;
  *((_DWORD *)a1 + 38) = v11;
  *((_DWORD *)a1 + 35) = v17;
  if ( a6 )
    v18 = **((_DWORD **)a6 + 14) | *(_DWORD *)(*((_QWORD *)a6 + 14) + 8LL);
  else
    v18 = 0;
  *((_DWORD *)a1 + 39) = v18;
  v19 = a5->left;
  top = a5->top;
  right = a5->right;
  bottom = a5->bottom;
  v50.left = a5->left;
  v50.top = top;
  v50.right = right;
  v50.bottom = bottom;
  if ( v43[0] )
  {
    v23 = *((_DWORD *)a1 + 35);
    v24 = left + *(_DWORD *)v43[0];
    v25 = left + *(_DWORD *)(v43[0] + 8LL);
    v26 = *(_DWORD *)(v43[0] + 4LL) - v23;
    v27 = *(_DWORD *)(v43[0] + 12LL) - v23;
    if ( v24 > v19 )
      v19 = v24;
    v50.left = v19;
    if ( v26 > top )
      top = v26;
    if ( v25 < right )
      right = v25;
    v50.right = right;
    if ( v27 < bottom )
      bottom = v27;
    v50.bottom = bottom;
    if ( right < v19 )
      goto LABEL_32;
    if ( bottom < top )
      top = bottom;
    v50.top = top;
  }
  if ( top == bottom || v19 == right )
  {
LABEL_32:
    SPRITERANGELOCK::vUnlockShared((SPRITERANGELOCK *)(v9 + 120));
    return v40;
  }
  v28 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 0x40) != 0 )
  {
    if ( (v28 & 0x200) == 0 || (v31 = v42[0], *(HSURF *)(v15 + 320) != v42[0]->hsurf) )
    {
      *(_DWORD *)a1 = v28 | 0x80;
      goto LABEL_32;
    }
  }
  else
  {
    v31 = v42[0];
  }
  v46 = v50;
  ERECTL::bOffsetAdd((ERECTL *)&v46, *(const struct _POINTL **)&v41, 0);
  MULTISURF::MULTISURF((MULTISURF *)v47, v31, &v46);
  v32 = 0LL;
  v42[0] = 0LL;
  v43[0] = 0LL;
  if ( !_bittest((const signed __int32 *)(v15 + 88), 0xAu) )
  {
    if ( _bittest((const signed __int32 *)&v31[1].hsurf, 0xAu) )
      v34 = (int (*)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))*((_QWORD *)v31->hdev + 354);
    else
      v34 = EngCopyBits;
    goto LABEL_58;
  }
  v33 = *(HDEV *)(v15 + 24);
  if ( (unsigned int)MULTISURF::bLoadSource((MULTISURF *)v47, v33) )
  {
    v34 = (int (*)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))*((_QWORD *)v33 + 354);
LABEL_58:
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)v42, v48) && SURFREFVIEW::bMap((SURFREFVIEW *)v43, (struct _SURFOBJ *)v15) )
    {
      v35 = *(_DWORD *)(v15 + 88);
      if ( (v35 & 0x80004000) != 0 && (v35 & 0x200) == 0 )
      {
        v32 = v15 - 24;
        GreLockDisplayDevice(*(_QWORD *)(v15 - 24 + 48));
      }
      v36 = v48;
      p_pvScan0 = 0LL;
      if ( v48 )
      {
        hsurf = (int)v48[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          p_pvScan0 = &v48[-1].pvScan0;
          GreLockDisplayDevice(v48->hdev);
          v36 = v48;
        }
      }
      v41 = 0LL;
      OffCopyBitsInternal(v34, (struct _POINTL *)a1 + 17, (struct _SURFOBJ *)v15, &v41, v36, 0LL, v45, &v50, v49);
      if ( (*(_DWORD *)a1 & 0x200) != 0 && *((_QWORD *)a1 + 16) == v15 && *(HSURF *)(v15 + 320) == v31->hsurf )
        *(_DWORD *)a1 |= 0x80u;
      if ( p_pvScan0 )
        GreUnlockDisplayDevice(p_pvScan0[6]);
      if ( v32 )
        GreUnlockDisplayDevice(*(_QWORD *)(v32 + 48));
    }
    else
    {
      v40 = 0;
    }
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v43);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v42);
    MULTISURF::~MULTISURF((MULTISURF *)v47);
    goto LABEL_32;
  }
  SPRITERANGELOCK::vUnlockShared((SPRITERANGELOCK *)(v9 + 120));
  SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v9 + 120));
  vSpDeleteSurface(*((struct _SURFOBJ **)a1 + 16));
  *((_QWORD *)a1 + 16) = 0LL;
  SPRITERANGELOCK::vUnlockExclusive((SPRITERANGELOCK *)(v9 + 120));
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v43);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v42);
  MULTISURF::~MULTISURF((MULTISURF *)v47);
  return 0LL;
}
