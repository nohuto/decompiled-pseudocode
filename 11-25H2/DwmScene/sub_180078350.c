/*
 * XREFs of sub_180078350 @ 0x180078350
 * Callers:
 *     sub_1800405B0 @ 0x1800405B0 (sub_1800405B0.c)
 *     sub_1800470D0 @ 0x1800470D0 (sub_1800470D0.c)
 *     sub_180048380 @ 0x180048380 (sub_180048380.c)
 *     sub_18004E010 @ 0x18004E010 (sub_18004E010.c)
 *     sub_1800567F0 @ 0x1800567F0 (sub_1800567F0.c)
 *     sub_180085400 @ 0x180085400 (sub_180085400.c)
 *     sub_18008BBE0 @ 0x18008BBE0 (sub_18008BBE0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_1800132F4 @ 0x1800132F4 (sub_1800132F4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180078350(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx

  sub_1800132F4(*a2 + 24, a1 + 24);
  *(_BYTE *)(*a2 + 72) = *(_BYTE *)(a1 + 72);
  result = *a2;
  *(_DWORD *)(*a2 + 76) = *(_DWORD *)(a1 + 76);
  v5 = a2[1];
  if ( v5 )
    return sub_18001050C(v5);
  return result;
}
