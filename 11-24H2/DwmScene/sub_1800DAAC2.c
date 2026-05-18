/*
 * XREFs of sub_1800DAAC2 @ 0x1800DAAC2
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_1800172A8 @ 0x1800172A8 (sub_1800172A8.c)
 *     sub_180079E2C @ 0x180079E2C (sub_180079E2C.c)
 */

void __fastcall __noreturn sub_1800DAAC2(__int64 a1, __int64 a2)
{
  sub_180079E2C(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 16LL));
  sub_1800172A8(a2 + 48, *(_QWORD *)(a2 + 40));
  throw (Spectre::Utils::SpectreException *)(a2 + 48);
}
