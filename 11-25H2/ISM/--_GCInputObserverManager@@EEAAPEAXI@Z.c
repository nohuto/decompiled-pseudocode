/*
 * XREFs of ??_GCInputObserverManager@@EEAAPEAXI@Z @ 0x180136350
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CInputObserverManager@@EEAA@XZ @ 0x180136300 (--1CInputObserverManager@@EEAA@XZ.c)
 */

CInputObserverManager *__fastcall CInputObserverManager::`scalar deleting destructor'(
        CInputObserverManager *this,
        char a2)
{
  CInputObserverManager::~CInputObserverManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
