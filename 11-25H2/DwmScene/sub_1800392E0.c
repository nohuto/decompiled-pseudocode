/*
 * XREFs of sub_1800392E0 @ 0x1800392E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 */

__int64 __fastcall sub_1800392E0(__int64 a1, __int64 a2)
{
  sub_18003BCDC(a1);
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 208LL))(a2, a1);
}
