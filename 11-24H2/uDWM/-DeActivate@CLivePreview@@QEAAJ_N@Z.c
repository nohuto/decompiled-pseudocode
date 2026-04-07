/*
 * XREFs of ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x1800476AC
 * Callers:
 *     ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z @ 0x180045F00 (-ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z.c)
 *     ?DwmLivePreviewWndProc@CDesktopManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180079DF0 (-DwmLivePreviewWndProc@CDesktopManager@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x180027E44 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x1800478B4 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?_RemoveLauncherClones@CLivePreview@@AEAAJXZ @ 0x180047964 (-_RemoveLauncherClones@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x1800496A4 (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180055544 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1800865C8 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?IsLauncherVisible@CImmersiveState@@QEAA_NXZ @ 0x1800C6638 (-IsLauncherVisible@CImmersiveState@@QEAA_NXZ.c)
 */

__int64 __fastcall CLivePreview::DeActivate(CLivePreview *this, char a2)
{
  unsigned int v2; // edi
  int v5; // r8d
  int v6; // eax
  bool v7; // zf
  int v8; // eax
  __int64 v9; // rdx
  __int64 i; // rcx
  __int64 v11; // rax
  int v13; // eax
  CImmersiveState *v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v16[16]; // [rsp+38h] [rbp-20h] BYREF

  v2 = 0;
  v15 = 0LL;
  GetDesktopID(1LL, &v15);
  if ( *((_BYTE *)this + 240) )
  {
    if ( *((_DWORD *)this + 72) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
          (unsigned int)&UdwmLivePreviewAnimation_Start,
          v5,
          1,
          (__int64)v16);
      NotifyWinEvent(0x22u, *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 143), 0, 0);
    }
    v6 = CDesktopManager::EnableLivePreviewInputHooks(0, 0);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x3FCu, 0LL);
      goto LABEL_7;
    }
    v7 = *((_BYTE *)this + 242) == 0;
    *((_BYTE *)this + 241) = 1;
    if ( v7 )
    {
      v14 = (CImmersiveState *)*((_QWORD *)this + 60);
      if ( v14 && CImmersiveState::IsLauncherVisible(v14) && *((_QWORD *)this + 57) == *((_QWORD *)this + 56) )
        CLivePreview::_AnimateOpaqueVisuals(this);
    }
    else
    {
      v8 = CLivePreview::_RemoveLauncherClones(this);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x403u, 0LL);
        goto LABEL_7;
      }
    }
    v13 = CLivePreview::_FadeInToNormal(this);
    v2 = v13;
    if ( v13 >= 0 )
    {
      if ( v15 != *((_QWORD *)this + 31) || a2 )
        CTimelineBase::JumpToFinalValue(*((CTimelineBase **)this + 49));
      *((_BYTE *)this + 240) = 0;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x409u, 0LL);
    }
  }
LABEL_7:
  v9 = *((_QWORD *)this + 57);
  for ( i = *((_QWORD *)this + 56); i != v9; i += 8LL )
    *(_BYTE *)(*(_QWORD *)i + 742LL) &= ~2u;
  v11 = *((_QWORD *)this + 56);
  if ( v11 != *((_QWORD *)this + 57) )
    *((_QWORD *)this + 57) = v11;
  return v2;
}
