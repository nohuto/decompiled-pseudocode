/*
 * XREFs of sub_180025BA0 @ 0x180025BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800251D0 @ 0x1800251D0 (sub_1800251D0.c)
 */

__int64 __fastcall sub_180025BA0(__int64 a1)
{
  __int64 v1; // rax

  v1 = sub_1800251D0(a1);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 72LL))(v1);
}
