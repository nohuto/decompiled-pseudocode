/*
 * XREFs of RtlpEnvRegisterFaultRange @ 0x140607598
 * Callers:
 *     RtlCSparseBitmapStart @ 0x140607074 (RtlCSparseBitmapStart.c)
 * Callees:
 *     MmManageFaultRange @ 0x140680564 (MmManageFaultRange.c)
 */

__int64 __fastcall RtlpEnvRegisterFaultRange(ULONG_PTR a1, ULONG_PTR a2)
{
  return (unsigned int)MmManageFaultRange(a1, a2) == 0 ? 0xC000009A : 0;
}
