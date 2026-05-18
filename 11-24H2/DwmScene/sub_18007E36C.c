/*
 * XREFs of sub_18007E36C @ 0x18007E36C
 * Callers:
 *     sub_18008DF4C @ 0x18008DF4C (sub_18008DF4C.c)
 *     sub_18008F1A8 @ 0x18008F1A8 (sub_18008F1A8.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 */

__int64 *__fastcall sub_18007E36C(__int64 a1, _QWORD *a2)
{
  __int64 *result; // rax
  __int64 v5; // rcx

  result = sub_18001254C((__int64 *)(a1 + 48), a2);
  *(_BYTE *)(a1 + 124) = 0;
  v5 = a2[1];
  if ( v5 )
    return (__int64 *)sub_18001060C(v5);
  return result;
}
