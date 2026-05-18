/*
 * XREFs of sub_180073088 @ 0x180073088
 * Callers:
 *     sub_180072F7C @ 0x180072F7C (sub_180072F7C.c)
 *     sub_180073088 @ 0x180073088 (sub_180073088.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18002FB60 @ 0x18002FB60 (sub_18002FB60.c)
 *     sub_180073088 @ 0x180073088 (sub_180073088.c)
 *     sub_1800733F0 @ 0x1800733F0 (sub_1800733F0.c)
 */

__int64 __fastcall sub_180073088(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rcx
  char v9; // bl
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v11[0] = a1;
    v7 = sub_18001B1F8(96LL);
    sub_1800733F0(v8, v7 + 32, a2 + 32);
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    v11[1] = 0LL;
    sub_18002FB60((__int64)v11);
    *(_QWORD *)(v7 + 8) = a3;
    *(_BYTE *)(v7 + 24) = *(_BYTE *)(a2 + 24);
    v9 = *(_BYTE *)(v6 + 25);
    *(_QWORD *)v7 = sub_180073088(a1, *(_QWORD *)a2, v7);
    *(_QWORD *)(v7 + 16) = sub_180073088(a1, *(_QWORD *)(a2 + 16), v7);
    if ( !v9 )
      return v6;
    return v7;
  }
  return v6;
}
