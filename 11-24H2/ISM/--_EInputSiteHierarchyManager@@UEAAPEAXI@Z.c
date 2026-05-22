/*
 * XREFs of ??_EInputSiteHierarchyManager@@UEAAPEAXI@Z @ 0x18012FBC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1InputSiteHierarchyManager@@UEAA@XZ @ 0x18012FB88 (--1InputSiteHierarchyManager@@UEAA@XZ.c)
 */

InputSiteHierarchyManager *__fastcall InputSiteHierarchyManager::`vector deleting destructor'(
        InputSiteHierarchyManager *this,
        char a2)
{
  InputSiteHierarchyManager::~InputSiteHierarchyManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x90);
  return this;
}
