/*
 * XREFs of sub_180069C18 @ 0x180069C18
 * Callers:
 *     sub_18006981C @ 0x18006981C (sub_18006981C.c)
 *     sub_180069850 @ 0x180069850 (sub_180069850.c)
 *     sub_18006985C @ 0x18006985C (sub_18006985C.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18006945C @ 0x18006945C (sub_18006945C.c)
 */

__int64 __fastcall sub_180069C18(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_18006945C((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010134(*(void **)a1, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
