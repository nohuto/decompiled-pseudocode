/*
 * XREFs of MiGetThreadPartition @ 0x14042B190
 * Callers:
 *     MiResolveMemoryEvent @ 0x140A51130 (MiResolveMemoryEvent.c)
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetThreadPartition(__int64 a1)
{
  return *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 1198LL));
}
