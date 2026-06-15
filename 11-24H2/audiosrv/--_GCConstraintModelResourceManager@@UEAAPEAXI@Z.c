/*
 * XREFs of ??_GCConstraintModelResourceManager@@UEAAPEAXI@Z @ 0x1800EB1F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CConstraintModelResourceManager@@UEAA@XZ @ 0x1800EAABC (--1CConstraintModelResourceManager@@UEAA@XZ.c)
 */

CConstraintModelResourceManager *__fastcall CConstraintModelResourceManager::`scalar deleting destructor'(
        CConstraintModelResourceManager *this,
        char a2)
{
  CConstraintModelResourceManager::~CConstraintModelResourceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x120);
  return this;
}
