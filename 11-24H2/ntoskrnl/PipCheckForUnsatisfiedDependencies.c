/*
 * XREFs of PipCheckForUnsatisfiedDependencies @ 0x1409BDC54
 * Callers:
 *     PipAttemptDependentStart @ 0x14071C100 (PipAttemptDependentStart.c)
 *     PnpCheckForActiveDependencies @ 0x1409BDBB4 (PnpCheckForActiveDependencies.c)
 * Callees:
 *     PiEnumerateProviderListEntry @ 0x14071BEF4 (PiEnumerateProviderListEntry.c)
 *     PipIsProviderStarted @ 0x14071C3E0 (PipIsProviderStarted.c)
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
