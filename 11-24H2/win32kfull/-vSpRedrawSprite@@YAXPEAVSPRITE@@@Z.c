/*
 * XREFs of ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x14016D28C
 * Callers:
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x140023754 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1400D48D8 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1400E01B8 (-bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTIO.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x14016C338 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x14016D018 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 * Callees:
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x140009EBC (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x14000C23C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x14004EA34 (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x14004F348 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14004F4C0 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z @ 0x14005007C (-bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1400500B4 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x140050238 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A315C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1400DDCD0 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401708D4 (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x14026CE24 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x14032BF30 (-vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall vSpRedrawSprite(struct SPRITE *a1)
{
  __int64 v1; // r12
  char v3; // dl
  struct _RECTL *v4; // rcx
  struct _RECTL *v5; // r14
  struct _SURFOBJ *Composite; // r15
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // ecx
  int hsurf; // eax
  PVOID *p_pvScan0; // rbx
  struct SPRITE *i; // rcx
  const struct _RECTL *v13; // rax
  struct _RECTL *v14; // rbx
  struct REGION *v15; // rbx
  int v16; // edi
  struct _RECTL v17; // xmm0
  unsigned int j; // r13d
  struct _RECTL *v19; // r9
  LONG v20; // eax
  LONG v21; // eax
  LONG v22; // eax
  ULONG StartingIndex; // [rsp+48h] [rbp-C0h] BYREF
  struct _POINTL v24; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  struct _RECTL v26; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v27[20]; // [rsp+78h] [rbp-90h] BYREF
  char v28; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v29; // [rsp+118h] [rbp+10h] BYREF
  _OWORD v30[20]; // [rsp+11Ch] [rbp+14h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  v26 = 0LL;
  if ( !_bittest((const signed __int32 *)(*(_QWORD *)v1 + 40LL), 0xAu)
    && (*(_DWORD *)a1 & 0x400) == 0
    && (*(_DWORD *)a1 & 0x20) != 0
    && !(unsigned int)bIgnoreMirrorUpdate(a1)
    && ((v3 & 0x40) == 0 || (v3 & 0xC0) == 0xC0) )
  {
    StartingIndex = 0;
    v5 = v4 + 5;
    Composite = psoSpGetComposite((struct _SPRITESTATE *)v1, v4 + 5, &StartingIndex);
    if ( Composite )
    {
      v7 = 0LL;
      v8 = *((_QWORD *)a1 + 20);
      v24.x = -v5->left;
      v24.y = -*((_DWORD *)a1 + 21);
      if ( v8 )
      {
        v9 = *(_DWORD *)(v8 + 88);
        if ( (v9 & 0x80004000) != 0 && (v9 & 0x200) == 0 )
        {
          v7 = v8 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v8 - 24 + 48));
        }
      }
      hsurf = (int)Composite[1].hsurf;
      p_pvScan0 = 0LL;
      if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
      {
        p_pvScan0 = &Composite[-1].pvScan0;
        GreLockDisplayDevice(Composite->hdev);
      }
      INVOKEOFFCOPYBITS(
        &v24,
        Composite,
        (struct _POINTL *)a1 + 21,
        *((struct _SURFOBJ **)a1 + 20),
        0LL,
        0LL,
        v5,
        (struct _POINTL *)v5);
      if ( p_pvScan0 )
        GreUnlockDisplayDevice(p_pvScan0[6]);
      if ( v7 )
        GreUnlockDisplayDevice(*(_QWORD *)(v7 + 48));
      for ( i = *(struct SPRITE **)(v1 + 8); ; i = *(struct SPRITE **)&v14[1].right )
      {
        v13 = (const struct _RECTL *)pSpFindInZ(i, v5);
        v14 = (struct _RECTL *)v13;
        if ( !v13 )
          break;
        if ( bIntersect(v13 + 5, v5, &v26) )
          vSpComposite((struct SPRITE *)v14, &v24, Composite, &v26);
        SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)&v14[15].right);
      }
      v15 = (struct REGION *)_InterlockedExchange64((volatile __int64 *)a1 + 24, 0LL);
      if ( !v15 )
      {
        if ( (*(_DWORD *)a1 & 0x40) == 0 )
          vSpWriteToScreen((struct _SPRITESTATE *)v1, &v24, Composite, v5);
        goto LABEL_49;
      }
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v27);
      XCLIPOBJ::vSetup((XCLIPOBJ *)v27, v15, (const struct ERECTL *)v5, 1);
      memset_0(&v29, 0, 0x144uLL);
      if ( v28 )
      {
        if ( v28 != 1 )
        {
          if ( v28 != 3 )
          {
LABEL_46:
            vSpAddAndCompactDirtyRegion(a1, v15);
LABEL_49:
            if ( StartingIndex == -1 )
            {
              vSpDeleteSurface(Composite);
            }
            else
            {
              v25 = v1 + 696;
              if ( v1 != -696 )
                GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v1 + 696));
              RtlClearBits((PRTL_BITMAP)(v1 + 672), StartingIndex, 1u);
              Gre::PUSHLOCKEX::vUnlock((Gre::PUSHLOCKEX *)&v25, 0);
            }
            return;
          }
          v16 = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v27, 0, 0, 4u, 0x14u);
LABEL_33:
          if ( !v16 )
            goto LABEL_35;
          do
          {
            v16 = XCLIPOBJ::bEnum((XCLIPOBJ *)v27, 0x144u, (char *)&v29, 0LL);
LABEL_35:
            for ( j = 0; j < v29; ++j )
            {
              v19 = (struct _RECTL *)&v30[j];
              if ( v19->left < v5->left )
                v19->left = v5->left;
              v20 = *((_DWORD *)a1 + 22);
              if ( v19->right > v20 )
                v19->right = v20;
              v21 = *((_DWORD *)a1 + 21);
              if ( v19->top < v21 )
                v19->top = v21;
              v22 = *((_DWORD *)a1 + 23);
              if ( v19->bottom > v22 )
                v19->bottom = v22;
              vSpWriteToScreen((struct _SPRITESTATE *)v1, &v24, Composite, v19);
            }
          }
          while ( v16 );
          goto LABEL_46;
        }
        v17 = *(struct _RECTL *)&v27[4];
      }
      else
      {
        v17 = *v5;
      }
      v30[0] = v17;
      v29 = 1;
      v16 = 0;
      goto LABEL_33;
    }
  }
}
