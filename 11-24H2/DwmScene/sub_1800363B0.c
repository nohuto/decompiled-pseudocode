/*
 * XREFs of sub_1800363B0 @ 0x1800363B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_1800363B0(_QWORD *lpMem, char a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = lpMem[2];
  if ( v4 )
    result = sub_18001060C(v4);
  if ( a2 )
    return sub_18000BB4C(lpMem);
  return result;
}
