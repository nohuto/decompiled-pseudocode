/*
 * XREFs of sub_180013600 @ 0x180013600
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007C95C @ 0x18007C95C (sub_18007C95C.c)
 */

__int64 __fastcall sub_180013600(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL);
  try
  {
    sub_18007C95C(v1, &unk_1801C7D78);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000F1E4(
      retaddr,
      165LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
