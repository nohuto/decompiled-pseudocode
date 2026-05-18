/*
 * XREFs of sub_180013550 @ 0x180013550
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007C380 @ 0x18007C380 (sub_18007C380.c)
 */

__int64 sub_180013550()
{
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    sub_18007C380();
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000F0E4(
      retaddr,
      181LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
