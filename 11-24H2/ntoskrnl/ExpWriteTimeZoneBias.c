/*
 * XREFs of ExpWriteTimeZoneBias @ 0x140A7A0B8
 * Callers:
 *     ExInitializeUtcTimeZoneBias @ 0x1407B626C (ExInitializeUtcTimeZoneBias.c)
 *     ExpRefreshTimeZoneInformation @ 0x140A7981C (ExpRefreshTimeZoneInformation.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 */

__int64 __fastcall ExpWriteTimeZoneBias(_DWORD *a1)
{
  struct _LIST_ENTRY *v2; // rdx
  __int64 result; // rax

  if ( PsIsCurrentThreadInServerSilo() )
    v2 = PsGetCurrentServerSiloGlobals()[80].Blink + 37;
  else
    v2 = (struct _LIST_ENTRY *)(MmWriteableSharedUserData + 32);
  LODWORD(v2->Blink) = a1[1];
  LODWORD(v2->Flink) = *a1;
  result = (unsigned int)a1[1];
  HIDWORD(v2->Flink) = result;
  return result;
}
