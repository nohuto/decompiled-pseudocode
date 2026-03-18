/*
 * XREFs of KeSetLastBranchRecordInUse @ 0x14072EA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KeSetLastBranchRecordInUse(char a1)
{
  if ( a1 )
    _interlockedbittestandset(&KiCpuTracingFlags, 1u);
  else
    _interlockedbittestandreset(&KiCpuTracingFlags, 1u);
}
