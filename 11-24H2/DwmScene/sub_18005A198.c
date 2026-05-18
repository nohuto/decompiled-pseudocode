/*
 * XREFs of sub_18005A198 @ 0x18005A198
 * Callers:
 *     sub_18005C50C @ 0x18005C50C (sub_18005C50C.c)
 *     sub_18008D71C @ 0x18008D71C (sub_18008D71C.c)
 *     sub_18008DDBC @ 0x18008DDBC (sub_18008DDBC.c)
 * Callees:
 *     sub_180042490 @ 0x180042490 (sub_180042490.c)
 */

char __fastcall sub_18005A198(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char result; // al

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180042490(v3);
      v3 += 64LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
