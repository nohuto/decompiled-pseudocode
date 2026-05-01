/*
 * XREFs of ?InsertAsync@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@67@AEBUIInspectable@967@AEBW4DragDropSimulatorDropPoint@34567@@Z @ 0x18057A500
 * Callers:
 *     ?InsertAsync@?$produce@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UIDragDropSimulator@34567@@impl@winrt@@UEAAHPEAXHPEAPEAX@Z @ 0x18057A4A0 (-InsertAsync@-$produce@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Intern.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync$_InitCoro$2 @ 0x18057A224 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_18057A224.c)
 */

__int64 *__fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  void *v8; // rax
  int v10; // [rsp+138h] [rbp+10h] BYREF

  v8 = operator new(0xE0uLL);
  v10 = 0;
  winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync__InitCoro_2(
    &v10,
    (__int64)v8 + 112,
    a2,
    a3,
    a4,
    a1);
  return a2;
}
