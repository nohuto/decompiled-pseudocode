/*
 * XREFs of _SafeRegCreateKeyEx_::_2_::_dynamic_atexit_destructor_for__delKey__ @ 0x18004B940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SafeRegCreateKeyEx_::_2_::_dynamic_atexit_destructor_for__delKey__()
{
  FreeLibrary(hLibModule);
  hLibModule = 0LL;
  qword_180064BA0 = 0LL;
}
