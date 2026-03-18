/*
 * XREFs of ?ReplaceSourceWorker@CVirtualSurfaceDrawListBrush@@IEAAX$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@PEAV23@@Z @ 0x1802DBAE0
 * Callers:
 *     ?ReplaceSource@CNineGridDrawListBrush@@UEAAX$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x1802DBAD0 (-ReplaceSource@CNineGridDrawListBrush@@UEAAX$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 * Callees:
 *     ??$swap@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@$0A@@std@@YAXAEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@0@0@Z @ 0x180250214 (--$swap@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@$0A@@std@@YAXAEAV-$unique_ptr@VC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualSurfaceDrawListBrush::ReplaceSourceWorker(__int64 a1, __int64 *a2, __int64 *a3)
{
  if ( *a3 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)*a3 + 8LL))(*a3, 3LL) )
    return (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*a3 + 40LL))(*a3, a2);
  else
    return std::swap<CAtlasTexture,std::default_delete<CAtlasTexture>,0>(a2, a3);
}
