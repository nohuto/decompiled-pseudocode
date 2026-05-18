/*
 * XREFs of sub_18003D938 @ 0x18003D938
 * Callers:
 *     sub_18003C9A8 @ 0x18003C9A8 (sub_18003C9A8.c)
 * Callees:
 *     sub_18003DC24 @ 0x18003DC24 (sub_18003DC24.c)
 */

__int64 __fastcall sub_18003D938(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18003DC24(v1);
  return result;
}
