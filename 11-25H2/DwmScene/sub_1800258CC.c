/*
 * XREFs of sub_1800258CC @ 0x1800258CC
 * Callers:
 *     sub_1800B8F60 @ 0x1800B8F60 (sub_1800B8F60.c)
 *     sub_1800B92C0 @ 0x1800B92C0 (sub_1800B92C0.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18001B0F8 @ 0x18001B0F8 (sub_18001B0F8.c)
 *     sub_18002500C @ 0x18002500C (sub_18002500C.c)
 */

void *__fastcall sub_1800258CC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r9
  void *v7; // rcx
  int v8; // esi
  int v9; // ebp
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = a1;
  sub_18002500C(a3, &v11);
  v7 = *(void **)a2;
  v8 = (int)*(float *)&v11;
  v9 = (int)*((float *)&v11 + 1);
  if ( !*(_QWORD *)a2
    || v6 != *(_DWORD *)(a2 + 16)
    || v8 != *(_DWORD *)(a2 + 8)
    || v9 != *(_DWORD *)(a2 + 12)
    || *(_DWORD *)(a2 + 20) != 1 )
  {
    sub_18001B0F8(v7);
    v7 = (void *)sub_18001B098(a4);
    *(_QWORD *)a2 = v7;
    *(_DWORD *)(a2 + 8) = v8;
    *(_DWORD *)(a2 + 12) = v9;
    *(_DWORD *)(a2 + 16) = a4;
    *(_DWORD *)(a2 + 20) = 1;
  }
  return v7;
}
