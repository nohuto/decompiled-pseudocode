/*
 * XREFs of ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D714C
 * Callers:
 *     ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x1800D7410 (-OnAnimationComplete@CScreenRotation@@UEAAJI@Z.c)
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800D7590 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18003CC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x18005608C (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800560C0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x1800561B0 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180058438 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800D6E9C (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CScreenRotation::MidDelayExpired(CScreenRotation *this)
{
  int LiveDesktopVisual; // eax
  int v3; // ebx
  CAnimationEngine *v4; // rsi
  int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned int v8; // edx
  int v9; // r14d
  unsigned int v10; // eax
  __int64 v11; // rax
  int started; // eax
  __int64 v13; // r8
  void *v14; // rdx
  unsigned int v16; // [rsp+20h] [rbp-50h]
  __int128 v17; // [rsp+30h] [rbp-40h] BYREF
  int v18; // [rsp+40h] [rbp-30h]
  unsigned int v19; // [rsp+44h] [rbp-2Ch]
  unsigned int v20; // [rsp+48h] [rbp-28h]
  _QWORD v21[2]; // [rsp+50h] [rbp-20h] BYREF

  v17 = 0LL;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  LiveDesktopVisual = CScreenRotation::CreateLiveDesktopVisual((struct CAnimatedTransitionVisual **)this);
  v3 = LiveDesktopVisual;
  if ( LiveDesktopVisual < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LiveDesktopVisual, 0x163u);
    goto LABEL_29;
  }
  v4 = CDesktopManager::AcquireAnimationEngine();
  if ( v4 )
  {
    v21[0] = *((_QWORD *)this + 40);
    v3 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v17, 8, 1, v21);
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0xC0u);
      v16 = 359;
      v5 = v3;
LABEL_8:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, v16);
      goto LABEL_28;
    }
    v6 = *((_QWORD *)this + 40);
    *(_DWORD *)(v6 + 736) = 76;
    *(_DWORD *)(v6 + 740) = 2;
    v7 = *((_QWORD *)this + 41);
    v21[0] = v7;
    v8 = v20 + 1;
    if ( v20 + 1 < v20 )
    {
      v3 = -2147024362;
      v9 = -2147024362;
      v10 = 181;
LABEL_19:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, v10);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x16Au);
LABEL_28:
      CAnimationEngine::Release(v4);
      goto LABEL_29;
    }
    if ( v8 > v19 )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v17, 8, 1, v21);
      v3 = v9;
      if ( v9 < 0 )
      {
        v10 = 192;
        goto LABEL_19;
      }
    }
    else
    {
      *(_QWORD *)(v17 + 8LL * v20) = v7;
      v20 = v8;
    }
    v11 = *((_QWORD *)this + 41);
    *(_DWORD *)(v11 + 736) = 76;
    *(_DWORD *)(v11 + 740) = 3;
    started = CAnimationEngine::ScheduleStartAnimation(v4, 76, (__int64)&v17, (unsigned int *)this + 92);
    v3 = started;
    if ( started >= 0 )
    {
      started = CAnimationEngine::RegisterForAnimationCompleteNotification(
                  v4,
                  (struct IAnimationListener *)(((unsigned __int64)this + 288) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
      v3 = started;
      if ( started >= 0 )
      {
        if ( *((_BYTE *)this + 388) )
        {
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
            goto LABEL_28;
          v14 = &UdwmHardwareExpression_PostDelayAnimation_Start;
        }
        else
        {
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
            goto LABEL_28;
          v14 = &UdwmScreenRotation_PostDelayAnimation_Start;
        }
        McGenEventWrite_EtwEventWriteTransfer(
          Microsoft_Windows_Dwm_Udwm_Provider_Context,
          (__int64)v14,
          v13,
          1LL,
          (__int64)v21);
        goto LABEL_28;
      }
      v16 = 368;
    }
    else
    {
      v16 = 367;
    }
    v5 = started;
    goto LABEL_8;
  }
  v3 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x165u);
LABEL_29:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v17);
  return (unsigned int)v3;
}
