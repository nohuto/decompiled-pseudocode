/*
 * XREFs of sub_1800DA962 @ 0x1800DA962
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_1800171A8 @ 0x1800171A8 (sub_1800171A8.c)
 *     sub_180079CCC @ 0x180079CCC (sub_180079CCC.c)
 */

void __fastcall __noreturn sub_1800DA962(__int64 a1, __int64 a2)
{
  sub_180079CCC(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 16LL));
  sub_1800171A8(a2 + 48, *(_QWORD *)(a2 + 40));
  throw (Spectre::Utils::SpectreException *)(a2 + 48);
}
