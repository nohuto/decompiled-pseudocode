/*
 * XREFs of sub_180013500 @ 0x180013500
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007C7FC @ 0x18007C7FC (sub_18007C7FC.c)
 */

__int64 __fastcall sub_180013500(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL);
  try
  {
    sub_18007C7FC(v1, &unk_1801C6D68);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000F0E4(
      retaddr,
      165LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
