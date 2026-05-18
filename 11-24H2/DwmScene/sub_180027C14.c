/*
 * XREFs of sub_180027C14 @ 0x180027C14
 * Callers:
 *     sub_180026830 @ 0x180026830 (sub_180026830.c)
 *     sub_180045DDC @ 0x180045DDC (sub_180045DDC.c)
 *     sub_18007F490 @ 0x18007F490 (sub_18007F490.c)
 * Callees:
 *     sub_180027638 @ 0x180027638 (sub_180027638.c)
 */

char __fastcall sub_180027C14(__int64 a1, unsigned int a2)
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
  sub_180027638((__int64 *)(a1 + 80), v8, &v10);
  v4 = 0;
  if ( !*(_BYTE *)(v9 + 25) && v3 >= *(_DWORD *)(v9 + 28) && v9 != *v2 )
  {
    v10 = v3;
    sub_180027638(v2, v8, &v10);
    v6 = v9;
    if ( *(_BYTE *)(v9 + 25) != v4 || v5 < *(_DWORD *)(v9 + 28) )
      v6 = *v2;
    if ( *(_BYTE *)(v6 + 32) != v4 )
      return 1;
  }
  return v4;
}
