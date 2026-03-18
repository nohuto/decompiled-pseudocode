/*
 * XREFs of PiUEventReferenceEventEntry @ 0x1409ED5C8
 * Callers:
 *     PiUEventNotifyClient @ 0x1408D2838 (PiUEventNotifyClient.c)
 *     PiUEventNotifyUserMode @ 0x1409EEFC4 (PiUEventNotifyUserMode.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 */

__int64 __fastcall PiUEventReferenceEventEntry(__int64 a1)
{
  struct _FAST_MUTEX *v2; // rcx
  unsigned int v3; // ebx

  ExAcquireFastMutex(*(PKGUARDED_MUTEX *)(a1 + 16));
  v2 = *(struct _FAST_MUTEX **)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 56) + 1;
  *(_DWORD *)(a1 + 56) = v3;
  KeReleaseGuardedMutex(v2);
  return v3;
}
