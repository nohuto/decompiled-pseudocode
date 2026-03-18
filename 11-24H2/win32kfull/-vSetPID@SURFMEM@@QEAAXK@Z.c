/*
 * XREFs of ?vSetPID@SURFMEM@@QEAAXK@Z @ 0x1401FE464
 * Callers:
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x140329B5C (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x14032AF64 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFMEM::vSetPID(SURFMEM *this, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 5;
  HmgSetOwner(*(_QWORD *)(*(_QWORD *)this + 32LL), 0LL, a3);
}
