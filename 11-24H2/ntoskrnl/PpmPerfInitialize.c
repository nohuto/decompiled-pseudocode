/*
 * XREFs of PpmPerfInitialize @ 0x140C30834
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x1407476B8 (PopInitializeTimer.c)
 */

__int64 PpmPerfInitialize()
{
  __int64 v0; // rcx
  _BYTE *v1; // rax
  int v2; // ecx
  unsigned int v3; // eax
  int v4; // eax
  unsigned int v5; // ecx
  __int64 v6; // r8
  __int64 *v7; // r10
  unsigned int v8; // r11d
  unsigned int v9; // r9d
  __int64 v10; // rdx

  qword_140FC6BF0 = (__int64)&PpmPerfDomainHead;
  v0 = 2LL;
  PpmPerfDomainHead = (__int64)&PpmPerfDomainHead;
  dword_140F06CEC = 50;
  dword_140F06ED4 = 50;
  v1 = &unk_140F06ED8;
  do
  {
    *(v1 - 488) = 1;
    *v1 = 1;
    *(v1 - 472) = 70;
    v1[16] = 70;
    *(v1 - 474) = 30;
    v1[14] = 30;
    *(v1 - 486) = 100;
    v1[2] = 100;
    *(v1 - 484) = 100;
    v1[4] = 100;
    *(v1 - 433) = 100;
    v1[55] = 100;
    *(v1 - 353) = 100;
    v1[135] = 100;
    ++v1;
    --v0;
  }
  while ( v0 );
  PpmMediaBufferingWork = 0LL;
  WorkItem.Parameter = 0LL;
  WorkItem.List.Flink = 0LL;
  PpmPerfLatencyBoostWorkItem.Parameter = 0LL;
  PpmPerfLatencyBoostWorkItem.List.Flink = 0LL;
  v2 = PpmPerfQosTransitionHysteresisOverride;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmMediaBufferingWorker;
  PpmPerfLatencyBoostWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmPerfLatencySensitivityHintWorker;
  v3 = PpmPerfQosTransitionHysteresisOverride;
  dword_140F06D0C = 100;
  dword_140F06EF4 = 100;
  if ( PpmPerfQosTransitionHysteresisOverride == -1 )
    v3 = PpmPerfQosTransitionHysteresis;
  dword_140F06D10 = 2;
  dword_140F06EF8 = 2;
  if ( v3 <= 0x1F4 )
  {
    v2 = 500;
  }
  else if ( PpmPerfQosTransitionHysteresisOverride == -1 )
  {
    v2 = PpmPerfQosTransitionHysteresis;
  }
  v4 = 5 * v2;
  v5 = 0;
  PpmPerfQosIdleExpirationTimeout = (unsigned int)(2 * v4);
  v6 = 0LL;
  v7 = PpmQosClassesOrderedIndexMap;
  do
  {
    v8 = *(_DWORD *)v7;
    v9 = 0;
    v10 = 0LL;
    do
    {
      if ( v8 > *((_DWORD *)PpmQosClassesOrderedIndexMap + v10) )
        PpmPerfQosHysteresis[v6 + v10] = 1;
      if ( v5 == 3 )
        PpmPerfQosHysteresis[v6 + v10] = 1;
      if ( v9 == 3 )
      {
        if ( v5 == 4 )
          goto LABEL_23;
        if ( v5 )
          PpmPerfQosHysteresis[v6 + v10] = 1;
      }
      else
      {
        if ( v9 == 4 )
          PpmPerfQosHysteresis[v6 + v10] = 1;
        if ( v5 == 4 )
LABEL_23:
          PpmPerfQosHysteresis[v6 + v10] = 0;
      }
      ++v9;
      ++v10;
    }
    while ( v9 < 7 );
    ++v5;
    v7 = (__int64 *)((char *)v7 + 4);
    v6 += 7LL;
  }
  while ( v5 < 7 );
  return PopInitializeTimer(
           (__int64)&PpmPerfTelemetryTimer,
           (__int64)PpmPerfTelemetryCallback,
           0LL,
           (__int64)PpmPerfTelemetryWorker,
           0LL);
}
