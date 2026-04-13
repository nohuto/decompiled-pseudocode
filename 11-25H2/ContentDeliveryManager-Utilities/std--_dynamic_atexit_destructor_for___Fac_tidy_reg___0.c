/*
 * XREFs of std::_dynamic_atexit_destructor_for___Fac_tidy_reg___0 @ 0x1800BCBC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z_0 @ 0x18002263D (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void std::_dynamic_atexit_destructor_for___Fac_tidy_reg___0()
{
  void (__fastcall ***v0)(_QWORD, __int64); // rax
  _QWORD **v1; // rbx

  while ( 1 )
  {
    v1 = (_QWORD **)qword_1801784C0;
    if ( !qword_1801784C0 )
      break;
    qword_1801784C0 = *(void **)qword_1801784C0;
    v0 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD *))(*v1[1] + 16LL))(v1[1]);
    if ( v0 )
      (**v0)(v0, 1LL);
    operator delete(v1);
  }
}
