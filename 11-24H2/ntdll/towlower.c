/*
 * XREFs of towlower @ 0x1801275E0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x1800BA3D0 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     iswctype @ 0x180124B20 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
