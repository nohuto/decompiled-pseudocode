/*
 * XREFs of ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180016C00
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18001671C (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180046D50 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18004DD50 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateScene@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAVCVisual@@@Z @ 0x18006ED00 (-UpdateScene@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z @ 0x180016CD0 (-SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180016EF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18004D89C (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::UpdateSceneImpl(CDesktopManager *this, struct CVisual *a2)
{
  CDesktopManager *v2; // rbx
  int v3; // ebp
  struct CWindowData ***v4; // rdi
  struct CWindowData ***v5; // rsi
  int v7; // eax

  v2 = CDesktopManager::s_pDesktopManagerInstance;
  v3 = (*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 64LL))(a2);
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x6E6u, 0LL);
  }
  else
  {
    v4 = (struct CWindowData ***)*((_QWORD *)v2 + 54);
    v5 = v4 + 35;
    while ( *((_DWORD *)v4 + 76) )
      CWindowList::ImmediateDestroySprite((CWindowList *)v4, **v5);
    *((_DWORD *)v4 + 76) = 0;
    DynArrayImpl<0>::ShrinkToSize(v5, 8LL);
    if ( !*((_BYTE *)v2 + 18) )
    {
      if ( *((_DWORD *)v2 + 136) )
      {
        if ( !*((_BYTE *)v2 + 19) )
        {
          *((_BYTE *)v2 + 19) = 1;
          v7 = CDesktopManager::SendRoundTripRequest(v2, 0LL);
          v3 = v7;
          if ( v7 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x6F7u, 0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
