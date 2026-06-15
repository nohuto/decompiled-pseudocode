/*
 * XREFs of _lambda_7995aa4cb37a8361273f7fc9bc5d8fda_::operator() @ 0x180030EEC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7995aa4cb37a8361273f7fc9bc5d8fda__void_IAudioSessionInfo___bool___::_Do_call @ 0x180035140 (std--_Func_impl_no_alloc__lambda_7995aa4cb37a8361273f7fc9bc5d8fda__void_IAudioSessi_ea_180035140.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall lambda_7995aa4cb37a8361273f7fc9bc5d8fda_::operator()(__int64 a1, __int64 a2, _BYTE *a3)
{
  _DWORD *result; // rax
  _QWORD *v7; // rax

  result = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 128LL))(a2);
  if ( !(_DWORD)result )
  {
    result = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
    if ( (_DWORD)result != 2 )
    {
      v7 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 120LL))(a2);
      if ( *v7 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
        && v7[1] == *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
      {
        return (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 104LL))(a2, *(_QWORD *)(a1 + 8));
      }
      result = *(_DWORD **)a1;
      if ( ++*result <= 1u )
        return (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 104LL))(a2, *(_QWORD *)(a1 + 8));
      else
        *a3 = 1;
    }
  }
  return result;
}
