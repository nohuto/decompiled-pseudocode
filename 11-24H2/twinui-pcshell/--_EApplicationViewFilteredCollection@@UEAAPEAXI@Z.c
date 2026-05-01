/*
 * XREFs of ??_EApplicationViewFilteredCollection@@UEAAPEAXI@Z @ 0x1805BC270
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ApplicationViewFilteredCollection@@UEAA@XZ @ 0x1805BC0D8 (--1ApplicationViewFilteredCollection@@UEAA@XZ.c)
 */

ApplicationViewFilteredCollection *__fastcall ApplicationViewFilteredCollection::`vector deleting destructor'(
        ApplicationViewFilteredCollection *this,
        char a2)
{
  ApplicationViewFilteredCollection::~ApplicationViewFilteredCollection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC0);
  return this;
}
