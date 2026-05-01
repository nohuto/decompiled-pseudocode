/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_286d0fe4c5dad9546df8d1816c162f02___::Release @ 0x1807647B0
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _lambda_286d0fe4c5dad9546df8d1816c162f02_::__lambda_286d0fe4c5dad9546df8d1816c162f02_ @ 0x180762A34 (_lambda_286d0fe4c5dad9546df8d1816c162f02_--__lambda_286d0fe4c5dad9546df8d1816c162f02_.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_286d0fe4c5dad9546df8d1816c162f02___::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--(a1 + 8);
  if ( !v2 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    lambda_286d0fe4c5dad9546df8d1816c162f02_::__lambda_286d0fe4c5dad9546df8d1816c162f02_((winrt::Windows::Foundation::IUnknown *)(a1 + 2));
    operator delete((void *)a1);
  }
  return v2;
}
