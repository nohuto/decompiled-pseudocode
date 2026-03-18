/*
 * XREFs of ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x14032BD28
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1400E01B8 (-bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTIO.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1401D412C (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000A534 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z @ 0x1400A4EA4 (-bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400CDFD8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400CE0C4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bRectl@RGNOBJ@@QEBAHXZ @ 0x1400CE7DC (-bRectl@RGNOBJ@@QEBAHXZ.c)
 *     ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x14032BF30 (-vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall vSpAddAndCompactDirtyRect(volatile __int64 *a1, struct _RECTL *a2)
{
  int v4; // edi
  __int64 v5; // rdx
  struct REGION *v6; // rdx
  int v7; // esi
  __int64 v8; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+28h] [rbp-38h] BYREF
  __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  struct _RECTL v13; // [rsp+48h] [rbp-18h] BYREF

  Gre::Base::Globals((Gre::Base *)a1);
  v4 = 0;
  v8 = _InterlockedExchange64(a1 + 24, 0LL);
  if ( v8 )
  {
    if ( (unsigned int)RGNOBJ::bRectl((RGNOBJ *)&v8) && RGNOBJ::bContain((RGNOBJ *)&v8, a2) )
    {
      v6 = (struct REGION *)_InterlockedExchange64(a1 + 24, v8);
      v8 = 0LL;
      goto LABEL_18;
    }
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v9);
    if ( v10 )
    {
      if ( v9 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v9, a2);
        v7 = RGNOBJ::iComplexity((RGNOBJ *)&v8);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v10, (struct RGNOBJ *)&v8, (struct RGNOBJ *)&v9, 0xEu) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v10, (struct RGNOBJ *)&v8);
          v4 = 1;
          if ( v7 == 3 && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v8) == 2 )
          {
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v12);
            if ( v12 )
            {
              v13 = 0LL;
              v13 = *(struct _RECTL *)(v8 + 52);
              RGNOBJ::vSet((RGNOBJ *)&v12, &v13);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
              v8 = v12;
            }
          }
        }
      }
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v9);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
    v5 = v8;
  }
  else
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v11);
    if ( !v11 )
      goto LABEL_20;
    RGNOBJ::vSet((RGNOBJ *)&v11, a2);
    v5 = v11;
    v4 = 1;
    v8 = v11;
  }
  if ( !v4 || !v5 )
    goto LABEL_20;
  v6 = (struct REGION *)_InterlockedExchange64(a1 + 24, v5);
  v8 = 0LL;
LABEL_18:
  if ( v6 )
    vSpAddAndCompactDirtyRegion((struct SPRITE *)a1, v6);
LABEL_20:
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
}
