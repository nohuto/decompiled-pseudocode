/*
 * XREFs of _VirtualDesktopSwitcherHost::StartDismissAnimation_::_1_::dtor$2 @ 0x18077659B
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801A2170 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall VirtualDesktopSwitcherHost::StartDismissAnimation_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 176) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 176) &= ~2u;
    return __abi_winrt_ptr_dtor(*(_QWORD *)(a2 + 184));
  }
  return result;
}
