/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_d2e2cf78e01620d7c4ea8812dfd8399a___::Release @ 0x1800DAF70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_d2e2cf78e01620d7c4ea8812dfd8399a___::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi
  std::_Ref_count_base *v4; // rcx

  v2 = winrt::impl::atomic_ref_count::operator--(a1 + 6);
  if ( !v2 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    v4 = (std::_Ref_count_base *)*((_QWORD *)a1 + 2);
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
    operator delete((void *)a1, 0x20uLL);
  }
  return v2;
}
