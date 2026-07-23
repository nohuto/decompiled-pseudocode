/*
 * XREFs of WheaSelLogInitialize @ 0x140C461E0
 * Callers:
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 * Callees:
 *     WheaSelLogSetNtSchedulerAvailability @ 0x140659D68 (WheaSelLogSetNtSchedulerAvailability.c)
 *     IpmiHwInitializeContext @ 0x1406A078C (IpmiHwInitializeContext.c)
 *     WheaSelLogCheckPoint @ 0x1407C6C10 (WheaSelLogCheckPoint.c)
 */

void __fastcall WheaSelLogInitialize(__int64 a1)
{
  WheaIpmiContextLock = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 240) + 3704LL) && (int)IpmiHwInitializeContext() >= 0 )
  {
    WheaSelLogSetNtSchedulerAvailability();
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x80000) != 0 )
      WheaSelLogCheckPoint();
  }
}
