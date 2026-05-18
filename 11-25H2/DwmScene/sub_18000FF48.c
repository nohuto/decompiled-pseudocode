/*
 * XREFs of sub_18000FF48 @ 0x18000FF48
 * Callers:
 *     sub_18000DC20 @ 0x18000DC20 (sub_18000DC20.c)
 *     sub_18000FF80 @ 0x18000FF80 (sub_18000FF80.c)
 * Callees:
 *     <none>
 */

HMODULE sub_18000FF48()
{
  HMODULE result; // rax

  result = (HMODULE)qword_1801C3420;
  if ( !qword_1801C3420 )
  {
    result = GetModuleHandleW(L"ntdll.dll");
    qword_1801C3420 = (__int64)result;
  }
  return result;
}
