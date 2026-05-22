/*
 * XREFs of _LampArrayTelemetry::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x1801D2490
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180039250 (-Release@InputContext@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall LampArrayTelemetry::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__()
{
  InputContext *v0; // rcx

  v0 = qword_180247DF8;
  if ( qword_180247DF8 )
  {
    qword_180247DF8 = 0LL;
    InputContext::Release(v0);
  }
}
