/*
 * XREFs of ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x1800EA3E4
 * Callers:
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x1800EC420 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 * Callees:
 *     ?Create@CAccent@@SAJPEAPEAV1@@Z @ 0x180019150 (-Create@CAccent@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180019294 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTransitionVisualController::CreateBackground(const struct tagRECT *a1, struct CAccent **a2)
{
  int v4; // eax
  unsigned int v5; // edi
  const struct tagRECT *v6; // rdx
  volatile signed __int32 *v7; // rbx
  __m128i v9; // [rsp+30h] [rbp-18h] BYREF
  CBaseObject *v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  v4 = CAccent::Create(&v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = a1;
    v9.m128i_i32[2] = CAccent::s_clrCurrentAccentBackground;
    v7 = (volatile signed __int32 *)v10;
    v9.m128i_i32[0] = 1;
    CAccent::UpdateAccentPolicy(v10, v6, &v9, 0LL);
    *a2 = (struct CAccent *)v7;
    if ( !v7 )
      return v5;
    _InterlockedIncrement(v7 + 2);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v4,
      0x1CAu);
  }
  if ( v10 )
    CBaseObject::Release(v10);
  return v5;
}
