/*
 * XREFs of ??1CGameEntry@@UEAA@XZ @ 0x18003D25C
 * Callers:
 *     ??_ECGameEntry@@UEAAPEAXI@Z @ 0x18003D3B0 (--_ECGameEntry@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CGameEntry::~CGameEntry(CGameEntry *this, const struct std::nothrow_t *a2)
{
  void *v3; // rcx
  const struct std::nothrow_t *v4; // rdx

  *(_QWORD *)this = &CGameEntry::`vftable';
  v3 = (void *)*((_QWORD *)this + 9);
  if ( v3 )
    operator delete(v3, a2);
  operator delete(*((void **)this + 8), a2);
  operator delete(*((void **)this + 7), v4);
  *((_DWORD *)this + 3) = -1073741823;
}
