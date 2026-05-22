/*
 * XREFs of _DisplayOcclusionContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x1801D2460
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180039250 (-Release@InputContext@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall DisplayOcclusionContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__()
{
  if ( qword_180247ED0 )
    InputContext::Release((struct DisplayOcclusionContextProvider *)((char *)qword_180247ED0 + 8));
}
