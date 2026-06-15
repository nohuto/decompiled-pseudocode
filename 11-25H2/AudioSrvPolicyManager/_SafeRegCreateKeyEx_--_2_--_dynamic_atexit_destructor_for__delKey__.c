/*
 * XREFs of _SafeRegCreateKeyEx_::_2_::_dynamic_atexit_destructor_for__delKey__ @ 0x18004E190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SafeRegCreateKeyEx_::_2_::_dynamic_atexit_destructor_for__delKey__()
{
  FreeLibrary(hLibModule);
  hLibModule = 0LL;
  qword_180067C88 = 0LL;
}
