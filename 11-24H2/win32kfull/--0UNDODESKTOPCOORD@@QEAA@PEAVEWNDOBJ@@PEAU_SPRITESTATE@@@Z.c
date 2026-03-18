/*
 * XREFs of ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x140328878
 * Callers:
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1401DC1E4 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x140212870 (-vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x140329880 (-SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x14032C528 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x14032CB14 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x14032CDA8 (-vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     ?vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x14032E958 (-vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 * Callees:
 *     ?vOffset@EWNDOBJ@@QEAAXJJ@Z @ 0x140300C6C (-vOffset@EWNDOBJ@@QEAAXJJ@Z.c)
 */

UNDODESKTOPCOORD *__fastcall UNDODESKTOPCOORD::UNDODESKTOPCOORD(
        UNDODESKTOPCOORD *this,
        struct EWNDOBJ *a2,
        struct _SPRITESTATE *a3)
{
  __int64 v5; // rax
  int v6; // edx
  int v7; // r8d
  struct _POINTL v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)this = 0LL;
  if ( a2 && (*((_DWORD *)a2 + 46) & 0x100) != 0 )
  {
    v5 = *(_QWORD *)a3;
    *(_QWORD *)this = a2;
    v6 = *(_DWORD *)(v5 + 2576);
    *((_DWORD *)this + 2) = v6;
    v7 = *(_DWORD *)(v5 + 2580);
    *((_DWORD *)this + 3) = v7;
    EWNDOBJ::vOffset(a2, -v6, -v7);
    if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 && *((_QWORD *)a2 + 24) )
    {
      v10 = *((_QWORD *)a2 + 24);
      v9.x = -*((_DWORD *)this + 2);
      v9.y = -*((_DWORD *)this + 3);
      RGNOBJ::bOffset((RGNOBJ *)&v10, &v9);
    }
    *((_DWORD *)a2 + 46) &= ~0x100u;
  }
  return this;
}
