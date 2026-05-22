/*
 * XREFs of ??_GInputSiteManager@@UEAAPEAXI@Z @ 0x180130030
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1InputSiteManager@@UEAA@XZ @ 0x18012FFD0 (--1InputSiteManager@@UEAA@XZ.c)
 */

InputSiteManager *__fastcall InputSiteManager::`scalar deleting destructor'(InputSiteManager *this, char a2)
{
  InputSiteManager::~InputSiteManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
