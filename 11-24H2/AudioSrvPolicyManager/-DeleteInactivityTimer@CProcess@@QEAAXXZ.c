/*
 * XREFs of ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x180012624
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180011B50 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnProcessCategoryDowngraded@CApplicationManager@@QEAAXPEAVCProcess@@@Z @ 0x180041434 (-OnProcessCategoryDowngraded@CApplicationManager@@QEAAXPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008880 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     WPP_SF_d @ 0x18002B464 (WPP_SF_d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProcess::DeleteInactivityTimer(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx

  v2 = this + 8;
  EnterCriticalSection(this + 8);
  if ( this[9].DebugInfo )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        40LL,
        &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids,
        LODWORD(this[4].DebugInfo));
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, PRTL_CRITICAL_SECTION_DEBUG, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      this[9].DebugInfo,
      0LL,
      0LL,
      0);
    (*(void (__fastcall **)(struct CAudioThreadPool *, PRTL_CRITICAL_SECTION_DEBUG, __int64))(*(_QWORD *)ThreadPool
                                                                                            + 32LL))(
      ThreadPool,
      this[9].DebugInfo,
      1LL);
    (*(void (__fastcall **)(struct CAudioThreadPool *, PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)ThreadPool + 16LL))(
      ThreadPool,
      this[9].DebugInfo);
    this[9].DebugInfo = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)this);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
