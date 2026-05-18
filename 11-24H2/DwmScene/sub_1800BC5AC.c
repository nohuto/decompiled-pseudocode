/*
 * XREFs of sub_1800BC5AC @ 0x1800BC5AC
 * Callers:
 *     sub_1800BDF0C @ 0x1800BDF0C (sub_1800BDF0C.c)
 * Callees:
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 */

__int64 __fastcall sub_1800BC5AC(__int64 *a1, __int64 a2)
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
      sub_18001C420(&v5);
    while ( v4 != 1 );
    result = v5;
  }
  *v3 = result;
  return result;
}
