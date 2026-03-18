/*
 * XREFs of ??0NEEDPDEVPOINTERLOCK@@QEAA@PEAUHDEV__@@@Z @ 0x1401D99B8
 * Callers:
 *     GreRealizePalette @ 0x140266580 (GreRealizePalette.c)
 *     ?GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z @ 0x14030F080 (-GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x1400230C4 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 */

NEEDPDEVPOINTERLOCK *__fastcall NEEDPDEVPOINTERLOCK::NEEDPDEVPOINTERLOCK(NEEDPDEVPOINTERLOCK *this, _QWORD *a2)
{
  HSEMAPHORE v3; // rcx

  v3 = (HSEMAPHORE)a2[7];
  *(_QWORD *)this = v3;
  if ( v3 )
  {
    GreAcquireSemaphoreInternal(v3);
    GrepAcquireLockValidate<4>();
  }
  return this;
}
