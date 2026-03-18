/*
 * XREFs of FsRtlpOplockRHIrpCancelRoutine @ 0x1404190D0
 * Callers:
 *     IoCancelIrp @ 0x140418FA0 (IoCancelIrp.c)
 * Callees:
 *     FsRtlpCancelOplockRHIrp @ 0x1404190F0 (FsRtlpCancelOplockRHIrp.c)
 */

__int64 __fastcall FsRtlpOplockRHIrpCancelRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return FsRtlpCancelOplockRHIrp(a2, 0LL, a3);
}
