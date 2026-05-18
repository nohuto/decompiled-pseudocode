/*
 * XREFs of sub_1800304C4 @ 0x1800304C4
 * Callers:
 *     sub_180030530 @ 0x180030530 (sub_180030530.c)
 *     sub_1800D6D16 @ 0x1800D6D16 (sub_1800D6D16.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800304C4(__int64 a1)
{
  __int64 result; // rax

  result = std::wios::rdbuf(*(_QWORD *)a1 + *(int *)(**(_QWORD **)a1 + 4LL));
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
  return result;
}
