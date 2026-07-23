/*
 * XREFs of RtlpEnvRegisterFaultRange @ 0x140604BA0
 * Callers:
 *     RtlCSparseBitmapStart @ 0x140604674 (RtlCSparseBitmapStart.c)
 * Callees:
 *     MmManageFaultRange @ 0x140681764 (MmManageFaultRange.c)
 */

__int64 __fastcall RtlpEnvRegisterFaultRange(ULONG_PTR a1, ULONG_PTR a2)
{
  return (unsigned int)MmManageFaultRange(a1, a2) == 0 ? 0xC000009A : 0;
}
