/*
 * XREFs of sub_180013510 @ 0x180013510
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007C308 @ 0x18007C308 (sub_18007C308.c)
 */

__int64 __fastcall sub_180013510(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL);
  try
  {
    sub_18007C308(v1, &unk_1801C7DB8);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000F1E4(
      retaddr,
      109LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
