/*
 * XREFs of ??_GCPinnedList@@UEAAPEAXI@Z @ 0x180687E50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 *     ??1CPinnedList@@UEAA@XZ @ 0x18068AF3C (--1CPinnedList@@UEAA@XZ.c)
 */

CPinnedList *__fastcall CPinnedList::`scalar deleting destructor'(CPinnedList *this, char a2)
{
  CPinnedList::~CPinnedList(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
