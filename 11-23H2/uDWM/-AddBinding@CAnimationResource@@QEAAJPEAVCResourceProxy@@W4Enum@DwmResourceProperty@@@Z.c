/*
 * XREFs of ?AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z @ 0x1800AB418
 * Callers:
 *     ?_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@PEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z @ 0x1800A7C8C (-_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@PEAVCResourceProxy@@W4.c)
 *     ?StartCrossfadeAnimation@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F815C (-StartCrossfadeAnimation@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x1800ABC70 (-_EnsureResources@CAnimationResource@@IEAAJXZ.c)
 *     McTemplateU0qqqp_EtwEventWriteTransfer @ 0x1800ABDC0 (McTemplateU0qqqp_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAnimationResource::AddBinding(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax

  v6 = CAnimationResource::_EnsureResources((CAnimationResource *)a1);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL)
                                                                                 + 16LL)
                                                                   + 656LL))(
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 16LL),
           *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 24LL),
           *(unsigned int *)(*(_QWORD *)(a2 + 16) + 24LL),
           a3);
    v7 = v8;
    if ( v8 >= 0 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0qqqp_EtwEventWriteTransfer(
          *(_QWORD *)(a2 + 16),
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 24LL),
          *(_DWORD *)(*(_QWORD *)(a2 + 16) + 24LL),
          a3,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 16LL));
      *(_QWORD *)(a1 + 72) = a2;
      *(_DWORD *)(a1 + 80) = a3;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x186u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x184u);
  }
  return v7;
}
