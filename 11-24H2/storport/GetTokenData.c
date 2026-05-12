/*
 * XREFs of GetTokenData @ 0x140141D08
 * Callers:
 *     ParseAssignNamespace @ 0x14013D4F0 (ParseAssignNamespace.c)
 *     ParseBandMetadata @ 0x14013D640 (ParseBandMetadata.c)
 *     ParseLockingObjectInfo @ 0x14013D7F0 (ParseLockingObjectInfo.c)
 *     FindNamedToken @ 0x14013E6E4 (FindNamedToken.c)
 *     ParseGetTableColumnData @ 0x14013EA80 (ParseGetTableColumnData.c)
 *     ParseSyncSessionData @ 0x140140DC0 (ParseSyncSessionData.c)
 *     ParseTPerProperties @ 0x140140F20 (ParseTPerProperties.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTokenData(__int64 a1)
{
  __int64 v1; // rdx

  v1 = 0LL;
  if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 7) <= 0xA )
  {
    v1 = a1 + 16;
    if ( *(_DWORD *)(a1 + 12) > 8u )
      return *(_QWORD *)v1;
  }
  return v1;
}
