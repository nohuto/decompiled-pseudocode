/*
 * XREFs of FsRtlpOplockRHIrpCancelRoutine @ 0x14041B370
 * Callers:
 *     IoCancelIrp @ 0x14041B240 (IoCancelIrp.c)
 * Callees:
 *     FsRtlpCancelOplockRHIrp @ 0x14041B390 (FsRtlpCancelOplockRHIrp.c)
 */

__int64 __fastcall FsRtlpOplockRHIrpCancelRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return FsRtlpCancelOplockRHIrp(a2, 0LL, a3);
}
