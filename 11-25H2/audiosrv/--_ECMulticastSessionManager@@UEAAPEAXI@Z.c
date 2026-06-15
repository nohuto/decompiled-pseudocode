/*
 * XREFs of ??_ECMulticastSessionManager@@UEAAPEAXI@Z @ 0x1800FC740
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMulticastSessionManager@@UEAA@XZ @ 0x1800FC528 (--1CMulticastSessionManager@@UEAA@XZ.c)
 */

CMulticastSessionManager *__fastcall CMulticastSessionManager::`vector deleting destructor'(
        CMulticastSessionManager *this,
        char a2)
{
  CMulticastSessionManager::~CMulticastSessionManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
