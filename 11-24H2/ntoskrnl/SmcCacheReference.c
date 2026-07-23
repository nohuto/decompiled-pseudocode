/*
 * XREFs of SmcCacheReference @ 0x14079D438
 * Callers:
 *     SmcGetCacheStats @ 0x14079D74C (SmcGetCacheStats.c)
 *     SmcStoreCreate @ 0x14079D8F4 (SmcStoreCreate.c)
 *     SmcStoreDelete @ 0x14079DB54 (SmcStoreDelete.c)
 *     SmcStoreResize @ 0x14079DE40 (SmcStoreResize.c)
 *     SmcVolumePnpNotification @ 0x14079E450 (SmcVolumePnpNotification.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 */

__int64 __fastcall SmcCacheReference(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi

  v3 = 0LL;
  v4 = a1 + 32LL * (a2 & 0xF);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v4 + 8)) )
  {
    if ( (*(_DWORD *)(v4 + 24) & 0xFFF) == a2 >> 4 )
      return *(_QWORD *)v4;
    else
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v4 + 8));
  }
  return v3;
}
