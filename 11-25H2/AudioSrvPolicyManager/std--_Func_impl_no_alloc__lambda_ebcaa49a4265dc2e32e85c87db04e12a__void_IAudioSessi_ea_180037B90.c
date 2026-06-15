/*
 * XREFs of std::_Func_impl_no_alloc__lambda_ebcaa49a4265dc2e32e85c87db04e12a__void_IAudioSessionPolicyControl___bool___::_Do_call @ 0x180037B90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_ebcaa49a4265dc2e32e85c87db04e12a__void_IAudioSessionPolicyControl___bool___::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  char v5; // [rsp+20h] [rbp-28h]

  v2 = *a2;
  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( (_DWORD)result != 2 )
  {
    v5 = 0;
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, char, _QWORD))(*(_QWORD *)v2 + 152LL))(
             v2,
             **(unsigned int **)(a1 + 8),
             0LL,
             0xFFFFFFFFLL,
             v5,
             0LL);
  }
  return result;
}
