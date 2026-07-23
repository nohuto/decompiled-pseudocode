/*
 * XREFs of sub_14095B7DC @ 0x14095B7DC
 * Callers:
 *     ExpDeleteSiloState @ 0x140653DC4 (ExpDeleteSiloState.c)
 * Callees:
 *     sub_14095BDC8 @ 0x14095BDC8 (sub_14095BDC8.c)
 */

__int64 __fastcall sub_14095B7DC(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_14095BDC8(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
