/*
 * XREFs of ?Transpose@CMILMatrix@@QEAAXXZ @ 0x18015C8A8
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x18015C904 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 *     ?IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1@@Z @ 0x18016400C (-IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801ECAC8 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ?UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z @ 0x1801F932C (-UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z.c)
 *     ?FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVCMILMatrix@@AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180289180 (-FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVC.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Transpose(__m128 *this)
{
  __m128 v1; // xmm0
  __m128 v2; // xmm1
  __m128 v3; // xmm4
  __m128 v4; // xmm2
  __m128 v5; // xmm3
  __m128 v6; // xmm4
  __m128 v7; // xmm0
  __m128 v8; // xmm2

  v1 = this[1];
  v2 = this[3];
  v3 = *this;
  v4 = this[2];
  this[4].m128_i8[0] &= 3u;
  this[4].m128_i8[1] &= 0xC0u;
  v5 = _mm_shuffle_ps(v3, v1, 68);
  v6 = _mm_shuffle_ps(v3, v1, 238);
  v7 = _mm_shuffle_ps(v4, v2, 68);
  v8 = _mm_shuffle_ps(v4, v2, 238);
  *this = _mm_shuffle_ps(v5, v7, 136);
  this[1] = _mm_shuffle_ps(v5, v7, 221);
  this[2] = _mm_shuffle_ps(v6, v8, 136);
  this[3] = _mm_shuffle_ps(v6, v8, 221);
}
