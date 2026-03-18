/*
 * XREFs of ESM_WaitingForFSEAfterStopEndpointCommandCompletion @ 0x1400143C0
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEvent @ 0x1400130A4 (ESM_AddEvent.c)
 *     Endpoint_SM_Start2SecondTimer @ 0x140014490 (Endpoint_SM_Start2SecondTimer.c)
 */

__int64 __fastcall ESM_WaitingForFSEAfterStopEndpointCommandCompletion(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  _m_prefetchw((const void *)(v1 + 32));
  if ( (_InterlockedXor((volatile signed __int32 *)(v1 + 32), 8u) & 8) != 0 )
    ESM_AddEvent((KSPIN_LOCK *)(v1 + 296), 118);
  Endpoint_SM_Start2SecondTimer(v1);
  return 1000LL;
}
