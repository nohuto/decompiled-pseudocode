/*
 * XREFs of RtlInterlockedSetClearBits @ 0x140486664
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x1408D85E4 (PspApplyJobChainLimitsToProcess.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     PspRundownSingleProcess @ 0x1408FED98 (PspRundownSingleProcess.c)
 *     PspAssociateCompletionPortCallback @ 0x140A65B50 (PspAssociateCompletionPortCallback.c)
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
