/*
 * XREFs of FsRtlpOplockRHIrpCancelRoutine @ 0x140408E80
 * Callers:
 *     IoCancelIrp @ 0x140408D50 (IoCancelIrp.c)
 * Callees:
 *     FsRtlpCancelOplockRHIrp @ 0x140408EA0 (FsRtlpCancelOplockRHIrp.c)
 */

__int64 __fastcall FsRtlpOplockRHIrpCancelRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return FsRtlpCancelOplockRHIrp(a2, 0LL, a3);
}
