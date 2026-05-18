/*
 * XREFs of sub_180028478 @ 0x180028478
 * Callers:
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 *     sub_18002822C @ 0x18002822C (sub_18002822C.c)
 *     sub_180028904 @ 0x180028904 (sub_180028904.c)
 * Callees:
 *     sub_180027E1C @ 0x180027E1C (sub_180027E1C.c)
 *     sub_180028614 @ 0x180028614 (sub_180028614.c)
 */

__int64 *__fastcall sub_180028478(__int64 a1, __int64 *a2, char a3)
{
  __int64 *v6; // rax
  __int64 v7; // r8
  __int64 i; // rcx
  __int64 *result; // rax
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  v6 = (__int64 *)sub_180028614();
  v10 = a1;
  v11 = a3;
  v7 = v6[1];
  for ( i = *v6; i != v7 && !sub_180027E1C(i, (__int64)&v10); i += 16LL )
    ;
  result = a2;
  *a2 = i;
  return result;
}
