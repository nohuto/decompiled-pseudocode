/*
 * XREFs of _anonymous_namespace_::DummyAsyncOperation::get_Completed @ 0x180013B00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall anonymous_namespace_::DummyAsyncOperation::get_Completed(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx

  if ( _Mtx_lock((_Mtx_t)(a1 + 88)) )
  {
    std::_Throw_Cpp_error(5);
    __debugbreak();
  }
  if ( *(_DWORD *)(a1 + 116) == 0x7FFFFFFF )
  {
    *(_DWORD *)(a1 + 116) = 2147483646;
    std::_Throw_Cpp_error(6);
  }
  v4 = *(_QWORD *)(a1 + 120);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a2 = *(_QWORD *)(a1 + 120);
  _Mtx_unlock((_Mtx_t)(a1 + 88));
  return 0LL;
}
