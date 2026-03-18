/*
 * XREFs of ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401D399C
 * Callers:
 *     GreClientRgnUpdated @ 0x140060F88 (GreClientRgnUpdated.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1401DC1E4 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x140212870 (-vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x140259240 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1403007A8 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x140300D20 (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     EngCreateWnd @ 0x140301010 (EngCreateWnd.c)
 *     GreClientRgnDone @ 0x140301574 (GreClientRgnDone.c)
 *     GreDeleteWnd @ 0x140301670 (GreDeleteWnd.c)
 *     GreSetClientRgn @ 0x1403018D8 (GreSetClientRgn.c)
 *     ?GetModuleHandleAndIncrementRefcount@@YAPEAXPEBG@Z @ 0x140302FE0 (-GetModuleHandleAndIncrementRefcount@@YAPEAXPEBG@Z.c)
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1403030C8 (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 *     EngFreeModule @ 0x1403032A0 (EngFreeModule.c)
 *     ??$GreAcquireSemaphore@$0BF@PEAU_SPRITESTATE@@@@YAXPEAU_SPRITESTATE@@@Z @ 0x14032873C (--$GreAcquireSemaphore@$0BF@PEAU_SPRITESTATE@@@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$0BF@PEAU_SPRITESTATE@@@@YAXPEAU_SPRITESTATE@@@Z @ 0x1403287E4 (--$GreReleaseSemaphoreExclusive@$0BF@PEAU_SPRITESTATE@@@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x140329880 (-SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x14032C528 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x14032E958 (-vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     VerifierEngAllocMem @ 0x14032FC90 (VerifierEngAllocMem.c)
 *     VerifierEngFreeMem @ 0x140330190 (VerifierEngFreeMem.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall GrepGetGlobalLockName(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx

  if ( a1 <= 18 )
  {
    if ( a1 == 18 )
      return L"RFONTList";
    if ( a1 > 9 )
    {
      v14 = a1 - 10;
      if ( !v14 )
        return L"HT";
      v15 = v14 - 1;
      if ( !v15 )
        return L"VisRgnPublish";
      v16 = v15 - 1;
      if ( !v16 )
        return L"GammaLock";
      v17 = v16 - 1;
      if ( !v17 )
        return L"Palette";
      v18 = v17 - 1;
      if ( !v18 )
        return L"VisRgnUniqueness";
      v19 = v18 - 1;
      if ( !v19 )
        return L"RFONT_EUDC";
      v20 = v19 - 1;
      if ( !v20 )
        return L"EUDC1";
      if ( v20 == 1 )
        return L"PublicPFT";
    }
    else
    {
      if ( a1 == 9 )
        return L"SpriteRangeLock";
      if ( !a1 )
        return L"EnableEUDC";
      v7 = a1 - 1;
      if ( !v7 )
        return L"DynamicModeChange";
      v8 = v7 - 1;
      if ( !v8 )
        return L"GreLock";
      v9 = v8 - 1;
      if ( !v9 )
        return L"DCVisRgn";
      v10 = v9 - 1;
      if ( !v10 )
        return L"Pointer";
      v11 = v10 - 1;
      if ( !v11 )
        return L"RFONT_Cache";
      v12 = v11 - 1;
      if ( !v12 )
        return L"Sprite";
      v13 = v12 - 1;
      if ( !v13 )
        return L"DwmState";
      if ( v13 == 1 )
        return L"DevLock";
    }
    return L"Unknown";
  }
  if ( a1 <= 28 )
  {
    if ( a1 == 28 )
      return L"GlyphSet";
    v1 = a1 - 19;
    if ( !v1 )
      return L"DriverMgmt";
    v2 = v1 - 1;
    if ( !v2 )
      return L"Hmgr";
    v3 = v2 - 1;
    if ( !v3 )
      return L"SPRITE_State";
    v4 = v3 - 1;
    if ( !v4 )
      return L"TrustedFontFileTable";
    v5 = v4 - 1;
    if ( !v5 )
      return L"PrintKView";
    v21 = v5 - 1;
    if ( !v21 )
      return L"EUDC2";
    v22 = v21 - 1;
    if ( !v22 )
      return L"FntCache";
    v23 = v22 - 1;
    if ( !v23 )
      return L"NetworkedFontFile";
    if ( v23 == 1 )
      return L"GreEngLoadModuleAllocListLock";
    return L"Unknown";
  }
  v24 = a1 - 29;
  if ( !v24 )
    return L"PoolTracker";
  v25 = v24 - 1;
  if ( !v25 )
    return L"DEBUG";
  v26 = v25 - 1;
  if ( !v26 )
    return L"DebugGreMapViewListLock";
  v27 = v26 - 1;
  if ( !v27 )
    return L"MultiUserEngAllocListLock";
  v28 = v27 - 1;
  if ( !v28 )
    return L"Wndobj";
  v29 = v28 - 1;
  if ( !v29 )
    return L"WNDOBJ";
  v30 = v29 - 1;
  if ( v30 )
  {
    if ( v30 == 1 )
      return L"MapRot";
    return L"Unknown";
  }
  return L"PATHALLOC_FreeList";
}
