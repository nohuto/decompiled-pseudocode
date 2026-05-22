/*
 * XREFs of _dynamic_atexit_destructor_for__EdgyConnection::s_spThis__ @ 0x1801D2420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 dynamic_atexit_destructor_for__EdgyConnection::s_spThis__()
{
  __int64 v0; // rcx
  __int64 result; // rax

  v0 = EdgyConnection::s_spThis;
  if ( EdgyConnection::s_spThis )
  {
    EdgyConnection::s_spThis = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
  }
  return result;
}
