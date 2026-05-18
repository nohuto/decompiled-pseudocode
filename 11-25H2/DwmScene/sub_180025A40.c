/*
 * XREFs of sub_180025A40 @ 0x180025A40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025070 @ 0x180025070 (sub_180025070.c)
 */

__int64 __fastcall sub_180025A40(__int64 a1)
{
  __int64 v1; // rax

  v1 = sub_180025070(a1);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 72LL))(v1);
}
