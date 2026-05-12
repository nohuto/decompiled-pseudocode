/*
 * XREFs of PortpEnableCancel @ 0x1400367E4
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1401B5774 (PortPassThroughExSendAsync.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortpEnableCancel(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a1 + 68) )
    return 3221225760LL;
  if ( *(KDEFERRED_ROUTINE **)(a2 + 32) != NvmeAdapterFabricControllerQuiesceTimerDpcRoutine )
    *(_BYTE *)(*(_QWORD *)(a1 + 184) + 3LL) |= 1u;
  *(_QWORD *)(*(_QWORD *)(a1 + 184) + 32LL) = a2;
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), (__int64)PortpCancelRoutine);
  return 259LL;
}
