/*
 * XREFs of RIMIDEIsCompatibleDevice @ 0x1401E6BC4
 * Callers:
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1401D3130 (RIMIDEAdoptOrphanedRimDevs.c)
 * Callees:
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1400C970C (rimIsExplicitRimUsagesMatchingUsages.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimInputTypeFromRimDev @ 0x1401D3F44 (rimInputTypeFromRimDev.c)
 */

__int64 __fastcall RIMIDEIsCompatibleDevice(_DWORD *a1, __int64 a2)
{
  int v4; // eax

  v4 = rimInputTypeFromRimDev(a2);
  if ( (v4 & a1[21]) == 0 )
    return 0LL;
  if ( v4 != 32 || a1[264] )
    return 1LL;
  if ( !a1[22] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2358);
  return rimIsExplicitRimUsagesMatchingUsages(
           (__int64)a1,
           *(_WORD *)(*(_QWORD *)(a2 + 448) + 16LL),
           *(_WORD *)(*(_QWORD *)(a2 + 448) + 18LL));
}
