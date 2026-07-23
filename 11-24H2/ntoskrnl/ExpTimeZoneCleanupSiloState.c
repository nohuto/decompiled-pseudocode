/*
 * XREFs of ExpTimeZoneCleanupSiloState @ 0x1407B6DDC
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x140772B48 (PspDeleteExternalServerSiloState.c)
 * Callees:
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     KeFlushQueuedDpcs @ 0x14032C480 (KeFlushQueuedDpcs.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 */

__int64 __fastcall ExpTimeZoneCleanupSiloState(__int64 a1)
{
  bool v1; // di
  __int64 v2; // rbx

  v1 = 0;
  v2 = *((_QWORD *)PsGetServerSiloGlobals(a1) + 153);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 560) )
      v1 = KeCancelTimer((PKTIMER)(v2 + 512)) == 0;
    if ( *(_QWORD *)(v2 + 720) && !KeCancelTimer((PKTIMER)(v2 + 672)) )
      v1 = 1;
    if ( *(_QWORD *)(v2 + 880) && !KeCancelTimer((PKTIMER)(v2 + 832)) || v1 )
      KeFlushQueuedDpcs();
  }
  return 0LL;
}
