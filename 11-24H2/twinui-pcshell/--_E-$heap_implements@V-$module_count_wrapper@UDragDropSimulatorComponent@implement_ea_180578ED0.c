/*
 * XREFs of ??_E?$heap_implements@V?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@UEAAPEAXI@Z @ 0x180578ED0
 * Callers:
 *     ??_E?$heap_implements@V?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@WCA@EAAPEAXI@Z @ 0x180578EB0 (--_E-$heap_implements@V-$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDro.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x180578B6C (--1-$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Int.c)
 */

winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>>::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::~module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x70);
  return a1;
}
