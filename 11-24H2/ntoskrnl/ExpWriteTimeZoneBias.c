/*
 * XREFs of ExpWriteTimeZoneBias @ 0x1409DCE5C
 * Callers:
 *     ExInitializeUtcTimeZoneBias @ 0x1407B5E1C (ExInitializeUtcTimeZoneBias.c)
 *     ExpRefreshTimeZoneInformation @ 0x1409DC59C (ExpRefreshTimeZoneInformation.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
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
