/*
 * XREFs of ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x18001F300
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180011B50 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18001F420 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?OnProcessCategoryDowngraded@CApplicationManager@@QEAAXPEAVCProcess@@@Z @ 0x180041434 (-OnProcessCategoryDowngraded@CApplicationManager@@QEAAXPEAVCProcess@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplication::RemoveAudioPlaybackRestriction(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( *((_DWORD *)this + 155) == 5 )
  {
    *(_QWORD *)((char *)this + 620) = 0LL;
    *(_QWORD *)((char *)this + 628) = 0LL;
    *(_QWORD *)((char *)this + 636) = 0LL;
    *((_DWORD *)this + 161) = 1;
  }
  if ( v1 )
    LeaveCriticalSection(v1);
  return 0LL;
}
