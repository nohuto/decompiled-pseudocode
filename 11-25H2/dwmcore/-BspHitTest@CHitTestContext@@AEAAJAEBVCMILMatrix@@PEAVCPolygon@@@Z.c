/*
 * XREFs of ?BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z @ 0x1801F2F5C
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B5890 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x18010B7DC (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x1801F3018 (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHitTestContext::BspHitTest(
        const struct D2D_POINT_2F *this,
        const struct CMILMatrix *a2,
        struct CPolygon *a3)
{
  unsigned int v3; // ebx
  struct D2D_POINT_2F v7; // rsi
  const enum MilBackfaceVisibility::Enum *TopByReference; // rax
  const struct CMILMatrix *v9; // r8
  int v10; // eax
  bool v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  if ( !*(_QWORD *)&this[13] )
  {
    v7 = (struct D2D_POINT_2F)*((_QWORD *)a3 + 27);
    if ( (*(unsigned __int8 (__fastcall **)(struct D2D_POINT_2F))(**(_QWORD **)&v7 + 256LL))(v7) )
    {
      v12 = 0;
      TopByReference = (const enum MilBackfaceVisibility::Enum *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)&this[21]);
      v10 = CPolygon::HitTestWithTransformation(a3, this + 10, v9, a2, TopByReference, &v12);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x1A4u, 0LL);
      }
      else if ( v12 )
      {
        this[13] = v7;
      }
    }
  }
  return v3;
}
