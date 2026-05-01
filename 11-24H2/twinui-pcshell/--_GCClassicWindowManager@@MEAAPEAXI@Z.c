/*
 * XREFs of ??_GCClassicWindowManager@@MEAAPEAXI@Z @ 0x1802F25E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CClassicWindowManager@@MEAA@XZ @ 0x1802F2298 (--1CClassicWindowManager@@MEAA@XZ.c)
 */

CClassicWindowManager *__fastcall CClassicWindowManager::`scalar deleting destructor'(
        CClassicWindowManager *this,
        char a2)
{
  CClassicWindowManager::~CClassicWindowManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x120);
  return this;
}
