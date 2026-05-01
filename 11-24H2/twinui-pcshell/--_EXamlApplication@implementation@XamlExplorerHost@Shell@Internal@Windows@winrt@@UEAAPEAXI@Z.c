/*
 * XREFs of ??_EXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x18044EF00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 *     ??1XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18044ED0C (--1XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

void **__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::`vector deleting destructor'(
        void **this,
        char a2)
{
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::~XamlApplication(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
