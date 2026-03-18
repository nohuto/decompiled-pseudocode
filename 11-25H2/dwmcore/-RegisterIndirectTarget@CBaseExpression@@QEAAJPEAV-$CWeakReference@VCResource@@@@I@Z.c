/*
 * XREFs of ?RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1800F78C8
 * Callers:
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x1800F835C (-RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractio.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertExpressionIntoTargetMap@CExpressionManager@@AEAAJAEAVCTargetMapEntry@@PEAVCBaseExpression@@PEAVSubchannelMaskInfo@@@Z @ 0x1801E51AC (-InsertExpressionIntoTargetMap@CExpressionManager@@AEAAJAEAVCTargetMapEntry@@PEAVCBaseExpression.c)
 *     ??$_Emplace_reallocate@AEAPEAV?$CWeakReference@VCResource@@@@AEAI@?$vector@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@V?$allocator@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@@2@@std@@AEAAPEAU?$pair@PEAV?$CWeakReference@VCResource@@@@I@1@QEAU21@AEAPEAV?$CWeakReference@VCResource@@@@AEAI@Z @ 0x180216B54 (--$_Emplace_reallocate@AEAPEAV-$CWeakReference@VCResource@@@@AEAI@-$vector@U-$pair@PEAV-$CWeakRe.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CBaseExpression::RegisterIndirectTarget(struct CBaseExpression *a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  CExpressionManager *v7; // rsi
  int inserted; // eax
  int v9; // edi
  void *v10; // rsi
  void *v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+38h] [rbp-30h]
  void *v16; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF
  int v19; // [rsp+80h] [rbp+18h] BYREF

  v19 = a3;
  v18 = a2;
  v3 = *((_QWORD *)a1 + 3);
  v16 = 0LL;
  v14 = a2;
  v15 = a3;
  v7 = *(CExpressionManager **)(v3 + 824);
  inserted = CExpressionManager::InsertExpressionIntoTargetMap(v7, (struct CTargetMapEntry *)&v14, a1, 0LL);
  v9 = inserted;
  if ( inserted < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, inserted, 0xD1u, 0LL);
  }
  else
  {
    *((_BYTE *)v7 + 440) |= 4u;
    v9 = 0;
  }
  v10 = v16;
  while ( v10 )
  {
    v11 = v10;
    v10 = (void *)*((_QWORD *)v10 + 2);
    operator delete(v11, 0x18uLL);
  }
  if ( v9 >= 0 )
  {
    v13 = *((_QWORD *)a1 + 37);
    if ( v13 == *((_QWORD *)a1 + 38) )
    {
      std::vector<std::pair<CWeakReference<CResource> *,unsigned int>>::_Emplace_reallocate<CWeakReference<CResource> * &,unsigned int &>(
        (char *)a1 + 288,
        v13,
        &v18,
        &v19);
    }
    else
    {
      *(_QWORD *)v13 = a2;
      *(_DWORD *)(v13 + 8) = a3;
      *((_QWORD *)a1 + 37) += 16LL;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x112,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\baseexpression.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
}
