/*
 * XREFs of ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z @ 0x1800A330C
 * Callers:
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV?$function@$$A6AXXZ@std@@@Z @ 0x1800A3448 (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?StartShowAnimation@?$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@impl@winrt@@UEAAHXZ @ 0x180104760 (-StartShowAnimation@-$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserRes.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x18010A900 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x1800279CC (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ @ 0x1800A31EC (-RegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x1800A3698 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 */

__int64 __fastcall CAcrylicSheet::StartAlphaAnimation(CAcrylicSheet *this, float a2, float a3, float a4)
{
  __int64 v4; // rax
  bool v6; // zf
  char v7; // al
  __int64 v8; // rax
  _QWORD *v9; // r8
  int v10; // esi
  unsigned int v11; // eax

  v4 = *((_QWORD *)this + 69);
  if ( v4 )
  {
    v6 = (*(_DWORD *)(v4 + 8))-- == 1;
    v7 = CDesktopManager::s_fTimelineDirty;
    if ( v6 )
      v7 = 1;
    CDesktopManager::s_fTimelineDirty = v7;
  }
  v8 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         120LL);
  if ( !v8 )
  {
    *((_QWORD *)this + 69) = 0LL;
    goto LABEL_10;
  }
  CTimelineBase::CTimelineBase(v8, a4, a2, a3, 0);
  *v9 = &CTimeline<float>::`vftable';
  *((_QWORD *)this + 69) = v9;
  if ( !v9 )
  {
LABEL_10:
    v10 = -2147024882;
    v11 = 726;
    goto LABEL_11;
  }
  *((float *)this + 136) = a2;
  *((float *)this + 137) = a3;
  v10 = CAcrylicSheet::RegisterGlobalTimer(this);
  if ( v10 < 0 )
  {
    v11 = 731;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, v11);
    CAcrylicSheet::StopAnimations(this);
  }
  return (unsigned int)v10;
}
