/*
 * XREFs of RtlInterlockedSetClearBits @ 0x14048B890
 * Callers:
 *     PspRundownSingleProcess @ 0x1408A8B38 (PspRundownSingleProcess.c)
 *     PspApplyJobChainLimitsToProcess @ 0x1408E7DA0 (PspApplyJobChainLimitsToProcess.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     PspAssociateCompletionPortCallback @ 0x140A6C5F0 (PspAssociateCompletionPortCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInterlockedSetClearBits(volatile signed __int32 *a1, int a2, int a3)
{
  unsigned __int32 v3; // r10d
  int v4; // r8d
  signed __int32 i; // r9d
  signed __int32 v6; // r9d

  v3 = *a1;
  v4 = ~a3;
  for ( i = *a1; ; v3 = i )
  {
    v6 = v4 & (a2 | i);
    if ( v6 == v3 )
      break;
    i = _InterlockedCompareExchange(a1, v6, v3);
    if ( v3 == i )
      break;
  }
  return v3;
}
