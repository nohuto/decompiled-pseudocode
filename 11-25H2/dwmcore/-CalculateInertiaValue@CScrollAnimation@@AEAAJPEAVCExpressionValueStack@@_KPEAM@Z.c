/*
 * XREFs of ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1800F2D70
 * Callers:
 *     ?CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@Z @ 0x1800F3CE8 (-CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@.c)
 * Callees:
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18003D85C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SelectInertiaModifier@CScrollAnimation@@QEAAJXZ @ 0x1800F1FBC (-SelectInertiaModifier@CScrollAnimation@@QEAAJXZ.c)
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1800F2EEC (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1800F3D68 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 *     ?CalculateCurrentElapsedTime@CScrollAnimation@@AEAAMXZ @ 0x1800F4210 (-CalculateCurrentElapsedTime@CScrollAnimation@@AEAAMXZ.c)
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x1800F46DC (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScrollAnimation::CalculateInertiaValue(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        float *a4)
{
  struct CInteractionTracker *InteractionTracker; // rax
  double CurrentValue; // xmm0_8
  __int64 (__fastcall *v9)(CScrollAnimation *, struct CExpressionValueStack *, unsigned __int64); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  float v16; // [rsp+50h] [rbp+8h] BYREF

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  v16 = 0.0;
  if ( *((_DWORD *)this + 80) == 1 )
  {
    v13 = CScrollAnimation::CalculateInContactValue(this, a2, a3, &v16);
    v11 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x2CDu, 0LL);
      return v11;
    }
    *(float *)&CurrentValue = v16;
  }
  else
  {
    CurrentValue = CInteractionTracker::GetCurrentValue((__int64)InteractionTracker, *((_DWORD *)this + 81));
    v16 = *(float *)&CurrentValue;
  }
  if ( *((_DWORD *)this + 80) == 2 )
  {
    if ( (*((_BYTE *)this + 352) & 4) != 0 )
      CScrollAnimation::StartInertia(this, *(float *)&CurrentValue, 1);
  }
  else
  {
    CScrollAnimation::StartInertia(this, *(float *)&CurrentValue, 0);
    v15 = CScrollAnimation::SelectInertiaModifier(this);
    v11 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x2E3u, 0LL);
      return v11;
    }
  }
  if ( (*((_BYTE *)this + 380) & 1) != 0 && (v14 = CScrollAnimation::SelectInertiaModifier(this), v11 = v14, v14 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x2F1u, 0LL);
  }
  else
  {
    v9 = *(__int64 (__fastcall **)(CScrollAnimation *, struct CExpressionValueStack *, unsigned __int64))(*(_QWORD *)this + 352LL);
    CScrollAnimation::CalculateCurrentElapsedTime(this);
    v10 = v9(this, a2, a3);
    v11 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x2F4u, 0LL);
    else
      return 0;
  }
  return v11;
}
