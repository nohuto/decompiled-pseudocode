/*
 * XREFs of std::_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo___::_Do_call @ 0x1800C1210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo___::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v3 = *a2;
  v5 = *a2;
  if ( !v2 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 16LL))(v2, &v5);
  if ( (_BYTE)result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 176LL))(v3);
  return result;
}
