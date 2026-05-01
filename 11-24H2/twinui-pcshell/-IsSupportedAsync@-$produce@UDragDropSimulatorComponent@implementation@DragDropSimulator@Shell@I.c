/*
 * XREFs of ?IsSupportedAsync@?$produce@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UIDragDropSimulator@34567@@impl@winrt@@UEAAHPEAXHPEAPEAX@Z @ 0x18057A800
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?IsSupportedAsync@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@67@AEBUIInspectable@967@AEBW4DragDropSimulatorDropPoint@34567@@Z @ 0x18057A860 (-IsSupportedAsync@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Win.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::IsSupportedAsync(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4)
{
  __int64 *IsSupportedAsync; // rax
  __int64 v6; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  int v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  *a4 = 0LL;
  IsSupportedAsync = (__int64 *)winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync(
                                  (a1 - 88) & -(__int64)(a1 != 0),
                                  &v8,
                                  &v9,
                                  &v10);
  v6 = *IsSupportedAsync;
  *IsSupportedAsync = 0LL;
  *a4 = v6;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  return 0LL;
}
