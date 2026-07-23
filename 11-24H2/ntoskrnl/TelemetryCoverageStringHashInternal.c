/*
 * XREFs of TelemetryCoverageStringHashInternal @ 0x1404C3E84
 * Callers:
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x14064DD30 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     EtwpCoverageReset @ 0x1407AB2EC (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x1407AB4F4 (EtwpCoverageResetCP.c)
 *     DbgkForwardException @ 0x1408F32F0 (DbgkForwardException.c)
 *     PsSetProcessFaultInformation @ 0x140A55880 (PsSetProcessFaultInformation.c)
 *     EtwpCoverageProvEnableCallback @ 0x140A804A0 (EtwpCoverageProvEnableCallback.c)
 *     PopTransitionTelemetryOsState @ 0x140A80E74 (PopTransitionTelemetryOsState.c)
 *     EtwpCoverageEnsureContext @ 0x140ADAD8C (EtwpCoverageEnsureContext.c)
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
