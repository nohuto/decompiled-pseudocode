/*
 * XREFs of sub_18007A95C @ 0x18007A95C
 * Callers:
 *     sub_180043870 @ 0x180043870 (sub_180043870.c)
 *     sub_180077074 @ 0x180077074 (sub_180077074.c)
 *     sub_18007A6A4 @ 0x18007A6A4 (sub_18007A6A4.c)
 * Callees:
 *     sub_180079204 @ 0x180079204 (sub_180079204.c)
 */

_DWORD *__fastcall sub_18007A95C(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  _DWORD *result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx

  result = (_DWORD *)sub_180079204(a1, a2);
  v5 = a3 - (_QWORD)result;
  v6 = 16LL;
  do
  {
    *result = *(_DWORD *)((char *)result + v5);
    ++result;
    --v6;
  }
  while ( v6 );
  return result;
}
