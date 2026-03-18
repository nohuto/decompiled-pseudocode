/*
 * XREFs of sub_140C08D20 @ 0x140C08D20
 * Callers:
 *     <none>
 * Callees:
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     PsQueryThreadStartAddress @ 0x1403FD0A0 (PsQueryThreadStartAddress.c)
 */

__int64 __fastcall sub_140C08D20(__int64 a1, void *a2, __int64 a3)
{
  if ( !*(_QWORD *)(a3 + 2528)
    && (void (__noreturn *)())PsQueryThreadStartAddress((__int64)a2, 0) == PopIrpWorkerControl )
  {
    PsReferenceSiloContext(a2);
    *(_QWORD *)(a3 + 2528) = a2;
  }
  return 0LL;
}
