/*
 * XREFs of KiSrcuNotifyWorkerSelectAndQueue @ 0x1405C15C4
 * Callers:
 *     KeSrcuFree @ 0x1405C0B50 (KeSrcuFree.c)
 *     KiSrcuNotifyGracePeriodStarted @ 0x1405C124C (KiSrcuNotifyGracePeriodStarted.c)
 *     KiSrcuNotifyWorkerDpcRoutine @ 0x1405C14C0 (KiSrcuNotifyWorkerDpcRoutine.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KeSignalGate @ 0x14030AB68 (KeSignalGate.c)
 */

char __fastcall KiSrcuNotifyWorkerSelectAndQueue(PVOID SystemArgument1, _DWORD *a2)
{
  unsigned int v4; // ecx
  signed __int32 v5; // eax
  __int64 v6; // rdx

  while ( 1 )
  {
    v4 = *((_DWORD *)SystemArgument1 + 17);
    if ( !v4 )
    {
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)SystemArgument1 + 18, 0, 1);
      if ( v5 != 1 )
        break;
      v4 = *((_DWORD *)SystemArgument1 + 17);
      if ( !v4 )
        break;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)SystemArgument1 + 18, 1, 0);
      if ( v5 )
        break;
    }
    _BitScanForward(&v4, v4);
    v6 = v4 + *((_DWORD *)SystemArgument1 + 16);
    if ( (unsigned int)v6 < KeMaximumProcessors && KiProcessorBlock[v6] )
    {
      if ( !*((_QWORD *)SystemArgument1 + 7) )
        *((_WORD *)SystemArgument1 + 1) = v4 + *((_WORD *)SystemArgument1 + 32) + 2048;
      LOBYTE(v5) = KeInsertQueueDpc((PRKDPC)SystemArgument1, SystemArgument1, a2);
      return v5;
    }
    _InterlockedAnd((volatile signed __int32 *)SystemArgument1 + 17, ~(1 << v4));
  }
  if ( a2 )
    LOBYTE(v5) = KeSignalGate(a2, 0LL);
  return v5;
}
