/*
 * XREFs of ?HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800888A4
 * Callers:
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x180088628 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180304C40 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 * Callees:
 *     ?IsDeferredPositionValid@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180088944 (-IsDeferredPositionValid@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 */

char __fastcall CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewPositionInfo(RECT *this)
{
  BOOL v2; // eax
  char v3; // dl

  v2 = EqualRect(this, this + 1);
  v3 = 0;
  if ( !v2 )
    return CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::IsDeferredPositionValid((CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache *)this);
  return v3;
}
