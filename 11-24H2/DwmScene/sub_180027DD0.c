/*
 * XREFs of sub_180027DD0 @ 0x180027DD0
 * Callers:
 *     sub_1800236FC @ 0x1800236FC (sub_1800236FC.c)
 *     sub_180024EC0 @ 0x180024EC0 (sub_180024EC0.c)
 *     sub_180026870 @ 0x180026870 (sub_180026870.c)
 *     sub_1800269B8 @ 0x1800269B8 (sub_1800269B8.c)
 *     sub_180031794 @ 0x180031794 (sub_180031794.c)
 *     sub_1800447EC @ 0x1800447EC (sub_1800447EC.c)
 *     sub_180044894 @ 0x180044894 (sub_180044894.c)
 *     sub_18004493C @ 0x18004493C (sub_18004493C.c)
 *     sub_1800449E4 @ 0x1800449E4 (sub_1800449E4.c)
 *     sub_180044A84 @ 0x180044A84 (sub_180044A84.c)
 *     sub_180044B2C @ 0x180044B2C (sub_180044B2C.c)
 *     sub_180045668 @ 0x180045668 (sub_180045668.c)
 *     sub_18004607C @ 0x18004607C (sub_18004607C.c)
 *     sub_1800508B0 @ 0x1800508B0 (sub_1800508B0.c)
 *     sub_180051AD0 @ 0x180051AD0 (sub_180051AD0.c)
 *     sub_180051B88 @ 0x180051B88 (sub_180051B88.c)
 *     sub_180068B9C @ 0x180068B9C (sub_180068B9C.c)
 *     sub_180068F70 @ 0x180068F70 (sub_180068F70.c)
 *     sub_1800691A8 @ 0x1800691A8 (sub_1800691A8.c)
 *     sub_180069268 @ 0x180069268 (sub_180069268.c)
 *     sub_18007D9F4 @ 0x18007D9F4 (sub_18007D9F4.c)
 *     sub_18007F020 @ 0x18007F020 (sub_18007F020.c)
 *     sub_180080ED8 @ 0x180080ED8 (sub_180080ED8.c)
 *     sub_1800C8630 @ 0x1800C8630 (sub_1800C8630.c)
 *     sub_1800C8D78 @ 0x1800C8D78 (sub_1800C8D78.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180027DD0(__int64 a1, int a2, char a3)
{
  unsigned int v3; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 40);
  if ( a3 )
    result = a2 | v3;
  else
    result = ~a2 & v3;
  *(_DWORD *)(a1 + 40) = result;
  return result;
}
