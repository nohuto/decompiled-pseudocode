/*
 * XREFs of sub_180036124 @ 0x180036124
 * Callers:
 *     sub_18002CA64 @ 0x18002CA64 (sub_18002CA64.c)
 *     sub_1800526DC @ 0x1800526DC (sub_1800526DC.c)
 *     sub_18005A244 @ 0x18005A244 (sub_18005A244.c)
 *     sub_18005DCBC @ 0x18005DCBC (sub_18005DCBC.c)
 *     sub_18008D6A0 @ 0x18008D6A0 (sub_18008D6A0.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18002C478 @ 0x18002C478 (sub_18002C478.c)
 */

__int64 __fastcall sub_180036124(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_18002C478((__int64)v6, *(_QWORD *)(a1 + 8));
    result = sub_180010134(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
  return result;
}
