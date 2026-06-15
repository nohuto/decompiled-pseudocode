/*
 * XREFs of std::_Func_impl_no_alloc__lambda_d3d8473ab69012044bcca3ea676e23db__void_::_Copy @ 0x140035200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_d3d8473ab69012044bcca3ea676e23db__void_::_Copy(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  *a2 = off_14009C5C8;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v3 = a1[2];
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  a2[1] = a1[1];
  a2[2] = a1[2];
  v4 = a1[3];
  a2[3] = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a2;
}
