/*
 * XREFs of MmKasanCommitRegion @ 0x140679BA8
 * Callers:
 *     MmCreateKernelStack @ 0x14026B230 (MmCreateKernelStack.c)
 *     RtlpHpEnvAllocVA @ 0x1402EAA50 (RtlpHpEnvAllocVA.c)
 *     KasanTrackAddress @ 0x140459A10 (KasanTrackAddress.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x1403A62E0 (MiMakeZeroedPageTablesEx.c)
 */

__int64 __fastcall MmKasanCommitRegion(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  int v4; // r8d

  v4 = 4656;
  if ( KeGetCurrentIrql() != 2 )
    v4 = 560;
  return (unsigned int)MiMakeZeroedPageTablesEx(
                         ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                         ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                         v4,
                         19,
                         a3) == 0
       ? 0xC000009A
       : 0;
}
