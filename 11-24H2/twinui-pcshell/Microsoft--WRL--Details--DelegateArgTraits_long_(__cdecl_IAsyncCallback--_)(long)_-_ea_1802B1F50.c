/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_15946b0ccefc41d95148340e59a95271___1_long_::Invoke @ 0x1802B1F50
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18013C198 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
