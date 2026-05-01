/*
 * XREFs of ?IsEqual@TaskViewFrame@@UEAA_NPEAUHWND__@@@Z @ 0x1806BB750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall TaskViewFrame::IsEqual(TaskViewFrame *this, __int64 a2)
{
  return winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::IsEqual(
           (__int64 *)this + 9,
           a2);
}
