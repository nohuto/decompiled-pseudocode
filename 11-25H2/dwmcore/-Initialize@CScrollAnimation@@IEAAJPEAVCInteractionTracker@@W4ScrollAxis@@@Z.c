/*
 * XREFs of ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1800F0500
 * Callers:
 *     ?Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1800EFDD0 (-Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 *     ?Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z @ 0x1800F0738 (-Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z.c)
 * Callees:
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18005FFF0 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x1800F06A4 (-Stop@CScrollAnimation@@QEAAJXZ.c)
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTracker@@QEAAJPEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x1800F832C (-RegisterIndirectTargetsForBoundTrackers@CInteractionTracker@@QEAAJPEAVCBaseExpression@@W4Enum@I.c)
 *     ?GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z @ 0x18013AAB0 (-GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ?InsertMaskElement@VectorSubchannelMaskInfo@@QEAAJE@Z @ 0x1802BFC3C (-InsertMaskElement@VectorSubchannelMaskInfo@@QEAAJE@Z.c)
 */

__int64 __fastcall CScrollAnimation::Initialize(__int64 a1, int *a2, int a3)
{
  int v6; // r14d
  int WeakReference; // eax
  int v8; // edi
  unsigned int v9; // ebp
  int v10; // edi
  __int64 v11; // rax
  int inserted; // eax
  int v13; // eax
  unsigned int v14; // eax
  int v16; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int8 v17; // [rsp+44h] [rbp-34h]
  unsigned __int8 v18; // [rsp+48h] [rbp-30h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  struct IUnknownWeakRef *v20; // [rsp+98h] [rbp+20h] BYREF

  v17 = 0;
  v18 = 0;
  v20 = 0LL;
  v16 = 1;
  v6 = 0;
  WeakReference = CResource::GetWeakReference((CResource *)a2, &v20);
  if ( WeakReference < 0 )
    ModuleFailFastForHRESULT(WeakReference, retaddr);
  *(_QWORD *)(a1 + 336) = v20;
  *(_DWORD *)(a1 + 324) = a3;
  if ( a3 )
  {
    v8 = a3 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      v9 = 2;
    }
    else
    {
      v9 = 1;
      v6 = 1;
      inserted = VectorSubchannelMaskInfo::InsertMaskElement((VectorSubchannelMaskInfo *)&v16, 1u);
      if ( inserted < 0 )
        ModuleFailFastForHRESULT(inserted, retaddr);
    }
  }
  else
  {
    v9 = 1;
    v6 = 1;
    v13 = VectorSubchannelMaskInfo::InsertMaskElement((VectorSubchannelMaskInfo *)&v16, 0);
    if ( v13 < 0 )
      ModuleFailFastForHRESULT(v13, retaddr);
  }
  v10 = CBaseExpression::SetTarget(a1, a2[50], (__int64)a2, v9, 0x12u, v6, v17, v18);
  if ( v10 < 0 )
  {
    v14 = 106;
    goto LABEL_17;
  }
  v10 = CInteractionTracker::RegisterIndirectTargetsForBoundTrackers(a2, a1, v9);
  if ( v10 < 0 )
  {
    v14 = 115;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v14, 0LL);
    CScrollAnimation::Stop((CScrollAnimation *)a1);
    return (unsigned int)v10;
  }
  v11 = *(_QWORD *)(a1 + 24);
  v10 = 0;
  *(_BYTE *)(a1 + 352) |= 1u;
  *(_BYTE *)(*(_QWORD *)(v11 + 824) + 440LL) |= 2u;
  return (unsigned int)v10;
}
