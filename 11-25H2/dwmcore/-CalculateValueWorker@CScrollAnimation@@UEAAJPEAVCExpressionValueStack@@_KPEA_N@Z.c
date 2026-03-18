/*
 * XREFs of ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800F3BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushConstant@CExpressionValueStack@@QEAAJM@Z @ 0x180032430 (-PushConstant@CExpressionValueStack@@QEAAJM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@Z @ 0x1800F3CE8 (-CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1800F3D68 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1801348B0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

__int64 __fastcall CScrollAnimation::CalculateValueWorker(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  char *v4; // r12
  __int64 v5; // rsi
  struct CInteractionTracker *InteractionTracker; // rax
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v15; // r9
  int v16; // eax
  float v17; // [rsp+60h] [rbp+8h] BYREF
  int v18; // [rsp+68h] [rbp+10h] BYREF

  v17 = 0.0;
  v4 = (char *)this + 384;
  *a4 = 0;
  v5 = 0LL;
  *((_QWORD *)this + 45) = a2;
  *((_QWORD *)this + 46) = a3;
  while ( (int)v5 < *((_DWORD *)this + 102) - 1 )
  {
    v15 = *(_QWORD *)v4;
    v18 = 0;
    v16 = CScrollAnimation::CalculateValueForState(this, a2, a3, *(unsigned int *)(v15 + 4 * v5), &v18);
    v12 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0xF9u, 0LL);
      goto LABEL_6;
    }
    v5 = (unsigned int)(v5 + 1);
  }
  *((_DWORD *)v4 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(v4, 4LL);
  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  v11 = CScrollAnimation::CalculateValueForState(this, a2, a3, *((unsigned int *)InteractionTracker + 46), &v17);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x102u, 0LL);
  }
  else
  {
    v13 = CExpressionValueStack::PushConstant(a2, v17);
    v12 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x10Eu, 0LL);
  }
LABEL_6:
  *a4 = *((_BYTE *)this + 352) & 1;
  return v12;
}
