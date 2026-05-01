/*
 * XREFs of _VirtualDesktopSwitcherHost::ViewLoaded_::_1_::dtor$12 @ 0x180776F2B
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801A2170 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall VirtualDesktopSwitcherHost::ViewLoaded_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 128) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 128) &= ~1u;
    return __abi_winrt_ptr_dtor(*(_QWORD *)(a2 + 32));
  }
  return result;
}
