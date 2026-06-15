/*
 * XREFs of ??_GCApplicationTracker@@EEAAPEAXI@Z @ 0x180087810
 * Callers:
 *     <none>
 * Callees:
 *     ??1CApplicationTracker@@EEAA@XZ @ 0x1800A5F04 (--1CApplicationTracker@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CApplicationTracker *__fastcall CApplicationTracker::`scalar deleting destructor'(CApplicationTracker *this, char a2)
{
  CApplicationTracker::~CApplicationTracker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
