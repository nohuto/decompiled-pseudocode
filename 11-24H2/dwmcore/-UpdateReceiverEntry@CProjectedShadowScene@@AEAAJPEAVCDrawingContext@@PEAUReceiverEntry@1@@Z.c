/*
 * XREFs of ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x180168028
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18016865C (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18009E420 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1@@Z @ 0x18016400C (-IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z @ 0x180164550 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@.c)
 *     ?IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ @ 0x180168558 (-IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ.c)
 *     ?GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEBAPEAVCBrush@@XZ @ 0x180168640 (-GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEBAPEAVCBrush@@XZ.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180168C64 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?DiscardCachesForReceiver@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x18024FFC4 (-DiscardCachesForReceiver@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadowScene::UpdateReceiverEntry(
        CProjectedShadowScene *this,
        struct CDrawingContext *a2,
        __m128 *a3)
{
  CProjectedShadowReceiver *v3; // rbp
  const struct CVisualTree *v6; // r15
  unsigned int v8; // esi
  CVisual *v9; // r14
  int v10; // eax
  int v11; // r12d
  struct CBrush *EffectiveMaskBrush; // rax
  __int64 v13; // rdx
  int v15; // eax
  __int128 v16; // [rsp+30h] [rbp-58h] BYREF

  v3 = (CProjectedShadowReceiver *)a3->m128_u64[0];
  v6 = (const struct CVisualTree *)*((_QWORD *)a2 + 993);
  v8 = 0;
  v9 = *(CVisual **)(a3->m128_u64[0] + 72);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 200LL))(*((_QWORD *)this + 13));
  a3[6].m128_i8[4] = 1;
  v11 = v10;
  v16 = 0LL;
  if ( !CProjectedShadowReceiver::IsEmptyMaskContent(v3) && CProjectedShadowScene::IsValidVisual(v6, v9) )
  {
    EffectiveMaskBrush = CProjectedShadowReceiver::GetEffectiveMaskBrush(v3);
    if ( (*(int (__fastcall **)(struct CBrush *, __int64, __int128 *))(*(_QWORD *)EffectiveMaskBrush + 184LL))(
           EffectiveMaskBrush,
           (__int64)v9 + 144,
           &v16) >= 0
      && (float)(*((float *)&v16 + 2) - *(float *)&v16) >= 0.5
      && (float)(*((float *)&v16 + 3) - *((float *)&v16 + 1)) >= 0.5 )
    {
      if ( a3[1].m128_u64[1] >= *((_QWORD *)this + 14)
        && a3[1].m128_u64[1] >= (unsigned __int64)CVisual::FindTreeData(v9, v6)[28] )
      {
        return v8;
      }
      v15 = CVisual::CalcSrcToDestVisualTransform((int)v6, v13, (__int64)v9, v11, (__int64)&a3[2]);
      v8 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x302u, 0LL);
      }
      else
      {
        a3[1].m128_u64[1] = *(_QWORD *)(*((_QWORD *)this + 3) + 888LL);
        if ( !CProjectedShadowScene::IsShadowInFrontOfReceiver(this, (ShadowHelpers **)a2, a3) )
        {
          a3[6].m128_i8[4] = 0;
          goto LABEL_10;
        }
      }
      return v8;
    }
  }
  a3[6].m128_i8[4] = 0;
LABEL_10:
  CProjectedShadowScene::DiscardCachesForReceiver(this, v3);
  return 0LL;
}
