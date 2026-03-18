/*
 * XREFs of ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140264FB0
 * Callers:
 *     GreClientRgnUpdated @ 0x140060F88 (GreClientRgnUpdated.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1401DC1E4 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x140212870 (-vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1403007A8 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x140300D20 (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     EngCreateWnd @ 0x140301010 (EngCreateWnd.c)
 *     GreClientRgnDone @ 0x140301574 (GreClientRgnDone.c)
 *     GreDeleteWnd @ 0x140301670 (GreDeleteWnd.c)
 *     GreSetClientRgn @ 0x1403018D8 (GreSetClientRgn.c)
 *     ?SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x140329880 (-SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x14032C528 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x14032E958 (-vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<33>::SEMOBJ<33>(HSEMAPHORE *a1, _QWORD *a2)
{
  HSEMAPHORE v3; // rcx
  struct _GRETHREAD *v4; // rax
  unsigned __int64 v5; // r8
  struct _GRETHREAD *v6; // rbx
  __int64 v7; // r9
  int v8; // ecx
  int v9; // eax

  v3 = (HSEMAPHORE)(*a2 + 416LL);
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  v4 = GreGetCurrentThreadCrossSessionCheck();
  v5 = 0LL;
  v6 = v4;
  if ( v4 )
  {
    v7 = *(_QWORD *)v4;
    if ( (*(_QWORD *)v4 & 0xFFFFFFFE00000000uLL) != 0 && (*(_QWORD *)v4 & 0x200000000LL) == 0 )
    {
      v8 = 37;
      do
      {
        v9 = v5;
        if ( !_bittest64(&v7, v5) )
          v9 = v8;
        ++v5;
        v8 = v9;
      }
      while ( v5 < 0x40 );
      if ( v9 > 33 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    *(_QWORD *)v6 |= 0x200000000uLL;
  }
  return a1;
}
