/*
 * XREFs of ?AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180289FB8
 * Callers:
 *     ?AppendRenderCommand@CDrawListEntryBatch@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180108A2C (-AppendRenderCommand@CDrawListEntryBatch@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_del.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800454A4 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@$$QEAV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180054510 (-AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINT.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x180054AF0 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ?MatchEffectToHomogeneousLayer@CBatchOptimizer@@CA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@AEBUSharedStateLayer@@PEAVCRenderingEffect@@@Z @ 0x1800D8400 (-MatchEffectToHomogeneousLayer@CBatchOptimizer@@CA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnc.c)
 *     ?ReturnBatchCommand@CDrawListBatchManager@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180139A10 (-ReturnBatchCommand@CDrawListBatchManager@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_de.c)
 *     ?ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x180188170 (-ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x180188720 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?GetWorldBounds@CRenderingBatchCommand@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18019FA20 (-GetWorldBounds@CRenderingBatchCommand@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?CanTunnelToLayer@CBatchOptimizer@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@HPEAH@Z @ 0x1801AD9B0 (-CanTunnelToLayer@CBatchOptimizer@@AEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAN.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x1801B21D0 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 *     ?MatchStateToHomogeneousLayer@CBatchOptimizer@@CA_NAEBUSharedStateLayer@@AEBUStateBlock@2@@Z @ 0x1801B2B40 (-MatchStateToHomogeneousLayer@CBatchOptimizer@@CA_NAEBUSharedStateLayer@@AEBUStateBlock@2@@Z.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801BCE10 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?GetRenderingEffect@CRenderingBatchCommand@@QEBAPEAVCRenderingEffect@@XZ @ 0x1801C3620 (-GetRenderingEffect@CRenderingBatchCommand@@QEBAPEAVCRenderingEffect@@XZ.c)
 *     ?SkipContinuations@CBatchOptimizer@@AEBAHH@Z @ 0x1801C8770 (-SkipContinuations@CBatchOptimizer@@AEBAHH@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

char __fastcall CBatchOptimizer::AddRenderingCommand(CBatchOptimizer *this, int **a2, __int64 a3, __int64 a4)
{
  char v4; // di
  int *v7; // r13
  int *v8; // rcx
  int v9; // r14d
  int v10; // esi
  char *v11; // r15
  char v12; // r11
  int v13; // ecx
  unsigned int (__fastcall ***RenderingEffect)(CMILRefCountImpl *__hidden); // rax
  __int64 *matched; // rax
  volatile signed __int32 *v16; // rax
  int v18; // [rsp+34h] [rbp-2Ch] BYREF
  __int64 v19; // [rsp+38h] [rbp-28h] BYREF
  unsigned int (__fastcall ***v20)(CMILRefCountImpl *__hidden); // [rsp+40h] [rbp-20h] BYREF
  __int128 v21; // [rsp+48h] [rbp-18h] BYREF

  v4 = 0;
  v19 = 0LL;
  if ( !*((_DWORD *)this + 8) )
    CBatchOptimizer::AppendLayer(this);
  if ( !CBatchCommand::ApplyRenderState((struct CHwLightCollectionBuffer **)*a2, this, a3, a4) )
  {
    CDrawListBatchManager::ReturnBatchCommand(*((_QWORD *)this + 1), a2);
    goto LABEL_25;
  }
  v7 = *a2;
  v8 = *a2;
  v21 = 0LL;
  CRenderingBatchCommand::GetWorldBounds((__int64)v8, (__int64)&v21);
  v9 = *((_DWORD *)this + 8);
  v10 = 0;
  if ( !v9 )
    goto LABEL_23;
  while ( 1 )
  {
    v10 = CBatchOptimizer::SkipContinuations(this, v10);
    v18 = v10;
    v11 = (char *)this + 520 * *((int *)this + v10 + 12);
    if ( CBatchOptimizer::MatchStateToHomogeneousLayer(
           (const struct SharedStateLayer *)(v11 + 80),
           (CBatchOptimizer *)((char *)this + 16)) )
    {
      if ( v12 )
      {
        if ( !CBatchOptimizer::CanTunnelToLayer((__int64)this, (float *)&v21, v9, &v18) )
        {
          v13 = *((_DWORD *)this + 8);
          v10 = v18;
          if ( v18 == v13 - 1
            && *((_BYTE *)this + 4240)
            && v13 == 8
            && *((_DWORD *)this + 130 * *((int *)this + v18 + 12) + 25) == 1
            && CBatchOptimizer::TryMergeOneLayer(this) )
          {
            v9 = *((_DWORD *)this + 8);
            v10 = v9 - 1;
          }
          goto LABEL_18;
        }
        v10 = v18;
      }
      RenderingEffect = (unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden))CRenderingBatchCommand::GetRenderingEffect((CRenderingBatchCommand *)v7);
      matched = (__int64 *)CBatchOptimizer::MatchEffectToHomogeneousLayer(&v20, (__int64)(v11 + 80), RenderingEffect);
      wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(&v19, matched);
      wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v20);
      if ( v19 )
        break;
    }
    ++v10;
LABEL_18:
    if ( v10 == v9 )
      goto LABEL_22;
  }
  if ( !*((_DWORD *)v11 + 25) )
  {
    *((_DWORD *)v11 + 22) = *((_DWORD *)this + 6);
    v11[92] = *((_BYTE *)this + 28);
  }
LABEL_22:
  if ( v10 == v9 )
  {
LABEL_23:
    v16 = (volatile signed __int32 *)CRenderingBatchCommand::GetRenderingEffect((CRenderingBatchCommand *)v7);
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=((volatile signed __int32 **)&v19, v16);
    CBatchOptimizer::AppendLayer(this);
    v10 = *((_DWORD *)this + 8) - 1;
  }
  CBatchOptimizer::AppendEntryToLayer(this, v10, &v21, (__int64 *)a2, (_BYTE **)&v19);
  v4 = 1;
LABEL_25:
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>(&v19);
  return v4;
}
