/*
 * XREFs of ?zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1401F50FC
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400A2D78 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     xxxVideoPortCalloutThread @ 0x1401B08D4 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1401F4428 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ?_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1401F4E58 (-_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 */

void __fastcall CInputConfig::zzzOnDisplayStateChange(CInputConfig *this)
{
  __int64 UserSessionState; // rbx

  UserSessionState = W32GetUserSessionState(this);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(UserSessionState + 18696));
  if ( *((_BYTE *)this + 1504) )
    CInputConfig::_CreateLegacyInputSpace(this);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18696));
  CInputConfig::_zzzNotifyExternalComponents(this);
}
