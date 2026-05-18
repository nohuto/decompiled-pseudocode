/*
 * XREFs of sub_18007E20C @ 0x18007E20C
 * Callers:
 *     sub_18008DDEC @ 0x18008DDEC (sub_18008DDEC.c)
 *     sub_18008F048 @ 0x18008F048 (sub_18008F048.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 */

__int64 *__fastcall sub_18007E20C(__int64 a1, _QWORD *a2)
{
  __int64 *result; // rax
  __int64 v5; // rcx

  result = sub_18001244C((__int64 *)(a1 + 48), a2);
  *(_BYTE *)(a1 + 124) = 0;
  v5 = a2[1];
  if ( v5 )
    return (__int64 *)sub_18001050C(v5);
  return result;
}
