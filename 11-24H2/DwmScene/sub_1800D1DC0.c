/*
 * XREFs of sub_1800D1DC0 @ 0x1800D1DC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     sub_18001BA54 @ 0x18001BA54 (sub_18001BA54.c)
 *     sub_180023BBC @ 0x180023BBC (sub_180023BBC.c)
 *     sub_180027298 @ 0x180027298 (sub_180027298.c)
 */

int __fastcall sub_1800D1DC0(__int64 a1, int a2)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  sub_180011C30(a1 + 8);
  sub_180023BBC((__int64 *)(a1 + 48), &v7, &v9);
  if ( !*(_BYTE *)(v8 + 25) && a2 >= *(_DWORD *)(v8 + 32) && v8 != *(_QWORD *)(a1 + 48) )
  {
    v4 = sub_180027298((_QWORD *)(a1 + 48), v8);
    sub_18001BA54(v5, v4);
  }
  return Mtx_unlock((_Mtx_t)(a1 + 8));
}
