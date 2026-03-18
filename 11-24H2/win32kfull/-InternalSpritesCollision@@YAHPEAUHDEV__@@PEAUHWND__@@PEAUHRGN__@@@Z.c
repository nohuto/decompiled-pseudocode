/*
 * XREFs of ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x140324BF8
 * Callers:
 *     DxgkEngDetectGDIPath @ 0x1403252A0 (DxgkEngDetectGDIPath.c)
 * Callees:
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140062DFC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1400D4DAC (GreDeleteSpriteOverlapPresent.c)
 *     ?vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1400D5DB8 (-vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1400D5E3C (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x14015763C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1401C91D8 (-vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x140328EE0 (-GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x140329200 (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall InternalSpritesCollision(HDEV a1, HWND a2, HRGN a3)
{
  unsigned int v4; // r12d
  HRGN RectRgn; // rsi
  HRGN v7; // rdi
  __int64 v8; // rax
  HRGN v9; // rcx
  HRGN v10; // r14
  unsigned int v11; // r13d
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // ebx
  __int64 v17; // r13
  Gre::Base *v18; // rcx
  HRGN v19; // rax
  unsigned int v20; // eax
  HRGN v21; // [rsp+30h] [rbp-79h]
  _QWORD v24[7]; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v25[7]; // [rsp+80h] [rbp-29h] BYREF
  struct _RECTL v26; // [rsp+B8h] [rbp+Fh] BYREF

  v4 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v24, a3, 0, 0);
  if ( v24[0] )
  {
    v26 = *(struct _RECTL *)(a1 + 30);
    ERECTL::bOffsetAdd((ERECTL *)&v26, (const struct _POINTL *)a1 + 322, 0);
    if ( RGNOBJ::bInside((RGNOBJ *)v24, &v26) != 2 )
    {
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v24);
      return 0LL;
    }
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v24);
  if ( *((_DWORD *)a1 + 34) )
  {
    RectRgn = (HRGN)GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
    if ( RectRgn )
    {
      v21 = (HRGN)GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
      v7 = (HRGN)GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
      v8 = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
      v9 = v21;
      v10 = (HRGN)v8;
      if ( !v21 )
      {
LABEL_34:
        if ( v7 )
          GreDeleteObject(v7);
        if ( v10 )
          GreDeleteObject(v10);
        GreDeleteObject(RectRgn);
        return v4;
      }
      if ( v7 && v8 )
      {
        v11 = 0;
        if ( (unsigned int)GreSetRectRgn(
                             v21,
                             *((unsigned int *)a1 + 30),
                             *((unsigned int *)a1 + 31),
                             *((unsigned int *)a1 + 32),
                             *((_DWORD *)a1 + 33)) )
        {
          SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(a1 + 50));
          if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v13, v12) + 96) + 136LL) == 1 && *((_QWORD *)a1 + 141) )
            vSpComputeUncoveredRegion((struct _SPRITESTATE *)(a1 + 20), 0);
          SPRITERANGELOCK::vUnlockExclusive((SPRITERANGELOCK *)(a1 + 50));
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v25, RectRgn, 0, 0);
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v24, v21, 1, 0);
          *(_QWORD *)&v26.left = *((_QWORD *)a1 + 98);
          if ( v25[0] && v24[0] )
            v11 = RGNOBJAPI::iCombine((RGNOBJAPI *)v25, (struct RGNOBJ *)v24, (struct RGNOBJ *)&v26, 4);
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v24);
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v25);
          if ( v11 > 1 )
          {
            v16 = 0;
            v17 = *(_QWORD *)(W32GetSessionState(v15, v14) + 96);
            if ( *(_DWORD *)(v17 + 136) == 1 )
            {
              GreSetRectRgn(v7, 0LL, 0LL, 0LL, 0);
              if ( !IsDwmActive(v18) )
                GdiGetSpriteClipRgns(a1, v7);
              GreGetRgnBox(v7, &v26);
              if ( !ERECTL::bEmpty((ERECTL *)&v26) && (unsigned int)GreCombineRgn(v10, RectRgn, v7, 1LL) > 1 )
              {
                v19 = RectRgn;
                v16 = 1;
                RectRgn = v10;
                v10 = v19;
              }
            }
            v20 = GreOffsetRgn(RectRgn, *((unsigned int *)a1 + 644), *((unsigned int *)a1 + 645));
            v9 = v21;
            if ( v20 <= 1 )
              goto LABEL_33;
            if ( (unsigned int)GreCombineRgn(v21, RectRgn, a3, 1LL) > 1 )
              v4 = 1;
            if ( *(_DWORD *)(v17 + 136) == 1 )
            {
              if ( v4 )
              {
                GreDeleteSpriteOverlapPresent(a1, (__int64)a2);
              }
              else if ( v16 )
              {
                GreAddSpriteOverlapPresent(a1, a2);
              }
            }
            else
            {
              v4 = 1;
            }
          }
        }
        v9 = v21;
      }
LABEL_33:
      GreDeleteObject(v9);
      goto LABEL_34;
    }
  }
  return v4;
}
