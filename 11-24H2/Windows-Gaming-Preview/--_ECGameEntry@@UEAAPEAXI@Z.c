/*
 * XREFs of ??_ECGameEntry@@UEAAPEAXI@Z @ 0x18003D3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180002C38 (--3@YAXPEAX@Z.c)
 *     ??1CGameEntry@@UEAA@XZ @ 0x18003D25C (--1CGameEntry@@UEAA@XZ.c)
 */

CGameEntry *__fastcall CGameEntry::`vector deleting destructor'(CGameEntry *this, const struct std::nothrow_t *a2)
{
  char v2; // bl

  v2 = (char)a2;
  CGameEntry::~CGameEntry(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
