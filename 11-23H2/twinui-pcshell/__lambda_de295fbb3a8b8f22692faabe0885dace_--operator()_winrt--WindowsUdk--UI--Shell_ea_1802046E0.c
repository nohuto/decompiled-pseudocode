/*
 * XREFs of __lambda_de295fbb3a8b8f22692faabe0885dace_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_ResumeCoro$1_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs__::_1_::dtor$0 @ 0x1802046E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall _lambda_de295fbb3a8b8f22692faabe0885dace_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator__ResumeCoro_1_const___winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 144) = *(_QWORD *)(a2 + 256) + 16LL;
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(*(void **)(a2 + 144));
}
