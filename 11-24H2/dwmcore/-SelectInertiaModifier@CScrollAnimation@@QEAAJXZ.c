/*
 * XREFs of ?SelectInertiaModifier@CScrollAnimation@@QEAAJXZ @ 0x1801EB994
 * Callers:
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1800E4B4C (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1800E42A8 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x18018ED9C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801EBA88 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScrollAnimation::SelectInertiaModifier(CScrollAnimation *this)
{
  struct CInteractionTracker *InteractionTracker; // rbx
  int v3; // eax
  __int64 (__fastcall ***v4)(_QWORD); // rbx
  unsigned int v5; // esi
  __int64 v6; // rsi
  __int64 (__fastcall ***v8)(_QWORD); // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v8);
  v3 = CInteractionTracker::SelectInertiaModifierForAxis(
         InteractionTracker,
         *((unsigned int *)this + 81),
         *((_QWORD *)this + 45),
         *((_QWORD *)this + 46),
         &v8);
  v4 = v8;
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x3A6u, 0LL);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 312LL))(this);
    if ( *(__int64 (__fastcall ****)(_QWORD))(v6 + 24) != v4 )
    {
      v8 = v4;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v8);
      v8 = *(__int64 (__fastcall ****)(_QWORD))(v6 + 24);
      *(_QWORD *)(v6 + 24) = v4;
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v8);
    }
    *((_BYTE *)this + 380) &= ~1u;
    v5 = 0;
  }
  if ( v4 )
    (*v4)[1](v4);
  return v5;
}
