/*
 * XREFs of ??_GUndockedSearchAppExperienceManager@@UEAAPEAXI@Z @ 0x1803B71B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1UndockedSearchAppExperienceManager@@UEAA@XZ @ 0x1803B5988 (--1UndockedSearchAppExperienceManager@@UEAA@XZ.c)
 */

UndockedSearchAppExperienceManager *__fastcall UndockedSearchAppExperienceManager::`scalar deleting destructor'(
        UndockedSearchAppExperienceManager *this,
        char a2)
{
  UndockedSearchAppExperienceManager::~UndockedSearchAppExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x3C8);
  return this;
}
