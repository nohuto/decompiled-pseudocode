/*
 * XREFs of ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1400D48D8
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1400617E0 (GreUpdateSpriteVisRgn.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140061FD0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 * Callees:
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x140009EBC (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x14000C23C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     UserVisrgnFromHwnd @ 0x140045834 (UserVisrgnFromHwnd.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140062DFC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A315C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400D5534 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400D5640 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpFreeClipResources@@YAXPEAVSPRITE@@@Z @ 0x1400D5EF4 (-vSpFreeClipResources@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400D5F30 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400D68D4 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x14016D28C (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x14032C528 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x14032DF7C (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall vSpUpdateSpriteVisRgn(HDEV a1, char a2)
{
  HDEV v3; // rsi
  Gre::Base *v4; // rcx
  HDEV v5; // r12
  __int64 i; // rdi
  __int64 v7; // rdx
  int v8; // esi
  struct REGION *v9; // rbx
  int v10; // r9d
  int v11; // ecx
  int v12; // ecx
  struct REGION *v13; // rdx
  int v14; // eax
  int v15; // edx
  struct _POINTL *v16; // rbx
  REGION *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // r15d
  int v23; // r14d
  unsigned int v24; // ebx
  int v25; // esi
  int v26; // eax
  int v27; // eax
  unsigned int j; // edx
  _QWORD v29[2]; // [rsp+38h] [rbp-D0h] BYREF
  struct _POINTL v30; // [rsp+48h] [rbp-C0h] BYREF
  struct _POINTL v31; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A8h] BYREF
  HDEV v34; // [rsp+68h] [rbp-A0h]
  _QWORD v35[7]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v36[192]; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v37[4]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v38[4]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v39[16]; // [rsp+17Ch] [rbp+74h] BYREF
  char v40; // [rsp+18Ch] [rbp+84h]
  _BYTE v41[4]; // [rsp+218h] [rbp+110h] BYREF
  _BYTE v42[16]; // [rsp+21Ch] [rbp+114h] BYREF
  char v43; // [rsp+22Ch] [rbp+124h]
  _DWORD v44[84]; // [rsp+2B8h] [rbp+1B0h] BYREF
  _DWORD v45[84]; // [rsp+408h] [rbp+300h] BYREF

  v30 = 0LL;
  v3 = a1;
  v34 = a1;
  memset_0(v44, 0, 0x144uLL);
  memset_0(v45, 0, 0x144uLL);
  v5 = v3 + 20;
  if ( *((_QWORD *)v3 + 11) )
  {
    if ( (a2 & 4) != 0 )
    {
      Gre::Base::Globals(v4);
      vSpComputeNoPresentRegion((struct _SPRITESTATE *)(v3 + 20), 1);
    }
    for ( i = *((_QWORD *)v3 + 11); ; i = *(_QWORD *)(i + 24) )
    {
      if ( !i )
        return;
      v21 = *(_QWORD *)(i + 72);
      if ( v21 )
        break;
LABEL_18:
      ;
    }
    UserVisrgnFromHwnd((HRGN *)v5 + 133, v21, 0);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v29);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v35, *((HRGN *)v5 + 133), 0, 0);
    if ( !v35[0] || !v29[0] || !RGNOBJ::bCopy((RGNOBJ *)v29, (struct RGNOBJ *)v35) )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v29);
LABEL_17:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v35);
      goto LABEL_18;
    }
    v30.x = -*((_DWORD *)v3 + 644);
    v30.y = -*((_DWORD *)v3 + 645);
    RGNOBJ::bOffset((RGNOBJ *)v29, &v30);
    v7 = *(_QWORD *)(i + 184);
    v8 = 1;
    v9 = (struct REGION *)v29[0];
    v31 = (struct _POINTL)v29[0];
    if ( v7 )
    {
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v38);
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v41);
      v10 = *(_DWORD *)(i + 116);
      v11 = *(_DWORD *)(i + 112) + *(_DWORD *)(i + 104) - *(_DWORD *)(i + 96);
      v37[0] = *(_DWORD *)(i + 112);
      v37[2] = v11;
      v12 = v10 + *(_DWORD *)(i + 108) - *(_DWORD *)(i + 100);
      v37[1] = v10;
      v37[3] = v12;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v38, v13, (const struct ERECTL *)v37, 0);
      XCLIPOBJ::vSetup((XCLIPOBJ *)v41, v9, (const struct ERECTL *)v37, 0);
      ERECTL::bEmpty((ERECTL *)v39);
      v14 = ERECTL::bEmpty((ERECTL *)v42);
      if ( v15 == v14 )
      {
        if ( !v40 )
        {
          v16 = (struct _POINTL *)(i + 112);
          if ( !v43 )
            goto LABEL_11;
        }
        if ( v40 == v43 )
        {
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v38, 0, 0, 4u, 0x64u);
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v41, 0, 0, 4u, 0x64u);
          v22 = 1;
          v23 = 1;
          while ( 1 )
          {
            v24 = 0;
            v25 = 0;
            v44[0] = 0;
            v45[0] = 0;
            if ( v22 )
            {
              v26 = XCLIPOBJ::bEnum((XCLIPOBJ *)v38, 0x144u, (char *)v44, 0LL);
              v24 = v44[0];
              v22 = v26;
            }
            if ( v23 )
            {
              v27 = XCLIPOBJ::bEnum((XCLIPOBJ *)v41, 0x144u, (char *)v45, 0LL);
              v25 = v45[0];
              v23 = v27;
            }
            if ( v24 != v25 )
              break;
            for ( j = 0; j < v24; ++j )
            {
              if ( v45[4 * j + 1] != v44[4 * j + 1]
                || v45[4 * j + 2] != v44[4 * j + 2]
                || v45[4 * j + 3] != v44[4 * j + 3]
                || v45[4 * j + 4] != v44[4 * j + 4] )
              {
                goto LABEL_26;
              }
            }
            if ( !v22 )
            {
              v8 = 1;
              v16 = (struct _POINTL *)(i + 112);
              if ( !v23 )
                goto LABEL_11;
            }
          }
        }
      }
LABEL_26:
      v16 = (struct _POINTL *)(i + 112);
    }
    else
    {
      v16 = (struct _POINTL *)(i + 112);
    }
    v8 = 0;
LABEL_11:
    vSpFreeClipResources((struct SPRITE *)i);
    v17 = (REGION *)v31;
    *(struct _POINTL *)(i + 184) = v31;
    REGION::vStamp(v17);
    v32 = *(_QWORD *)v5;
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v33, (struct PDEVOBJ *)&v32);
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v36, (struct PDEVOBJ *)&v32);
    *(_DWORD *)i &= ~1u;
    if ( RGNOBJ::bInside((RGNOBJ *)v29, (struct _RECTL *)(v5 + 10)) != 2 )
      *(_DWORD *)i |= 1u;
    bSpUpdatePosition((struct SPRITE *)i, v16, 0, 0);
    if ( *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v19, v18, v20) + 96) + 4824LL) )
      vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v5, (struct _RECTL *)(i + 80), (struct _RECTL *)(i + 80));
    if ( !v8 )
    {
      if ( *((_QWORD *)v5 + 130) )
      {
        v31 = 0LL;
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v5, &v31, (struct _RECTL *)(i + 80), 0LL, 1);
      }
      vSpRedrawSprite((struct SPRITE *)i);
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v36);
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v33);
    v3 = v34;
    goto LABEL_17;
  }
}
