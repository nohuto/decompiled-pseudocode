/*
 * XREFs of sub_180030624 @ 0x180030624
 * Callers:
 *     sub_180030690 @ 0x180030690 (sub_180030690.c)
 *     sub_1800D6E76 @ 0x1800D6E76 (sub_1800D6E76.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180030624(__int64 a1)
{
  __int64 result; // rax

  result = std::wios::rdbuf(*(_QWORD *)a1 + *(int *)(**(_QWORD **)a1 + 4LL));
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
  return result;
}
