/*
 * XREFs of PopQueueTargetDpc @ 0x1403702F0
 * Callers:
 *     PoGetIdleTimes @ 0x14036F560 (PoGetIdleTimes.c)
 *     PopExecuteOnTargetProcessors @ 0x140370234 (PopExecuteOnTargetProcessors.c)
 *     PopExecuteProcessorCallback @ 0x140370490 (PopExecuteProcessorCallback.c)
 *     PpmCapturePerformanceDistribution @ 0x14047A270 (PpmCapturePerformanceDistribution.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 */

BOOLEAN __fastcall PopQueueTargetDpc(PRKDPC Dpc, __int64 a2)
{
  unsigned __int16 **v2; // r9
  unsigned __int16 *v5; // r8
  unsigned int v6; // r11d
  unsigned __int64 v7; // rdi
  int v8; // ecx
  unsigned __int64 v9; // rdx
  int v10; // edx
  unsigned __int16 v12; // cx

  v2 = *(unsigned __int16 ***)(a2 + 32);
  v5 = (unsigned __int16 *)(v2 + 2);
  if ( *v2 )
    v6 = **v2;
  else
    v6 = *v5 + 1;
  while ( 1 )
  {
    v7 = (unsigned __int64)v2[1];
    v8 = *v5;
    if ( v7 )
      break;
    v12 = v8 + 1;
    *v5 = v12;
    if ( v12 >= v6 )
      return KeSetEvent(*(PRKEVENT *)(a2 + 24), 0, 0);
    v2[1] = *(unsigned __int16 **)&(*v2)[4 * v12 + 4];
  }
  _BitScanForward64(&v9, v7);
  v2[1] = (unsigned __int16 *)(v7 & ~(1LL << v9));
  v10 = *((_DWORD *)qword_140F22998 + 64 * v8 + (unsigned int)(unsigned __int8)v9);
  Dpc->DeferredRoutine = (PKDEFERRED_ROUTINE)PopExecuteProcessorCallback;
  Dpc->TargetInfoAsUlong = 787;
  Dpc->DeferredContext = (PVOID)a2;
  Dpc->DpcData = 0LL;
  Dpc->ProcessorHistory = 0LL;
  if ( !Dpc->DpcData )
    Dpc->Number = v10 + 2048;
  return KeInsertQueueDpc(Dpc, 0LL, 0LL);
}
