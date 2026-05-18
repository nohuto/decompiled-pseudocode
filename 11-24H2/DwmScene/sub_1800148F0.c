/*
 * XREFs of sub_1800148F0 @ 0x1800148F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F1E4 @ 0x18000F1E4 (sub_18000F1E4.c)
 *     sub_18001419C @ 0x18001419C (sub_18001419C.c)
 */

__int64 __fastcall sub_1800148F0(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v6; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = *a2 - 0x4BD1CD637052B94FLL;
  if ( *a2 == 0x4BD1CD637052B94FLL )
    v4 = a2[1] + 0x2492ED948E7B4D49LL;
  if ( v4 )
  {
    sub_18000F1E4(
      retaddr,
      113LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrenode.cpp",
      2147942487LL);
    return 2147942487LL;
  }
  else
  {
    v6 = a1 + 16;
    sub_18001419C(a1 + 16);
    *a3 = v6 & -(__int64)(a1 != 0);
    return 0LL;
  }
}
