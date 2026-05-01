/*
 * XREFs of ??_EDesktopSingleViewShellExperiencePersonality@@UEAAPEAXI@Z @ 0x180061680
 * Callers:
 *     <none>
 * Callees:
 *     ??1DesktopSingleViewShellExperiencePersonality@@UEAA@XZ @ 0x1800616C0 (--1DesktopSingleViewShellExperiencePersonality@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

DesktopSingleViewShellExperiencePersonality *__fastcall DesktopSingleViewShellExperiencePersonality::`vector deleting destructor'(
        DesktopSingleViewShellExperiencePersonality *this,
        char a2)
{
  DesktopSingleViewShellExperiencePersonality::~DesktopSingleViewShellExperiencePersonality(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
