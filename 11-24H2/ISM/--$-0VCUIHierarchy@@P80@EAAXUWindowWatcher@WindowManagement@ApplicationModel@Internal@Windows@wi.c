/*
 * XREFs of ??$?0VCUIHierarchy@@P80@EAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Z@?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@winrt@@QEAA@PEAVCUIHierarchy@@P84@EAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@23@UWindowChangedEventArgs@67823@@Z@Z @ 0x1800A83B4
 * Callers:
 *     ?StartWindowWatcher@CUIHierarchy@@AEAAXXZ @ 0x1800AA024 (-StartWindowWatcher@CUIHierarchy@@AEAAXXZ.c)
 * Callees:
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180091D8C (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdx
  _QWORD *result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h]
  char *v7; // [rsp+40h] [rbp+8h]

  *(_QWORD *)&v6 = a2;
  *((_QWORD *)&v6 + 1) = a3;
  v7 = (char *)operator new(0x20uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v7 + 8));
  *(_OWORD *)(v4 + 16) = v6;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v4 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs>,_lambda_8796a88b72841d6ebf3a72c1da83edbf_>::`vftable';
  result = a1;
  *a1 = v4;
  return result;
}
