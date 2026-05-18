/*
 * XREFs of sub_1800BFD24 @ 0x1800BFD24
 * Callers:
 *     sub_1800BF8BC @ 0x1800BF8BC (sub_1800BF8BC.c)
 *     sub_1800BF9CC @ 0x1800BF9CC (sub_1800BF9CC.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 */

__int64 *__fastcall sub_1800BFD24(__int64 *a1, __int64 *a2, int *a3, int *a4)
{
  __int64 v8; // rax
  int v9; // r10d
  int v10; // r9d
  __int64 v11; // r8

  v8 = sub_18001B1F8(16LL);
  if ( v8 )
  {
    v9 = *a4;
    v10 = *a3;
    v11 = *a2;
    *a2 = 0LL;
    *(_QWORD *)v8 = v11;
    *(_DWORD *)(v8 + 8) = v10;
    *(_DWORD *)(v8 + 12) = v9;
  }
  *a1 = v8;
  return a1;
}
