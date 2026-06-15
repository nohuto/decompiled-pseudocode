/*
 * XREFs of ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180005980
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x1800032E0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x180004070 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180004110 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180004230 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x180004650 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180004B00 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@@Z @ 0x180035F00 (-RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x18000D3C0 (-GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA-AW4__MIDL___MIDL_itf_audio.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800206A4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D4AC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ForEachSession@UIAudioSessionPolicyControl@@@CProcess@@IEAAJ$$QEAV?$function@$$A6AXPEAUIAudioSessionPolicyControl@@PEA_N@Z@std@@@Z @ 0x180032180 (--$ForEachSession@UIAudioSessionPolicyControl@@@CProcess@@IEAAJ$$QEAV-$function@$$A6AXPEAUIAudio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProcess::RecalculateVolume(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // r12
  int v4; // eax
  _QWORD *v5; // rdx
  __int64 v6; // rsi
  _QWORD *v7; // rdi
  __int64 v8; // r14
  int SoundLevelForExtendedAudioCategory; // ebp
  unsigned int v10; // r15d
  _DWORD *v11; // rax
  void *v12; // rbx
  int v14; // [rsp+20h] [rbp-A8h]
  int v15[2]; // [rsp+20h] [rbp-A8h]
  _QWORD v16[7]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD *v17; // [rsp+78h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  int v19; // [rsp+D8h] [rbp+10h] BYREF

  v19 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v16[0] = off_180053C00;
  v16[1] = &v19;
  v17 = v16;
  v4 = CProcess::ForEachSession<IAudioSessionPolicyControl>(a1, v16);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDA9,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v4,
      v14);
  if ( v17 )
  {
    v5 = v16;
    LOBYTE(v5) = v17 != v16;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v17 + 32LL))(v17, v5);
  }
  v6 = *(_QWORD *)(a1 + 704);
  if ( v6 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 16));
    v7 = *(_QWORD **)(v6 + 64);
    while ( 1 )
    {
      v7 = (_QWORD *)*v7;
      if ( v7 == *(_QWORD **)(v6 + 64) )
        break;
      *(_QWORD *)v15 = v7[2];
      v8 = v7[3];
      SoundLevelForExtendedAudioCategory = AudioStateMonitorManager::GetSoundLevelForExtendedAudioCategory(
                                             v6,
                                             *(_QWORD *)v8,
                                             *(_QWORD *)(v8 + 8),
                                             *(_QWORD *)(v8 + 16));
      if ( **(_DWORD **)(v8 + 24) != SoundLevelForExtendedAudioCategory )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 128) + 40LL))(*(_QWORD *)(v6 + 128));
        v11 = operator new[](0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
        v12 = v11;
        if ( v11 )
        {
          *((_QWORD *)v11 + 2) = 0LL;
          *v11 = 32;
          v11[1] = 0x80000;
          *((_QWORD *)v11 + 1) = 0LL;
          *((_QWORD *)v11 + 3) = *(_QWORD *)v15;
          GenerateMediaEvent(v11, v10);
          operator delete(v12, (const struct std::nothrow_t *)0x20);
          **(_DWORD **)(v8 + 24) = SoundLevelForExtendedAudioCategory;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC2,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
            (const char *)0x8007000ELL,
            v15[0]);
        }
      }
    }
    if ( v6 != -16 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 16));
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return 0LL;
}
