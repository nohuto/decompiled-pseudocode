/*
 * XREFs of ?vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1401C91D8
 * Callers:
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z @ 0x140263E0C (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x140324BF8 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000A534 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400CE0C4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bSpComputeUncoveredSpriteRegion@@YAHAEAVPDEVOBJ@@AEAVRGNOBJ@@@Z @ 0x1401C9314 (-bSpComputeUncoveredSpriteRegion@@YAHAEAVPDEVOBJ@@AEAVRGNOBJ@@@Z.c)
 */

void __fastcall vSpComputeUncoveredRegion(struct _SPRITESTATE *a1, int a2)
{
  __int64 v4; // [rsp+20h] [rbp-10h] BYREF
  __int64 v5; // [rsp+50h] [rbp+20h] BYREF
  __int64 v6; // [rsp+60h] [rbp+30h] BYREF
  __int64 v7; // [rsp+68h] [rbp+38h] BYREF

  v6 = *((_QWORD *)a1 + 88);
  v5 = *(_QWORD *)a1;
  if ( (unsigned int)bSpComputeUncoveredSpriteRegion((struct PDEVOBJ *)&v5, (struct RGNOBJ *)&v6) )
  {
    RGNOBJ::vTighten((RGNOBJ *)&v6);
    *((_QWORD *)a1 + 88) = v6;
    if ( *((_QWORD *)a1 + 130) && a2 == 1 )
    {
      v4 = *((_QWORD *)a1 + 130);
      v5 = *((_QWORD *)a1 + 89);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v7);
      if ( v7 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v5, (const struct _RECTL *const)((char *)a1 + 40));
        if ( !RGNOBJ::bMerge((RGNOBJ *)&v7, (struct RGNOBJ *)&v5, (struct RGNOBJ *)&v4, 4u) )
          RGNOBJ::vSet((RGNOBJ *)&v7);
        if ( !RGNOBJ::bMerge((RGNOBJ *)&v5, (struct RGNOBJ *)&v6, (struct RGNOBJ *)&v7, 0xEu) )
          RGNOBJ::vSet((RGNOBJ *)&v5);
        *((_QWORD *)a1 + 88) = v5;
        *((_QWORD *)a1 + 89) = v6;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v7);
    }
    REGION::vStamp(*((REGION **)a1 + 88));
  }
}
