/*
 * XREFs of sub_180036250 @ 0x180036250
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

__int64 __fastcall sub_180036250(_QWORD *lpMem, char a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = lpMem[2];
  if ( v4 )
    result = sub_18001050C(v4);
  if ( a2 )
    return sub_18000B77C(lpMem);
  return result;
}
