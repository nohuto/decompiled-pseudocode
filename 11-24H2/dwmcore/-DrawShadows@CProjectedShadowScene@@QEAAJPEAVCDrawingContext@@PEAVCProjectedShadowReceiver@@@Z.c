/*
 * XREFs of ?DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180207678
 * Callers:
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180082470 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z @ 0x1802075E8 (-RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x180168000 (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18016865C (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadowScene::DrawShadows(
        CProjectedShadowScene *this,
        struct CDrawingContext *a2,
        struct CProjectedShadowReceiver *a3)
{
  int v6; // eax
  unsigned int v7; // edi
  __int64 **ReceiverEntry; // rax
  _QWORD *v9; // rbx
  __int64 **v10; // rbp
  __int64 *v12; // rcx
  unsigned __int64 v13; // r8
  __int64 *v14; // rdx
  __int64 *v15; // rax
  int v16; // eax

  v6 = CProjectedShadowScene::PrepareShadows(this, a2, a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x397u, 0LL);
  }
  else
  {
    ReceiverEntry = CProjectedShadowScene::FindReceiverEntry(this, a3);
    v9 = (_QWORD *)*((_QWORD *)this + 9);
    v10 = ReceiverEntry;
    while ( 1 )
    {
      v9 = (_QWORD *)*v9;
      if ( v9 == *((_QWORD **)this + 9) )
        break;
      v12 = v10[1];
      v13 = v9[2];
      v14 = v12;
      v15 = (__int64 *)v12[1];
      if ( !*((_BYTE *)v15 + 25) )
      {
        do
        {
          if ( v15[4] < v13 )
          {
            v15 = (__int64 *)v15[2];
          }
          else
          {
            v12 = v15;
            v15 = (__int64 *)*v15;
          }
        }
        while ( !*((_BYTE *)v15 + 25) );
        v14 = v10[1];
      }
      if ( v12 != v14 && !*((_BYTE *)v12 + 25) && v13 >= v12[4] )
      {
        v16 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, __int64, _QWORD))(*(_QWORD *)v12[5] + 200LL))(
                v12[5],
                a2,
                *(_QWORD *)(v13 + 72) + 144LL,
                0LL);
        v7 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x3ACu, 0LL);
          return v7;
        }
      }
    }
  }
  return v7;
}
