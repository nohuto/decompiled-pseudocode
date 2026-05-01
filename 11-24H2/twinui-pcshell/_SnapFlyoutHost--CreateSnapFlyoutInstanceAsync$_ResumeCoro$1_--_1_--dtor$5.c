/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$5 @ 0x1806F74B5
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@VSnapFlyoutHost@@@winrt@@QEAA@XZ @ 0x18023A1C0 (--1-$com_ptr@VSnapFlyoutHost@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 760) = *(_QWORD *)(a2 + 1312) + 144LL;
  return winrt::com_ptr<SnapFlyoutHost>::~com_ptr<SnapFlyoutHost>(*(_QWORD **)(a2 + 760));
}
