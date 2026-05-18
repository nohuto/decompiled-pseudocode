/*
 * XREFs of sub_180026328 @ 0x180026328
 * Callers:
 *     sub_1800261DC @ 0x1800261DC (sub_1800261DC.c)
 *     sub_18002DBA4 @ 0x18002DBA4 (sub_18002DBA4.c)
 *     sub_180050140 @ 0x180050140 (sub_180050140.c)
 *     sub_18005DD30 @ 0x18005DD30 (sub_18005DD30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180026328(__int64 a1, __int64 a2, __int64 a3, _DWORD **a4)
{
  __int64 result; // rax

  result = 0LL;
  *(_DWORD *)a2 = **a4;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  return result;
}
