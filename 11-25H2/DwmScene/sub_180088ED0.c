/*
 * XREFs of sub_180088ED0 @ 0x180088ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180088ED0(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(result + 1896) = 0;
  return result;
}
