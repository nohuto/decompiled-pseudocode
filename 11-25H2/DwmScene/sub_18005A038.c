/*
 * XREFs of sub_18005A038 @ 0x18005A038
 * Callers:
 *     sub_18005C3AC @ 0x18005C3AC (sub_18005C3AC.c)
 *     sub_18008D5BC @ 0x18008D5BC (sub_18008D5BC.c)
 *     sub_18008DC5C @ 0x18008DC5C (sub_18008DC5C.c)
 * Callees:
 *     sub_180042330 @ 0x180042330 (sub_180042330.c)
 */

char __fastcall sub_18005A038(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char result; // al

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180042330(v3);
      v3 += 64LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
