/*
 * XREFs of sub_180027AB4 @ 0x180027AB4
 * Callers:
 *     sub_1800266D0 @ 0x1800266D0 (sub_1800266D0.c)
 *     sub_180045C7C @ 0x180045C7C (sub_180045C7C.c)
 *     sub_18007F330 @ 0x18007F330 (sub_18007F330.c)
 * Callees:
 *     sub_1800274D8 @ 0x1800274D8 (sub_1800274D8.c)
 */

char __fastcall sub_180027AB4(__int64 a1, unsigned int a2)
{
  __int64 *v2; // rbx
  unsigned int v3; // r11d
  char v4; // r10
  unsigned int v5; // r11d
  __int64 v6; // rdx
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF

  v2 = (__int64 *)(a1 + 80);
  v10 = a2;
  sub_1800274D8((__int64 *)(a1 + 80), v8, &v10);
  v4 = 0;
  if ( !*(_BYTE *)(v9 + 25) && v3 >= *(_DWORD *)(v9 + 28) && v9 != *v2 )
  {
    v10 = v3;
    sub_1800274D8(v2, v8, &v10);
    v6 = v9;
    if ( *(_BYTE *)(v9 + 25) != v4 || v5 < *(_DWORD *)(v9 + 28) )
      v6 = *v2;
    if ( *(_BYTE *)(v6 + 32) != v4 )
      return 1;
  }
  return v4;
}
