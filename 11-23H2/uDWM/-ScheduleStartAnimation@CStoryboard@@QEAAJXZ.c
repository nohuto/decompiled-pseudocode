/*
 * XREFs of ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x1800074A8
 * Callers:
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x180014C18 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x180007998 (-_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x180007AD4 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x18005608C (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800560C0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x1800561B0 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ @ 0x1800B4B48 (-ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800D98E0 (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStoryboard::ScheduleStartAnimation(CStoryboard *this)
{
  unsigned int v2; // edi
  CAnimationEngine *v3; // rsi
  int v4; // r12d
  unsigned int v5; // r9d
  unsigned int v6; // edx
  __int64 v7; // r14
  __int64 v8; // r10
  unsigned int v9; // r8d
  int started; // eax
  int v12; // r15d
  unsigned int v13; // eax
  unsigned int v14; // [rsp+20h] [rbp-30h]
  __int128 v15; // [rsp+30h] [rbp-20h] BYREF
  int v16; // [rsp+40h] [rbp-10h]
  __int64 v17; // [rsp+44h] [rbp-Ch]
  __int64 v18; // [rsp+80h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+88h] [rbp+38h] BYREF

  v19 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = -2147467259;
  v3 = 0LL;
  if ( *((_DWORD *)this + 6) != 2 || !*((_DWORD *)this + 30) || (v3 = CDesktopManager::AcquireAnimationEngine()) == 0LL )
  {
LABEL_16:
    CStoryboard::Abandon(this);
    if ( !v3 )
      goto LABEL_13;
    goto LABEL_12;
  }
  v4 = *(_DWORD *)(*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 16LL))(this);
  v15 = 0LL;
  v16 = 0;
  v5 = 0;
  v17 = 0LL;
  v6 = 0;
  v7 = 0LL;
  if ( *((_DWORD *)this + 30) )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * v7) + 40LL);
      v18 = v8;
      v9 = v6 + 1;
      if ( v6 + 1 < v6 )
        break;
      if ( v9 > v5 )
      {
        v12 = DynArrayImpl<0>::AddMultipleAndSet(&v15, 8LL, 1LL, &v18);
        v2 = v12;
        if ( v12 < 0 )
        {
          v13 = 192;
          goto LABEL_20;
        }
        v6 = HIDWORD(v17);
        v5 = v17;
      }
      else
      {
        *(_QWORD *)(v15 + 8LL * v6++) = v8;
        HIDWORD(v17) = v9;
      }
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *((_DWORD *)this + 30) )
        goto LABEL_9;
    }
    v2 = -2147024362;
    v12 = -2147024362;
    v13 = 181;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, v13, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v12, 0x1650u, 0LL);
    goto LABEL_23;
  }
LABEL_9:
  started = CAnimationEngine::ScheduleStartAnimation(v3, v4);
  v2 = started;
  if ( started < 0 )
  {
    v14 = 5714;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, started, v14, 0LL);
LABEL_23:
    DynArrayImpl<0>::~DynArrayImpl<0>(&v15);
    goto LABEL_16;
  }
  *((_DWORD *)this + 6) = 3;
  CStoryboard::_LogStoryboardEvent(this);
  if ( (*(unsigned __int8 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 128LL))(this) )
  {
    started = CDesktopManager::ImmediateCancelLivePreview(CDesktopManager::s_pDesktopManagerInstance);
    v2 = started;
    if ( started < 0 )
    {
      v14 = 5719;
      goto LABEL_22;
    }
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(&v15);
  CStoryboard::_NotifyStoryboardState(this, 3LL);
  (*(void (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 40LL))(this);
LABEL_12:
  CAnimationEngine::Release(v3);
LABEL_13:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v19);
  return v2;
}
