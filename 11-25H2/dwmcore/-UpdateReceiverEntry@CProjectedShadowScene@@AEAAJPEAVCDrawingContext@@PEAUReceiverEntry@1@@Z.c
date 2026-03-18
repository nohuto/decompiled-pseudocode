/*
 * XREFs of ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x18011C0BC
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18011B580 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800CC200 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18011BB88 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ @ 0x18011BF44 (-IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ.c)
 *     ?GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEBAPEAVCBrush@@XZ @ 0x18011C02C (-GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEBAPEAVCBrush@@XZ.c)
 *     ?IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1@@Z @ 0x1801E97AC (-IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z @ 0x1801E9DA4 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@.c)
 *     ?DiscardCachesForReceiver@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x18025B5BC (-DiscardCachesForReceiver@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadowScene::UpdateReceiverEntry(
        CProjectedShadowScene *this,
        struct CDrawingContext *a2,
        CProjectedShadowReceiver **a3)
{
  CProjectedShadowReceiver *v3; // rbp
  const struct CVisualTree *v6; // r15
  unsigned int v8; // esi
  CVisual *v9; // r14
  __int64 v10; // rax
  __int64 v11; // r12
  struct CBrush *EffectiveMaskBrush; // rax
  __int64 v13; // rdx
  int v15; // eax
  __int128 v16; // [rsp+30h] [rbp-58h] BYREF

  v3 = *a3;
  v6 = (const struct CVisualTree *)*((_QWORD *)a2 + 993);
  v8 = 0;
  v9 = (CVisual *)*((_QWORD *)*a3 + 9);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 200LL))(*((_QWORD *)this + 13));
  *((_BYTE *)a3 + 100) = 1;
  v11 = v10;
  v16 = 0LL;
  if ( !CProjectedShadowReceiver::IsEmptyMaskContent(v3)
    && CProjectedShadowScene::IsValidVisual((struct CVisual **)v6, v9) )
  {
    EffectiveMaskBrush = CProjectedShadowReceiver::GetEffectiveMaskBrush(v3);
    if ( (*(int (__fastcall **)(struct CBrush *, __int64, __int128 *))(*(_QWORD *)EffectiveMaskBrush + 184LL))(
           EffectiveMaskBrush,
           (__int64)v9 + 144,
           &v16) >= 0
      && (float)(*((float *)&v16 + 2) - *(float *)&v16) >= 0.5
      && (float)(*((float *)&v16 + 3) - *((float *)&v16 + 1)) >= 0.5 )
    {
      if ( (unsigned __int64)a3[3] >= *((_QWORD *)this + 14)
        && a3[3] >= (CProjectedShadowReceiver *)CVisual::FindTreeData(v9, v6)[28] )
      {
        return v8;
      }
      v15 = CVisual::CalcSrcToDestVisualTransform(v6, v13, v9, v11, a3 + 4);
      v8 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x302u, 0LL);
      }
      else
      {
        a3[3] = *(CProjectedShadowReceiver **)(*((_QWORD *)this + 3) + 888LL);
        if ( !CProjectedShadowScene::IsShadowInFrontOfReceiver(
                this,
                a2,
                (const struct CProjectedShadowScene::ReceiverEntry *)a3) )
        {
          *((_BYTE *)a3 + 100) = 0;
          goto LABEL_10;
        }
      }
      return v8;
    }
  }
  *((_BYTE *)a3 + 100) = 0;
LABEL_10:
  CProjectedShadowScene::DiscardCachesForReceiver(this, v3);
  return 0LL;
}
