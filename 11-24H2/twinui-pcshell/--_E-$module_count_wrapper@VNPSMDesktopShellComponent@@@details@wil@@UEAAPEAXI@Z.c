/*
 * XREFs of ??_E?$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@UEAAPEAXI@Z @ 0x18021672C
 * Callers:
 *     ??_E?$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@WCI@EAAPEAXI@Z @ 0x18060EDC0 (--_E-$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@UEAA@XZ @ 0x1802C3C54 (--1-$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

NPSMDesktopShellComponent *__fastcall wil::details::module_count_wrapper<NPSMDesktopShellComponent>::`vector deleting destructor'(
        NPSMDesktopShellComponent *a1,
        char a2)
{
  wil::details::module_count_wrapper<NPSMDesktopShellComponent>::~module_count_wrapper<NPSMDesktopShellComponent>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x120);
  return a1;
}
