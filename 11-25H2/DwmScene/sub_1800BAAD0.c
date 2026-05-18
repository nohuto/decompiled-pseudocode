/*
 * XREFs of sub_1800BAAD0 @ 0x1800BAAD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800BAAD0(__int64 a1, __int64 a2)
{
  sub_1800287EC(a1 + 24, a2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return sub_180025820(a1);
}
