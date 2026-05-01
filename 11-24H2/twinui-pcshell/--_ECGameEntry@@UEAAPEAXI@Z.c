/*
 * XREFs of ??_ECGameEntry@@UEAAPEAXI@Z @ 0x18017A120
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CGameEntry *__fastcall CGameEntry::`vector deleting destructor'(CGameEntry *this, const struct std::nothrow_t *a2)
{
  char v3; // di
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  *(_QWORD *)this = &CGameEntry::`vftable';
  v3 = (char)a2;
  v4 = (void *)*((_QWORD *)this + 9);
  if ( v4 )
    operator delete(v4, a2);
  v5 = (void *)*((_QWORD *)this + 8);
  if ( v5 )
    operator delete(v5, a2);
  v6 = (void *)*((_QWORD *)this + 7);
  if ( v6 )
    operator delete(v6, a2);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (v3 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
