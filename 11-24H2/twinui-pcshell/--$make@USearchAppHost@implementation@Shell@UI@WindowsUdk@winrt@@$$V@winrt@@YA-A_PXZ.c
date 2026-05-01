/*
 * XREFs of ??$make@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1802C1824
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1802430DC (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 * Callees:
 *     ??0SearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x1802C187C (--0SearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

_QWORD *__fastcall winrt::make<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,>(_QWORD *a1)
{
  _QWORD *v2; // rbx

  v2 = operator new(0xB8uLL);
  memset_0(v2, 0, 0xB8uLL);
  winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost::SearchAppHost((winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost *)v2);
  *a1 = v2 + 2;
  *v2 = &winrt::impl::heap_implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost>::`vftable';
  return a1;
}
