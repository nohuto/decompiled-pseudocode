/*
 * XREFs of HUBDSM_SuspendingPortOnPortEnabledInPendingHubSuspend @ 0x1400216A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDSM_SuspendingPortOnPortEnabledInPendingHubSuspend(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 8LL) + 1240LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 8LL),
    3031LL);
  return 1000LL;
}
