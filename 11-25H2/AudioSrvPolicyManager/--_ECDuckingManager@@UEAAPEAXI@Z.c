/*
 * XREFs of ??_ECDuckingManager@@UEAAPEAXI@Z @ 0x1800287E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CDuckingManager@@UEAA@XZ @ 0x18002842C (--1CDuckingManager@@UEAA@XZ.c)
 */

CDuckingManager *__fastcall CDuckingManager::`vector deleting destructor'(CDuckingManager *this, char a2)
{
  CDuckingManager::~CDuckingManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1A0);
  return this;
}
