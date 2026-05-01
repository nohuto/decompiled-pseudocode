/*
 * XREFs of _JointResize::TagViewWithLogoAsync$_ResumeCoro$1_::_1_::dtor$3 @ 0x180214208
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802DF128 (--1-$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall JointResize::TagViewWithLogoAsync__ResumeCoro_1_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 152) = *(_QWORD *)(a2 + 56) + 48LL;
  return winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(*(_QWORD *)(a2 + 152));
}
