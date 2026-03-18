/*
 * XREFs of ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x180131878
 * Callers:
 *     ?ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETCOLORSTOPS@@PEBXI@Z @ 0x180130DD0 (-ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETCO.c)
 *     ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x1801ED43C (-EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180131C1C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ??$_Insert_counted_range@PEAPEAVCColorGradientStop@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@PEAPEAVCColorGradientStop@@_K@Z @ 0x180131E4C (--$_Insert_counted_range@PEAPEAVCColorGradientStop@@@-$vector@PEAVCColorGradientStop@@V-$allocat.c)
 *     ?FlattenStops@CGradientBrush@@AEAAXXZ @ 0x180132010 (-FlattenStops@CGradientBrush@@AEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGradientBrush::SetStops(struct CResource ***this, _QWORD *a2, char a3)
{
  struct CResource **v3; // rdi
  struct CResource **v7; // rbp
  int v8; // eax
  struct CResource **v9; // rsi
  struct CResource **i; // rdi
  struct CResource **v11; // rax
  gsl::details *v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // r9
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (struct CResource **)a2[1];
  v7 = &v3[*a2];
  while ( v3 != v7 )
  {
    v8 = CResource::RegisterNotifier((CResource *)this, *v3);
    if ( v8 < 0 )
      ModuleFailFastForHRESULT(v8, retaddr);
    ++v3;
  }
  if ( !a3 )
  {
    v9 = this[22];
    for ( i = this[21]; i != v9; ++i )
      CResource::UnRegisterNotifierInternal((CResource *)this, *i);
    v11 = this[21];
    if ( v11 != this[22] )
      this[22] = v11;
  }
  v12 = (gsl::details *)(this + 21);
  v13 = a2[1];
  v14 = 8LL * *a2;
  if ( v13 > v14 + v13 )
  {
    `gsl::details::get_terminate_handler'::`2'::handler(v12);
    __debugbreak();
  }
  std::vector<CColorGradientStop *>::_Insert_counted_range<CColorGradientStop * *>(v12, this[22], v13, v14 >> 3);
  CGradientBrush::FlattenStops((CGradientBrush *)this);
  CGradientBrush::InvalidateGradient((CGradientBrush *)this);
}
