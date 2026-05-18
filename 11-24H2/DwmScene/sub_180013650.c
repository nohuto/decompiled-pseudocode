/*
 * XREFs of sub_180013650 @ 0x180013650
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007C4E0 @ 0x18007C4E0 (sub_18007C4E0.c)
 */

__int64 sub_180013650()
{
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    sub_18007C4E0();
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000F1E4(
      retaddr,
      181LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
