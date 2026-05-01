/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_c4c5c4b54f46ee55e98247dc2d6953d1__void_::Invoke @ 0x180072E10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Platform::Details::__abi_FunctorCapture__lambda_c4c5c4b54f46ee55e98247dc2d6953d1__void_::Invoke(
        __int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 48LL))(*(_QWORD *)(a1 + 16));
  if ( (int)result < 0 )
  {
    __abi_WinRTraiseException(result);
    JUMPOUT(0x180072E40LL);
  }
  return result;
}
