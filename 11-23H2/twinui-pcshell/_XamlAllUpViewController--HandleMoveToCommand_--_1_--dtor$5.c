/*
 * XREFs of _XamlAllUpViewController::HandleMoveToCommand_::_1_::dtor$5 @ 0x1807809A7
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801A2170 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall XamlAllUpViewController::HandleMoveToCommand_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 4;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~4u;
    return __abi_winrt_ptr_dtor(*(_QWORD *)(a2 + 40));
  }
  return result;
}
