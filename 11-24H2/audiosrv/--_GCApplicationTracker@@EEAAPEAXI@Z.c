/*
 * XREFs of ??_GCApplicationTracker@@EEAAPEAXI@Z @ 0x180074850
 * Callers:
 *     <none>
 * Callees:
 *     ??1CApplicationTracker@@EEAA@XZ @ 0x1800A2340 (--1CApplicationTracker@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CApplicationTracker *__fastcall CApplicationTracker::`scalar deleting destructor'(CApplicationTracker *this, char a2)
{
  CApplicationTracker::~CApplicationTracker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
