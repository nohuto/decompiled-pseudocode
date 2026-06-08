/*
 * XREFs of AcpiCStateIdleExecute @ 0x140002570
 * Callers:
 *     PepIdleExecute @ 0x14000C030 (PepIdleExecute.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AcpiCStateIdleExecute(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  (*(void (__fastcall **)(__int64, _QWORD))(88LL * a3 + a1 + 72))(88LL * a3 + a1 + 80, a5);
  return 0LL;
}
