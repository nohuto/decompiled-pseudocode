/*
 * XREFs of ??_G?$heap_implements@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18044EEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 *     ??1XamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18044ECE4 (--1XamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication *Block,
        char a2)
{
  winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication::~XamlApplication(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
