/*
 * XREFs of ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801BB26C
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800129B0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801BAE20 (-CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x18029FF40 (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800F3A90 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x1802A00E4 (-InitializeForces@CNaturalAnimation@@AEAAXXZ.c)
 *     ?SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1802A0AAC (-SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 *     ?SetStartTimeIfNecessary@CNaturalAnimation@@AEAAX_K@Z @ 0x1802A0D08 (-SetStartTimeIfNecessary@CNaturalAnimation@@AEAAX_K@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SetupAnimationIfNecessary(CNaturalAnimation *this)
{
  unsigned int v1; // edi
  int v4; // eax
  int v5; // ecx
  unsigned __int64 FrameTargetTime; // rax

  v1 = 0;
  if ( (*((_BYTE *)this + 572) & 1) == 0 )
  {
    v4 = CNaturalAnimation::SampleInitialValueAndFinalValueIfNecessary(this);
    v1 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x292u, 0LL);
      *((_BYTE *)this + 572) &= ~1u;
    }
    else
    {
      v5 = *((_DWORD *)this + 82);
      *(_QWORD *)((char *)this + 332) = *((_QWORD *)this + 40);
      *((_DWORD *)this + 85) = v5;
      CNaturalAnimation::InitializeForces(this);
      FrameTargetTime = CComposition::GetFrameTargetTime(*((CComposition **)this + 3));
      CNaturalAnimation::SetStartTimeIfNecessary(this, FrameTargetTime);
      *((_BYTE *)this + 572) = *((_BYTE *)this + 572) & 0xF6 | 1;
    }
  }
  return v1;
}
