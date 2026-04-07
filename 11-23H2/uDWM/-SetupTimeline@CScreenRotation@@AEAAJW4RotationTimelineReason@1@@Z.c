/*
 * XREFs of ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x1800D7A0C
 * Callers:
 *     ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x1800D7410 (-OnAnimationComplete@CScreenRotation@@UEAAJI@Z.c)
 *     ?Start@CScreenRotation@@QEAAJXZ @ 0x1800D7C00 (-Start@CScreenRotation@@QEAAJXZ.c)
 * Callees:
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180018D20 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?reset@?$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18001FF9C (-reset@-$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x1800279CC (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18003CC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x1800D6DA8 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 */

__int64 __fastcall CScreenRotation::SetupTimeline(__int64 a1, int a2)
{
  __int64 v4; // r8
  int v5; // ecx
  _QWORD *v6; // r8
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // r8
  char v10; // al
  void *v11; // rdx
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF

  CScreenRotation::CleanupTimeline((CScreenRotation *)a1);
  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         120LL);
  v13 = v4;
  if ( v4 )
  {
    v5 = 100;
    if ( a2 != 1 )
      v5 = 400;
    CTimelineBase::CTimelineBase(v4, (float)((float)v5 / 1000.0), 0.0, 1.0, 0);
    *v6 = &CTimeline<float>::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  *(_QWORD *)(a1 + 304) = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xFBu);
    return v7;
  }
  *(_DWORD *)(a1 + 312) = a2;
  v8 = CDesktopManager::RegisterForGlobalTimeChangeNotification((struct CVisual *)a1);
  v7 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xFFu);
    return v7;
  }
  v10 = *(_BYTE *)(a1 + 388);
  *(_BYTE *)(a1 + 296) = 1;
  if ( a2 == 1 )
  {
    if ( v10 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        v11 = &UdwmHardwareExpression_Delay_Start;
LABEL_22:
        McGenEventWrite_EtwEventWriteTransfer(
          Microsoft_Windows_Dwm_Udwm_Provider_Context,
          (__int64)v11,
          v9,
          1LL,
          (__int64)&v13);
      }
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v11 = &UdwmScreenRotation_Delay_Start;
      goto LABEL_22;
    }
  }
  else if ( v10 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v11 = &UdwmHardwareExpression_HintDelay_Start;
      goto LABEL_22;
    }
  }
  else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v11 = &UdwmScreenRotation_HintDelay_Start;
    goto LABEL_22;
  }
  if ( !*(_QWORD *)(a1 + 392) )
  {
    wil::com_ptr_t<IDCompositionAnimationStats,wil::err_returncode_policy>::reset((__int64 *)(a1 + 392));
    if ( (int)DCompositionCreateAnimationStats(a1 + 392) >= 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 392) + 24LL))(*(_QWORD *)(a1 + 392), 0LL);
  }
  return v7;
}
