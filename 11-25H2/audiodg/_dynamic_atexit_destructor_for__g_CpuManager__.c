/*
 * XREFs of _dynamic_atexit_destructor_for__g_CpuManager__ @ 0x1400976F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 dynamic_atexit_destructor_for__g_CpuManager__()
{
  __int64 v0; // rcx
  __int64 result; // rax

  v0 = qword_1400C4768;
  if ( qword_1400C4768 )
  {
    qword_1400C4768 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
  }
  return result;
}
