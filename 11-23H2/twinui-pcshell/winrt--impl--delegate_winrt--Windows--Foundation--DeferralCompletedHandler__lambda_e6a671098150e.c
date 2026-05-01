/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_e6a671098150e4fafb7216c3a0d06112___::Invoke @ 0x1801B0F60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_e6a671098150e4fafb7216c3a0d06112___::Invoke(
        __int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  __int64 v4; // rdx
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 112), 0xFFFFFFFF) == 1 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 104) + 24LL))(*(_QWORD *)(v1 + 104));
    if ( v2 < 0 )
    {
      try
      {
        winrt::throw_hresult((unsigned int)v2);
      }
      catch ( ... )
      {
        *(_DWORD *)(v4 + 48) = *(_DWORD *)winrt::to_hresult(&v6);
        return v6;
      }
    }
  }
  return 0LL;
}
