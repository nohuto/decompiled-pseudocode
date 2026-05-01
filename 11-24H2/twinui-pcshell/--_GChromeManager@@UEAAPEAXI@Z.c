/*
 * XREFs of ??_GChromeManager@@UEAAPEAXI@Z @ 0x1802196C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ChromeManager@@UEAA@XZ @ 0x1802C9F94 (--1ChromeManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ChromeManager *__fastcall ChromeManager::`scalar deleting destructor'(ChromeManager *this, char a2)
{
  ChromeManager::~ChromeManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
