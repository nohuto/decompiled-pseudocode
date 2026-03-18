/*
 * XREFs of ?DeleteObject@FxDriver@@UEAAXXZ @ 0x140095430
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x140044FC0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 */

void __fastcall FxDriver::DeleteObject(FxDriver *this)
{
  FxObject::DeleteObject(this);
}
