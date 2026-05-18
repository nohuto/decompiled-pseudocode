/*
 * XREFs of sub_1800BD6BC @ 0x1800BD6BC
 * Callers:
 *     sub_1800BCF50 @ 0x1800BCF50 (sub_1800BCF50.c)
 *     sub_1800BE290 @ 0x1800BE290 (sub_1800BE290.c)
 *     sub_1800BE640 @ 0x1800BE640 (sub_1800BE640.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800BD6BC(__int64 a1)
{
  unsigned int v2; // ebx
  char v3; // al

  v2 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 264LL))(a1, 2LL);
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  return sub_1800BD710(v2, v3 != 0);
}
