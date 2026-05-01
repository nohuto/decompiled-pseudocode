/*
 * XREFs of ??_ECPeopleBarJumpViewExperienceManager@@UEAAPEAXI@Z @ 0x18038AB00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x18038AA50 (--1CPeopleBarJumpViewExperienceManager@@UEAA@XZ.c)
 */

CPeopleBarJumpViewExperienceManager *__fastcall CPeopleBarJumpViewExperienceManager::`vector deleting destructor'(
        CPeopleBarJumpViewExperienceManager *this,
        char a2)
{
  CPeopleBarJumpViewExperienceManager::~CPeopleBarJumpViewExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1B0);
  return this;
}
