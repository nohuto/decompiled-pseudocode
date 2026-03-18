/*
 * XREFs of ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEBUKeyframeData@@@Z @ 0x18029ECA4
 * Callers:
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x18023D804 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18023D924 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0KeyframeSequence@@QEAA@I@Z @ 0x180019C48 (--0KeyframeSequence@@QEAA@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAAXPEAVKeyframeSequence@@@Z @ 0x18017ED2C (-reset@-$unique_ptr@VKeyframeSequence@@U-$default_delete@VKeyframeSequence@@@std@@@std@@QEAAXPEA.c)
 *     ??1?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAA@XZ @ 0x18017ED5C (--1-$unique_ptr@VKeyframeSequence@@U-$default_delete@VKeyframeSequence@@@std@@@std@@QEAA@XZ.c)
 *     ?DetermineCoordinateSpace@CKeyframeAnimation@@CAJW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@PEAW4KeyframeAnimationCoordinateSpace@@@Z @ 0x1801E366C (-DetermineCoordinateSpace@CKeyframeAnimation@@CAJW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Composit.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18029E040 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 */

__int64 __fastcall CKeyframeAnimation::SetKeyFrameData(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned int v7; // edi
  KeyframeSequence *v8; // rax
  KeyframeSequence *v9; // rax
  int v10; // ecx
  int v11; // eax
  double v12; // xmm6_8
  unsigned int v13; // esi
  unsigned int v14; // r14d
  __int64 v15; // rcx
  int v16; // eax
  KeyframeSequence *v18; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v20; // [rsp+78h] [rbp+10h] BYREF

  if ( a2 < 2 )
  {
    *(_DWORD *)(a1 + 524) = a2;
    v8 = (KeyframeSequence *)DefaultHeap::AllocClear(0x90uLL);
    if ( !v8 )
      ModuleFailFastForHRESULT(0x8007000E, retaddr);
    v9 = KeyframeSequence::KeyframeSequence(v8, *(_DWORD *)(a1 + 492));
    v18 = 0LL;
    std::unique_ptr<KeyframeSequence>::reset((KeyframeSequence **)(a1 + 352), v9);
    std::unique_ptr<KeyframeSequence>::~unique_ptr<KeyframeSequence>(&v18);
    v10 = *(_DWORD *)(a1 + 160);
    v20 = 0;
    v11 = CKeyframeAnimation::DetermineCoordinateSpace(v10, a3, (int *)&v20);
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x25Cu, 0LL);
    }
    else
    {
      v12 = 0.0;
      v13 = 0;
      if ( *(_DWORD *)(a1 + 492) )
      {
        v14 = v20;
        while ( 1 )
        {
          if ( v13 )
          {
            v15 = v13;
            *(float *)&v12 = fmaxf(*(float *)&v12 + 0.001, *(float *)(a4 + 48LL * v13));
          }
          else
          {
            v12 = 0.0;
            v15 = 0LL;
          }
          v16 = CKeyframeAnimation::AddKeyframeData(a1, v13, v12, a4 + 48 * v15, v14);
          v7 = v16;
          if ( v16 < 0 )
            break;
          if ( ++v13 >= *(_DWORD *)(a1 + 492) )
            goto LABEL_12;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x275u, 0LL);
      }
      else
      {
LABEL_12:
        *(_QWORD *)(a1 + 448) = 0LL;
        *(_QWORD *)(a1 + 456) = 0LL;
        *(_QWORD *)(a1 + 464) = 0LL;
        *(_QWORD *)(a1 + 472) = 0LL;
        *(_DWORD *)(a1 + 484) = 0;
        *(_QWORD *)(a1 + 516) = 0LL;
      }
    }
  }
  else
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x24Fu, 0LL);
  }
  return v7;
}
