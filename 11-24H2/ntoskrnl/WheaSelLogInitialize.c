/*
 * XREFs of WheaSelLogInitialize @ 0x140C44090
 * Callers:
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 * Callees:
 *     WheaSelLogSetNtSchedulerAvailability @ 0x14065B648 (WheaSelLogSetNtSchedulerAvailability.c)
 *     IpmiHwInitializeContext @ 0x14069F688 (IpmiHwInitializeContext.c)
 *     WheaSelLogCheckPoint @ 0x1407C67B0 (WheaSelLogCheckPoint.c)
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
