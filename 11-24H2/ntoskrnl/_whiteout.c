/*
 * XREFs of _whiteout @ 0x140507150
 * Callers:
 *     _winput_s @ 0x1405071A8 (_winput_s.c)
 * Callees:
 *     iswctype @ 0x140500C30 (iswctype.c)
 *     _fgetwc_nolock @ 0x140507BE4 (_fgetwc_nolock.c)
 */

__int64 __fastcall whiteout(_DWORD *a1, FILE *a2)
{
  wint_t v4; // bx

  do
  {
    ++*a1;
    v4 = fgetwc_nolock(a2);
  }
  while ( v4 != 0xFFFF && iswctype(v4, 8u) );
  return v4;
}
