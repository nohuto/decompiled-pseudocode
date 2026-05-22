/*
 * XREFs of ??_GInputProcessManager@@UEAAPEAXI@Z @ 0x18019B3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1InputProcessManager@@UEAA@XZ @ 0x18019B384 (--1InputProcessManager@@UEAA@XZ.c)
 */

InputProcessManager *__fastcall InputProcessManager::`scalar deleting destructor'(InputProcessManager *this, char a2)
{
  InputProcessManager::~InputProcessManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
