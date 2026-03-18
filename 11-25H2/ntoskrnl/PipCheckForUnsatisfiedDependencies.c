/*
 * XREFs of PipCheckForUnsatisfiedDependencies @ 0x140832AB0
 * Callers:
 *     PipAttemptDependentStart @ 0x140712470 (PipAttemptDependentStart.c)
 *     PnpCheckForActiveDependencies @ 0x14083248C (PnpCheckForActiveDependencies.c)
 * Callees:
 *     PiEnumerateProviderListEntry @ 0x140712264 (PiEnumerateProviderListEntry.c)
 *     PipIsProviderStarted @ 0x140712750 (PipIsProviderStarted.c)
 */

char __fastcall PipCheckForUnsatisfiedDependencies(__int64 a1)
{
  char v1; // r11
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 *v4; // rbx

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 && (v3 = *(_QWORD *)(*(_QWORD *)(v2 + 312) + 80LL)) != 0 )
    v4 = (__int64 *)(v3 + 16);
  else
    v4 = &PiDependencyNodeEmptyList;
  if ( (__int64 *)*v4 != v4 )
  {
    PiEnumerateProviderListEntry(*v4);
    return 1;
  }
  return v1;
}
