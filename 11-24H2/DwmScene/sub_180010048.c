/*
 * XREFs of sub_180010048 @ 0x180010048
 * Callers:
 *     sub_18000DD00 @ 0x18000DD00 (sub_18000DD00.c)
 *     sub_180010080 @ 0x180010080 (sub_180010080.c)
 * Callees:
 *     <none>
 */

HMODULE sub_180010048()
{
  HMODULE result; // rax

  result = (HMODULE)qword_1801C4430;
  if ( !qword_1801C4430 )
  {
    result = GetModuleHandleW(L"ntdll.dll");
    qword_1801C4430 = (__int64)result;
  }
  return result;
}
