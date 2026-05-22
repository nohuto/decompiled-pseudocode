/*
 * XREFs of _InputConfigContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x1801D9F70
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180035CE0 (-Release@InputContext@@UEAAKXZ.c)
 */

void __fastcall InputConfigContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__()
{
  if ( qword_180251E60 )
    InputContext::Release((struct InputConfigContextProvider *)((char *)qword_180251E60 + 8));
}
