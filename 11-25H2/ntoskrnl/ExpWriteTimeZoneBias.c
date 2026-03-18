/*
 * XREFs of ExpWriteTimeZoneBias @ 0x1409942B0
 * Callers:
 *     ExInitializeUtcTimeZoneBias @ 0x1407A697C (ExInitializeUtcTimeZoneBias.c)
 *     ExpRefreshTimeZoneInformation @ 0x140993940 (ExpRefreshTimeZoneInformation.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
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
