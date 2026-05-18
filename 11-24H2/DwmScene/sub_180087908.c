/*
 * XREFs of sub_180087908 @ 0x180087908
 * Callers:
 *     sub_1800870BC @ 0x1800870BC (sub_1800870BC.c)
 * Callees:
 *     sub_180087A3C @ 0x180087A3C (sub_180087A3C.c)
 */

__int64 __fastcall sub_180087908(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_180087A3C(v1);
  return result;
}
