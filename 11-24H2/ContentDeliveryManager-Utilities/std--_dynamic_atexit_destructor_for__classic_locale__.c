/*
 * XREFs of std::_dynamic_atexit_destructor_for__classic_locale__ @ 0x1800BCF50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void std::_dynamic_atexit_destructor_for__classic_locale__()
{
  void (__fastcall ***v0)(_QWORD, __int64); // rax

  if ( qword_18017A4B0 )
  {
    v0 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18017A4B0 + 16LL))(qword_18017A4B0);
    if ( v0 )
      (**v0)(v0, 1LL);
  }
}
