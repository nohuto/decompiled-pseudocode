/*
 * XREFs of ??_ECQueryKnownGameList@@UEAAPEAXI@Z @ 0x18003D3F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180002C38 (--3@YAXPEAX@Z.c)
 *     ??1CQueryKnownGameList@@UEAA@XZ @ 0x18003D2A4 (--1CQueryKnownGameList@@UEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CQueryKnownGameList::`vector deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  CQueryKnownGameList::~CQueryKnownGameList(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
