/*
 * XREFs of ?_Copy@?$_Func_impl_no_alloc@UUnloadDelegate@Transitions@Udwm@winrt@@X$$V@std@@EEBAPEAV?$_Func_base@X$$V@2@PEAX@Z @ 0x180104A40
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180020494 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc<winrt::Udwm::Transitions::UnloadDelegate,void,>::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = &std::_Func_impl_no_alloc<winrt::Udwm::Transitions::UnloadDelegate,void,>::`vftable';
  a2[1] = *(_QWORD *)(a1 + 8);
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)(a2 + 1));
  return a2;
}
