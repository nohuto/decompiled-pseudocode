/*
 * XREFs of ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18001F540
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180002360 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x1800032E0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ??1CApplication@@MEAA@XZ @ 0x18003327C (--1CApplication@@MEAA@XZ.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180033F70 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAVCApplication@@@Z @ 0x18003A8EC (-OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAVCApplication@@@Z.c)
 * Callees:
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180003FF0 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x18001F420 (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     WPP_SF_S @ 0x180031C70 (WPP_SF_S.c)
 *     ?RemoveCategoryOverrideFromProcesses@CApplication@@IEAAXW4OverridePolicy@@@Z @ 0x180036790 (-RemoveCategoryOverrideFromProcesses@CApplication@@IEAAXW4OverridePolicy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::CleanupBCMStartupLatencyGracePeriod(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi

  v2 = this + 11;
  EnterCriticalSection(this + 11);
  if ( this[12].LockCount )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        30LL,
        &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids,
        this->LockSemaphore);
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, PRTL_CRITICAL_SECTION_DEBUG, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      this[12].DebugInfo,
      0LL,
      0LL,
      0);
    (*(void (__fastcall **)(struct CAudioThreadPool *, PRTL_CRITICAL_SECTION_DEBUG, __int64))(*(_QWORD *)ThreadPool
                                                                                            + 32LL))(
      ThreadPool,
      this[12].DebugInfo,
      1LL);
    this[12].LockCount = 0;
    if ( (unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)this) )
    {
      CApplication::RemoveAudioPlaybackRestriction((CApplication *)this);
      CApplication::RemoveCategoryOverrideFromProcesses(this);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
