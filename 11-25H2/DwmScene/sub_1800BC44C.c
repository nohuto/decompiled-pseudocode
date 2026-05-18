/*
 * XREFs of sub_1800BC44C @ 0x1800BC44C
 * Callers:
 *     sub_1800BDDAC @ 0x1800BDDAC (sub_1800BDDAC.c)
 * Callees:
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 */

__int64 __fastcall sub_1800BC44C(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v3; // r10
  __int64 v4; // r9
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  result = *a1;
  v5 = *a1;
  v3 = a1;
  if ( a2 )
  {
    do
      sub_18001C2C0(&v5);
    while ( v4 != 1 );
    result = v5;
  }
  *v3 = result;
  return result;
}
