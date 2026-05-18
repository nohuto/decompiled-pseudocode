/*
 * XREFs of sub_1800D1C60 @ 0x1800D1C60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     sub_18001B8F4 @ 0x18001B8F4 (sub_18001B8F4.c)
 *     sub_180023A5C @ 0x180023A5C (sub_180023A5C.c)
 *     sub_180027138 @ 0x180027138 (sub_180027138.c)
 */

int __fastcall sub_1800D1C60(__int64 a1, int a2)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  sub_180011B30(a1 + 8);
  sub_180023A5C((__int64 *)(a1 + 48), &v7, &v9);
  if ( !*(_BYTE *)(v8 + 25) && a2 >= *(_DWORD *)(v8 + 32) && v8 != *(_QWORD *)(a1 + 48) )
  {
    v4 = sub_180027138((_QWORD *)(a1 + 48), v8);
    sub_18001B8F4(v5, v4);
  }
  return Mtx_unlock((_Mtx_t)(a1 + 8));
}
