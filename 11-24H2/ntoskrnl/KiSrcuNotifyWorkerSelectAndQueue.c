/*
 * XREFs of KiSrcuNotifyWorkerSelectAndQueue @ 0x1405BEB94
 * Callers:
 *     KeSrcuFree @ 0x1405BE120 (KeSrcuFree.c)
 *     KiSrcuNotifyGracePeriodStarted @ 0x1405BE81C (KiSrcuNotifyGracePeriodStarted.c)
 *     KiSrcuNotifyWorkerDpcRoutine @ 0x1405BEA90 (KiSrcuNotifyWorkerDpcRoutine.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeSignalGate @ 0x140314A48 (KeSignalGate.c)
 */

void __fastcall KiSrcuNotifyWorkerSelectAndQueue(PVOID SystemArgument1, PVOID a2)
{
  unsigned int v4; // ecx
  __int64 v5; // rdx

  while ( 1 )
  {
    v4 = *((_DWORD *)SystemArgument1 + 17);
    if ( !v4 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)SystemArgument1 + 18, 0, 1) != 1 )
        break;
      v4 = *((_DWORD *)SystemArgument1 + 17);
      if ( !v4 || _InterlockedCompareExchange((volatile signed __int32 *)SystemArgument1 + 18, 1, 0) )
        break;
    }
    _BitScanForward(&v4, v4);
    v5 = v4 + *((_DWORD *)SystemArgument1 + 16);
    if ( (unsigned int)v5 < KeMaximumProcessors && KiProcessorBlock[v5] )
    {
      if ( !*((_QWORD *)SystemArgument1 + 7) )
        *((_WORD *)SystemArgument1 + 1) = v4 + *((_WORD *)SystemArgument1 + 32) + 2048;
      KeInsertQueueDpc((PRKDPC)SystemArgument1, SystemArgument1, a2);
      return;
    }
    _InterlockedAnd((volatile signed __int32 *)SystemArgument1 + 17, ~(1 << v4));
  }
  if ( a2 )
    KeSignalGate((volatile signed __int32 *)a2, 0LL);
}
