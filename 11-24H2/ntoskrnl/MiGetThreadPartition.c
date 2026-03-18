/*
 * XREFs of MiGetThreadPartition @ 0x1404385D0
 * Callers:
 *     MiResolveMemoryEvent @ 0x140A59870 (MiResolveMemoryEvent.c)
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetThreadPartition(__int64 a1)
{
  return *((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 1198LL));
}
