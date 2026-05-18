/*
 * XREFs of sub_180075A78 @ 0x180075A78
 * Callers:
 *     sub_180074044 @ 0x180074044 (sub_180074044.c)
 *     sub_18007D6C0 @ 0x18007D6C0 (sub_18007D6C0.c)
 *     sub_18007D744 @ 0x18007D744 (sub_18007D744.c)
 *     sub_18007E93C @ 0x18007E93C (sub_18007E93C.c)
 *     sub_180081FB4 @ 0x180081FB4 (sub_180081FB4.c)
 *     sub_180081FE4 @ 0x180081FE4 (sub_180081FE4.c)
 *     sub_1800823C0 @ 0x1800823C0 (sub_1800823C0.c)
 *     sub_180082480 @ 0x180082480 (sub_180082480.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180073DEC @ 0x180073DEC (sub_180073DEC.c)
 */

__int64 __fastcall sub_180075A78(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_180073DEC((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010234(*(void **)a1, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
