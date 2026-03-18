/*
 * XREFs of ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x1801EB39C
 * Callers:
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1802458F4 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 *     ?StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ @ 0x1802A8C20 (-StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKeyframeAnimation::UpdatePlaybackState(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  bool v5; // zf
  unsigned int v6; // ebx

  if ( *(_QWORD *)(a1 + 352) )
  {
    if ( a2 > 2 )
    {
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x2DCu, 0LL);
    }
    else
    {
      v5 = *(_DWORD *)(a1 + 516) == 0;
      *(_DWORD *)(a1 + 520) = a2;
      if ( v5 && a2 )
      {
        if ( a3 )
          a4 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 312LL) + 24LL))(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 312LL));
        *(_QWORD *)(a1 + 448) = a4;
        *(_QWORD *)(a1 + 456) = a4;
      }
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 824LL) + 440LL) |= 2u;
      return 0;
    }
  }
  else
  {
    v6 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x2D5u, 0LL);
  }
  return v6;
}
