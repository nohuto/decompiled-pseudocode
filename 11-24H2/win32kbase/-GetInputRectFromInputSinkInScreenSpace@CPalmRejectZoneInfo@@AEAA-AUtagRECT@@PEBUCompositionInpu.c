/*
 * XREFs of ?GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@PEBUCompositionInputObject@@U2@@Z @ 0x1402114D8
 * Callers:
 *     ?HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTelemetryData@@@Z @ 0x14021158C (-HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTe.c)
 * Callees:
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x14004758C (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?Convert3dTo2dMatrix@CPalmRejectZoneInfo@@AEAAJPEBUtagINPUT_TRANSFORM@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1402112C4 (-Convert3dTo2dMatrix@CPalmRejectZoneInfo@@AEAAJPEBUtagINPUT_TRANSFORM@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?TransformRect@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@U2@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x140211C58 (-TransformRect@CPalmRejectZoneInfo@@AEAA-AUtagRECT@@U2@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 */

struct tagRECT *__fastcall CPalmRejectZoneInfo::GetInputRectFromInputSinkInScreenSpace(
        CPalmRejectZoneInfo *this,
        struct tagRECT *__return_ptr retstr,
        const struct CompositionInputObject *a3,
        struct tagRECT *a4)
{
  CPalmRejectZoneInfo *v6; // rcx
  struct tagRECT v8; // [rsp+20h] [rbp-19h] BYREF
  __int128 v9; // [rsp+30h] [rbp-9h] BYREF
  int v10; // [rsp+40h] [rbp+7h]
  int v11; // [rsp+44h] [rbp+Bh]
  int v12; // [rsp+50h] [rbp+17h] BYREF
  __int128 v13; // [rsp+54h] [rbp+1Bh]
  int v14; // [rsp+64h] [rbp+2Bh]
  __int128 v15; // [rsp+68h] [rbp+2Fh]
  int v16; // [rsp+78h] [rbp+3Fh]
  __int128 v17; // [rsp+7Ch] [rbp+43h]
  int v18; // [rsp+8Ch] [rbp+53h]

  v12 = 1065353216;
  v14 = 1065353216;
  v16 = 1065353216;
  v18 = 1065353216;
  v13 = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  if ( a3 )
    CompositionInputObject::QueryTransform(a3, (struct tagINPUT_TRANSFORM *)&v12);
  v10 = 0;
  v11 = 0;
  v9 = _xmm;
  CPalmRejectZoneInfo::Convert3dTo2dMatrix(
    this,
    (const struct tagINPUT_TRANSFORM *)&v12,
    (struct D2D_MATRIX_3X2_F *)&v9);
  v8 = *a4;
  CPalmRejectZoneInfo::TransformRect(v6, retstr, &v8, (struct D2D_MATRIX_3X2_F *)&v9);
  return retstr;
}
