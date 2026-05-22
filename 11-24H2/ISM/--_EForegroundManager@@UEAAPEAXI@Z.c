/*
 * XREFs of ??_EForegroundManager@@UEAAPEAXI@Z @ 0x1800AC930
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ForegroundManager@@UEAA@XZ @ 0x1800AC820 (--1ForegroundManager@@UEAA@XZ.c)
 */

ForegroundManager *__fastcall ForegroundManager::`vector deleting destructor'(ForegroundManager *this, char a2)
{
  ForegroundManager::~ForegroundManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x220);
  return this;
}
