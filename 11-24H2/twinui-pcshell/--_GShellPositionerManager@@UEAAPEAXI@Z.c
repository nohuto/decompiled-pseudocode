/*
 * XREFs of ??_GShellPositionerManager@@UEAAPEAXI@Z @ 0x18021E9F8
 * Callers:
 *     ??_EShellPositionerManager@@WBI@EAAPEAXI@Z @ 0x1804EC220 (--_EShellPositionerManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1ShellPositionerManager@@UEAA@XZ @ 0x18021EA34 (--1ShellPositionerManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ShellPositionerManager *__fastcall ShellPositionerManager::`scalar deleting destructor'(
        ShellPositionerManager *this,
        char a2)
{
  ShellPositionerManager::~ShellPositionerManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xD0);
  return this;
}
