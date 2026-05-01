/*
 * XREFs of ?InsertAsync@?$produce@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UIDragDropSimulator@34567@@impl@winrt@@UEAAHPEAXHPEAPEAX@Z @ 0x18057A4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InsertAsync@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@67@AEBUIInspectable@967@AEBW4DragDropSimulatorDropPoint@34567@@Z @ 0x18057A500 (-InsertAsync@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::InsertAsync(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4)
{
  __int64 *inserted; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h]
  int v10; // [rsp+40h] [rbp+18h]

  v10 = a3;
  v9 = a2;
  *a4 = 0LL;
  try
  {
    inserted = (__int64 *)winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync();
    v6 = *inserted;
    *inserted = 0LL;
    *a4 = v6;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v8);
  }
  return result;
}
