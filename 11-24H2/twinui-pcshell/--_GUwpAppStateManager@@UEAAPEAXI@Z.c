/*
 * XREFs of ??_GUwpAppStateManager@@UEAAPEAXI@Z @ 0x180235CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UwpAppStateManager@@UEAA@XZ @ 0x1802C1B24 (--1UwpAppStateManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

UwpAppStateManager *__fastcall UwpAppStateManager::`scalar deleting destructor'(UwpAppStateManager *this, char a2)
{
  UwpAppStateManager::~UwpAppStateManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
