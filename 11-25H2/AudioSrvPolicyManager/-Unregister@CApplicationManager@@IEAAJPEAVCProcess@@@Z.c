/*
 * XREFs of ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001E320
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800082D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x180012160 (-RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     wil::details::lambda_call__lambda_7a265385352276fbe340bd9c396c3899___::_lambda_call__lambda_7a265385352276fbe340bd9c396c3899___ @ 0x180038DFC (wil--details--lambda_call__lambda_7a265385352276fbe340bd9c396c3899___--_lambda_call__lambda_7a26.c)
 *     PbmUnregisterAppClosureNotification @ 0x18003E330 (PbmUnregisterAppClosureNotification.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x18003E440 (PbmUnregisterPlaybackManagerNotifications.c)
 * Callees:
 *     ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x180019D10 (-CanBeRemoved@CProcess@@QEAAHXZ.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001A280 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180034568 (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::Unregister(CApplicationManager *this, struct CProcess *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  CApplication *v5; // rcx

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( a2 && (unsigned int)CProcess::CanBeRemoved(a2) )
  {
    v5 = (CApplication *)*((_QWORD *)a2 + 28);
    if ( v5 )
      CApplication::DelinkProcess(v5, a2);
    CApplicationManager::RemoveProcess(this, a2);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
