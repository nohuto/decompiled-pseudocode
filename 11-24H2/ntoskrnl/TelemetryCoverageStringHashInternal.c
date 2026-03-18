/*
 * XREFs of TelemetryCoverageStringHashInternal @ 0x1404CA964
 * Callers:
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x14064F630 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     EtwpCoverageReset @ 0x1407AAE1C (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x1407AB024 (EtwpCoverageResetCP.c)
 *     EtwpCoverageEnsureContext @ 0x140903F90 (EtwpCoverageEnsureContext.c)
 *     DbgkForwardException @ 0x140938C20 (DbgkForwardException.c)
 *     PsSetProcessFaultInformation @ 0x14093B330 (PsSetProcessFaultInformation.c)
 *     EtwpCoverageProvEnableCallback @ 0x140A85960 (EtwpCoverageProvEnableCallback.c)
 *     PopTransitionTelemetryOsState @ 0x140A86334 (PopTransitionTelemetryOsState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TelemetryCoverageStringHashInternal(_BYTE *a1, _DWORD *a2)
{
  unsigned int v2; // r8d
  int v3; // r10d
  unsigned int v4; // r9d

  v2 = -2128831035;
  v3 = (int)a1;
  v4 = 1;
  while ( *a1 )
    v2 = (char)*a1++ + 16777619 * v2;
  *a2 = (_DWORD)a1 - v3;
  if ( v2 )
    return v2;
  return v4;
}
