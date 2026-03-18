/*
 * XREFs of ??$swap@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@$0A@@std@@YAXAEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@0@0@Z @ 0x180250214
 * Callers:
 *     ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x1801CC8B8 (-CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z.c)
 *     ?ReplaceSourceWorker@CVirtualSurfaceDrawListBrush@@IEAAX$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@PEAV23@@Z @ 0x1802DBAE0 (-ReplaceSourceWorker@CVirtualSurfaceDrawListBrush@@IEAAX$$QEAV-$unique_ptr@VCDrawListBrush@@U-$d.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::swap<CAtlasTexture,std::default_delete<CAtlasTexture>,0>(__int64 *a1, __int64 *a2)
{
  return std::unique_ptr<CDrawListBrush>::swap(a1, a2);
}
