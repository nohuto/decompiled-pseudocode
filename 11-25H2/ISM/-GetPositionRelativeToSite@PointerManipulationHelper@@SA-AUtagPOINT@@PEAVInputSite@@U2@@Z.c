/*
 * XREFs of ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x1801993BC
 * Callers:
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180148950 (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA_K6PEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@PEAPEAV8@@Z @ 0x180149D7C (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014A8E0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18014B864 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x18014BB74 (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z @ 0x18014BFE8 (-StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z.c)
 *     ?CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180151684 (-CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z @ 0x180152718 (-HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z.c)
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180152A0C (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 *     ?StartAnimation@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180153630 (-StartAnimation@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?ScreenPointToRelative@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1800996C4 (-ScreenPointToRelative@CInputTransform@@SA-AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetTransformFromRootToSite@PointerManipulationHelper@@SA?AUtagINPUT_TRANSFORM@@PEAVInputSite@@@Z @ 0x180199464 (-GetTransformFromRootToSite@PointerManipulationHelper@@SA-AUtagINPUT_TRANSFORM@@PEAVInputSite@@@.c)
 */

struct tagPOINT __fastcall PointerManipulationHelper::GetPositionRelativeToSite(
        struct InputSite *a1,
        struct tagPOINT a2)
{
  LONG x; // ebx
  __int128 *TransformFromRootToSite; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  float *v7; // rax
  __int128 v9[4]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v10[72]; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+B8h] [rbp+10h] BYREF
  char v12; // [rsp+C0h] [rbp+18h] BYREF

  v11 = (unsigned __int64)a2;
  x = a2.x;
  TransformFromRootToSite = (__int128 *)PointerManipulationHelper::GetTransformFromRootToSite(v10, a1);
  v4 = TransformFromRootToSite[1];
  v9[0] = *TransformFromRootToSite;
  v5 = TransformFromRootToSite[2];
  v9[1] = v4;
  v6 = TransformFromRootToSite[3];
  v9[2] = v5;
  v9[3] = v6;
  v11 = _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)x), (__m128)COERCE_UNSIGNED_INT((float)SHIDWORD(v11))).m128_u64[0];
  v7 = (float *)CInputTransform::ScreenPointToRelative((__int64)&v12, (float *)&v11, v9);
  return (struct tagPOINT)__PAIR64__((int)v7[1], (int)*v7);
}
