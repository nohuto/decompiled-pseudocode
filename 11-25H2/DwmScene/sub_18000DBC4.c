/*
 * XREFs of sub_18000DBC4 @ 0x18000DBC4
 * Callers:
 *     sub_18000FFC0 @ 0x18000FFC0 (sub_18000FFC0.c)
 * Callees:
 *     sub_18000CFEC @ 0x18000CFEC (sub_18000CFEC.c)
 */

void __fastcall __noreturn sub_18000DBC4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  sub_18000CFEC(
    a1,
    34LL,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\dllmain.cpp",
    a4,
    v4,
    retaddr,
    a4);
}
