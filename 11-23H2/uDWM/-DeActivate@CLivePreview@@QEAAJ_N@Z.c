/*
 * XREFs of ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x18001D5E4
 * Callers:
 *     ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z @ 0x18001D564 (-ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z.c)
 *     ?DwmLivePreviewWndProc@CDesktopManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1800B3D60 (-DwmLivePreviewWndProc@CDesktopManager@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180018D20 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x180021DF4 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18003CC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18005007C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x1800B42D4 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x1800C6B10 (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C705C (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x1800C8550 (-_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z.c)
 *     ?_RemoveLauncherClones@CLivePreview@@AEAAJXZ @ 0x1800C8824 (-_RemoveLauncherClones@CLivePreview@@AEAAJXZ.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x1800C9AA0 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 */

__int64 __fastcall CLivePreview::DeActivate(CLivePreview *this, char a2)
{
  unsigned int v4; // edi
  int v5; // r8d
  __int64 v6; // rdx
  __int64 i; // rcx
  int v9; // eax
  int v10; // r9d
  bool v11; // zf
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v16[16]; // [rsp+38h] [rbp-20h] BYREF

  v4 = 0;
  GetDesktopID(1LL, &v15);
  if ( !*((_BYTE *)this + 288) )
    goto LABEL_2;
  if ( *((_DWORD *)this + 84) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (unsigned int)&UdwmLivePreviewAnimation_Start,
        v5,
        1,
        (__int64)v16);
    NotifyWinEvent(0x22u, *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 77), 0, 0);
  }
  v9 = CDesktopManager::EnableLivePreviewInputHooks(0, 0);
  v4 = v9;
  if ( v9 < 0 )
  {
    v14 = 1022;
LABEL_11:
    v10 = v9;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v14, 0LL);
    goto LABEL_2;
  }
  v11 = *((_BYTE *)this + 290) == 0;
  *((_BYTE *)this + 289) = 1;
  if ( v11 )
  {
    v12 = *((_QWORD *)this + 66);
    if ( v12 && *(_BYTE *)(v12 + 56) && ((*((_QWORD *)this + 63) - *((_QWORD *)this + 62)) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
      CLivePreview::_AnimateOpaqueVisuals(this);
  }
  else
  {
    v9 = CLivePreview::_RemoveLauncherClones(this);
    v4 = v9;
    if ( v9 < 0 )
    {
      v14 = 1029;
      goto LABEL_11;
    }
  }
  *((_DWORD *)this + 140) = 4;
  CLivePreview::GetAnimationDuration(1LL);
  CLivePreviewTimeline::RestartTimeline(*((_QWORD *)this + 55));
  CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
  CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
  v13 = CLivePreview::_HideExistingVisuals(this, 0);
  v4 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x5FBu, 0LL);
    v10 = v4;
    v14 = 1035;
    goto LABEL_13;
  }
  if ( v15 != *((_QWORD *)this + 37) || a2 )
    CTimelineBase::JumpToFinalValue(*((CTimelineBase **)this + 55));
  *((_BYTE *)this + 288) = 0;
LABEL_2:
  v6 = *((_QWORD *)this + 63);
  for ( i = *((_QWORD *)this + 62); i != v6; i += 8LL )
    *(_BYTE *)(*(_QWORD *)i + 678LL) &= ~2u;
  *((_QWORD *)this + 63) = *((_QWORD *)this + 62);
  return v4;
}
