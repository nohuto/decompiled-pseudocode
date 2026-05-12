/*
 * XREFs of RtlStringCbCopyA @ 0x14006FC78
 * Callers:
 *     RaidAddATADeviceIdMapping @ 0x14006F10C (RaidAddATADeviceIdMapping.c)
 *     RaidAdapterStorageTcgResetState @ 0x14007DE48 (RaidAdapterStorageTcgResetState.c)
 *     RaidUnitStorageTcgResetState @ 0x14008277C (RaidUnitStorageTcgResetState.c)
 *     RaidActivateTcgLocking @ 0x14008A8E4 (RaidActivateTcgLocking.c)
 *     RaidAssignTcgNamespaceLockingObject @ 0x14008AC00 (RaidAssignTcgNamespaceLockingObject.c)
 *     RaidAssignTcgRangeLockingObject @ 0x14008AF58 (RaidAssignTcgRangeLockingObject.c)
 *     RaidDeassignTcgLockingObject @ 0x14008B9A8 (RaidDeassignTcgLockingObject.c)
 *     RaidEraseTcgLockingObject @ 0x14008BED4 (RaidEraseTcgLockingObject.c)
 *     RaidFillTcgAuthKey @ 0x14008C178 (RaidFillTcgAuthKey.c)
 *     RaidGetTcgLockingObject @ 0x14008CA20 (RaidGetTcgLockingObject.c)
 *     RaidGetTcgLockingObjectMetadata @ 0x14008CBA4 (RaidGetTcgLockingObjectMetadata.c)
 *     RaidGetTcgLockingObjects @ 0x14008CDB4 (RaidGetTcgLockingObjects.c)
 *     RaidGetTcgProperties @ 0x14008CF80 (RaidGetTcgProperties.c)
 *     RaidRefreshTcg @ 0x14008DD60 (RaidRefreshTcg.c)
 *     RaidRevertTcgConfiguration @ 0x14008DDF0 (RaidRevertTcgConfiguration.c)
 *     RaidSetTcgLockingObject @ 0x14008E140 (RaidSetTcgLockingObject.c)
 *     RaidSetTcgLockingObjectAuthKey @ 0x14008E3CC (RaidSetTcgLockingObjectAuthKey.c)
 *     RaidSetTcgLockingObjectMetadata @ 0x14008E5CC (RaidSetTcgLockingObjectMetadata.c)
 *     RaidSetTcgSpAuthorityKey @ 0x14008E83C (RaidSetTcgSpAuthorityKey.c)
 *     FillBufferWithDriverTelemetryDump @ 0x1400BD408 (FillBufferWithDriverTelemetryDump.c)
 *     NvmeControllerEssentialInitialize @ 0x1400ECE18 (NvmeControllerEssentialInitialize.c)
 *     NvmeControllerStoreSubsystemId @ 0x1400F559C (NvmeControllerStoreSubsystemId.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszSrc)
{
  size_t v3; // r9
  signed __int64 v4; // r8
  char v5; // al
  NTSTRSAFE_PSTR v6; // rax
  NTSTATUS result; // eax

  if ( cbDest - 1 > 0x7FFFFFFE )
  {
    result = -1073741811;
    if ( cbDest )
      *pszDest = 0;
  }
  else
  {
    v3 = 2147483646 - cbDest;
    v4 = pszSrc - pszDest;
    do
    {
      if ( !(v3 + cbDest) )
        break;
      v5 = pszDest[v4];
      if ( !v5 )
        break;
      *pszDest++ = v5;
      --cbDest;
    }
    while ( cbDest );
    v6 = pszDest - 1;
    if ( cbDest )
      v6 = pszDest;
    *v6 = 0;
    return cbDest == 0 ? 0x80000005 : 0;
  }
  return result;
}
