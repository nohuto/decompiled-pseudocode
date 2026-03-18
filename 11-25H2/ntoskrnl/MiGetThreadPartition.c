/*
 * XREFs of MiGetThreadPartition @ 0x14043B2D0
 * Callers:
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 *     MiResolveMemoryEvent @ 0x140A562D0 (MiResolveMemoryEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetThreadPartition(__int64 a1)
{
  return *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 1198LL));
}
