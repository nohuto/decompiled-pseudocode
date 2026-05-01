/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_15946b0ccefc41d95148340e59a95271___1_long_::Invoke @ 0x1803AF7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801A0934 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_15946b0ccefc41d95148340e59a95271___1_long_::Invoke(
        __int64 a1)
{
  signed int v2; // edi

  **(_DWORD **)(a1 + 32) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
                             *(_QWORD *)(a1 + 16),
                             0LL);
  v2 = **(_DWORD **)(a1 + 32);
  SetEvent(*(HANDLE *)(a1 + 24));
  if ( v2 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v2);
  return (unsigned int)v2;
}
