/*
 * XREFs of ?DismissViewForDrag@CPPIAllUpViewHost@@UEAAXXZ @ 0x1804B1B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPPIAllUpViewHost::DismissViewForDrag(CPPIAllUpViewHost *this)
{
  CMultitaskingViewHostBase<IPPIAllUpViewHost>::DismissView((__int64)this - 120);
}
