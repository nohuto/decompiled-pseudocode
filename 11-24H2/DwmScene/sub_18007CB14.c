/*
 * XREFs of sub_18007CB14 @ 0x18007CB14
 * Callers:
 *     sub_18007ADF4 @ 0x18007ADF4 (sub_18007ADF4.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_1800786A8 @ 0x1800786A8 (sub_1800786A8.c)
 *     sub_180078718 @ 0x180078718 (sub_180078718.c)
 *     sub_18007AA10 @ 0x18007AA10 (sub_18007AA10.c)
 */

unsigned __int64 __fastcall sub_18007CB14(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 > 0x666666666666666LL )
    std::_Xlength_error("vector too long");
  v3 = sub_18007AA10(a1, a2);
  v4 = *a1;
  v5 = v3;
  if ( *a1 )
  {
    sub_180078718(v4, a1[1]);
    sub_180010234((void *)*a1, 8 * ((a1[2] - *a1) >> 3));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  v8 = v5;
  v6 = sub_1800786A8(v4, &v8);
  *a1 = v6;
  a1[1] = v6;
  result = v6 + 40 * v5;
  a1[2] = result;
  return result;
}
