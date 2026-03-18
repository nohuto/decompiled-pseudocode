/*
 * XREFs of ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z @ 0x18011B0B4
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18011B46C (-DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180130994 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 */

CProjectedShadowScene **__fastcall CVisual::RenderProjectedShadows(__int64 a1, struct CDrawingContext *a2, int a3)
{
  CProjectedShadowScene **result; // rax
  CProjectedShadowScene *v6; // rbp
  struct CProjectedShadowReceiver **i; // rdi
  struct CProjectedShadowReceiver *v8; // rsi
  CProjectedShadowScene **j; // rbx

  result = *(CProjectedShadowScene ***)(a1 + 232);
  if ( (*(_DWORD *)result & 0x40000) != 0 )
  {
    result = (CProjectedShadowScene **)CVisual::GetProjectedShadowReceivers(a1);
    v6 = result[1];
    for ( i = (struct CProjectedShadowReceiver **)*result; i != (struct CProjectedShadowReceiver **)v6; ++i )
    {
      v8 = *i;
      if ( *((_DWORD *)*i + 26) == a3 )
      {
        for ( j = (CProjectedShadowScene **)*((_QWORD *)v8 + 11); ; CProjectedShadowScene::DrawShadows(*j, a2, v8) )
        {
          result = j;
          if ( j == *((CProjectedShadowScene ***)v8 + 10) )
            break;
          --j;
        }
      }
    }
  }
  return result;
}
