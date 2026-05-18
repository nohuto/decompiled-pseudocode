/*
 * XREFs of sub_180025A2C @ 0x180025A2C
 * Callers:
 *     sub_1800B90C0 @ 0x1800B90C0 (sub_1800B90C0.c)
 *     sub_1800B9420 @ 0x1800B9420 (sub_1800B9420.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001B258 @ 0x18001B258 (sub_18001B258.c)
 *     sub_18002516C @ 0x18002516C (sub_18002516C.c)
 */

void *__fastcall sub_180025A2C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r9
  void *v7; // rcx
  int v8; // esi
  int v9; // ebp
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = a1;
  sub_18002516C(a3, &v11);
  v7 = *(void **)a2;
  v8 = (int)*(float *)&v11;
  v9 = (int)*((float *)&v11 + 1);
  if ( !*(_QWORD *)a2
    || v6 != *(_DWORD *)(a2 + 16)
    || v8 != *(_DWORD *)(a2 + 8)
    || v9 != *(_DWORD *)(a2 + 12)
    || *(_DWORD *)(a2 + 20) != 1 )
  {
    sub_18001B258(v7);
    v7 = (void *)sub_18001B1F8(a4);
    *(_QWORD *)a2 = v7;
    *(_DWORD *)(a2 + 8) = v8;
    *(_DWORD *)(a2 + 12) = v9;
    *(_DWORD *)(a2 + 16) = a4;
    *(_DWORD *)(a2 + 20) = 1;
  }
  return v7;
}
