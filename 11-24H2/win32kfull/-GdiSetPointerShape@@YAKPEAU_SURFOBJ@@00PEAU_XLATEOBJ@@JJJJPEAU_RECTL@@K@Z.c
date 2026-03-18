/*
 * XREFs of ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x14016C338
 * Callers:
 *     EngSetPointerShape @ 0x14016B2D0 (EngSetPointerShape.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140022FAC (--$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x140023754 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002A350 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400D5534 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400D5640 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400D5F30 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1400DDAE4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x14016C6E4 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x14016D28C (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x14032AF64 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall GdiSetPointerShape(
        struct _SURFOBJ *a1,
        SURFOBJ *psoSrc,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        struct _RECTL *a9,
        unsigned int a10)
{
  unsigned int v13; // edi
  Gre::Base *v14; // rcx
  unsigned int v15; // r14d
  unsigned int v16; // ebp
  HDEV hdev; // rbx
  __int64 v18; // rsi
  struct _RECTL *v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rbx
  struct SPRITE *Sprite; // rax
  __int64 v23; // rcx
  bool v24; // zf
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rdi
  struct _RECTL *v28; // rbp
  struct _SPRITESTATE *v30[31]; // [rsp+30h] [rbp-F8h] BYREF
  HDEV v31; // [rsp+130h] [rbp+8h] BYREF
  struct _XLATEOBJ *v32; // [rsp+148h] [rbp+20h]

  v32 = a4;
  v13 = ((a10 >> 8) & 0xF) + 1;
  v14 = (Gre::Base *)(unsigned __int8)(a10 >> 12);
  v15 = 2;
  if ( (unsigned __int8)(a10 >> 12) )
    v16 = 0x3E8 / (unsigned int)v14;
  else
    v16 = 0;
  hdev = a1->hdev;
  v31 = hdev;
  v18 = *(_QWORD *)Gre::Base::Globals(v14) + 1040LL;
  GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v18);
  if ( psoSrc || a3 )
  {
    while ( *((_DWORD *)hdev + 293) < v13 )
    {
      Sprite = pSpCreateSprite(hdev, 0LL, 0LL, 0LL);
      if ( !Sprite )
        break;
      if ( !*((_QWORD *)hdev + 150) )
        *((_QWORD *)hdev + 150) = Sprite;
      ++*((_DWORD *)hdev + 293);
      *((_QWORD *)hdev + 151) = Sprite;
    }
    while ( *((_DWORD *)hdev + 293) > v13 )
    {
      v23 = *((_QWORD *)hdev + 151);
      *((_QWORD *)hdev + 151) = *(_QWORD *)(v23 + 24);
      vSpDeleteSprite((struct SPRITE *)v23);
      --*((_DWORD *)hdev + 293);
    }
    v24 = *((_QWORD *)hdev + 150) == 0LL;
    *((_DWORD *)hdev + 295) = v16;
    if ( !v24 )
    {
      v25 = *((_QWORD *)hdev + 151);
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v30, (struct PDEVOBJ *)&v31);
      while ( v25 )
      {
        bSpUpdatePosition((struct SPRITE *)v25, 0LL, 0, 0);
        vSpRedrawSprite((struct SPRITE *)v25);
        v25 = *(_QWORD *)(v25 + 24);
      }
      SPRITEDDIACCESS::~SPRITEDDIACCESS(v30, v26);
      v27 = *((_QWORD *)hdev + 151);
      v28 = a9;
      while ( v27 )
      {
        if ( !(unsigned int)bSpUpdateCursor((struct SPRITE *)v27, psoSrc, a3, v32, v28) )
        {
          v15 = 0;
          break;
        }
        v27 = *(_QWORD *)(v27 + 24);
      }
      *((_DWORD *)hdev + 290) = a5 - v28->left;
      *((_DWORD *)hdev + 291) = a6 - v28->top;
    }
    GdiMovePointer(a1, a7, a8, v19, 1);
  }
  else
  {
    v20 = *((_QWORD *)hdev + 151);
    *((_QWORD *)hdev + 151) = 0LL;
    *((_QWORD *)hdev + 150) = 0LL;
    *((_DWORD *)hdev + 293) = 0;
    if ( v20 )
    {
      do
      {
        v21 = *(_QWORD *)(v20 + 24);
        vSpDeleteSprite((struct SPRITE *)v20);
        v20 = v21;
      }
      while ( v21 );
    }
  }
  if ( v18 )
    GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v18);
  return v15;
}
