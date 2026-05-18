/*
 * XREFs of sub_180033440 @ 0x180033440
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

__int64 __fastcall sub_180033440(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 )
    return sub_18001050C(v2);
  return result;
}
