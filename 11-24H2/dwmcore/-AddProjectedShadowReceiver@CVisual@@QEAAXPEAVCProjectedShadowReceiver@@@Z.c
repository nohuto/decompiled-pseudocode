/*
 * XREFs of ?AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x18028B46C
 * Callers:
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x180250644 (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x18004B570 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800DEA80 (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ?SetProjectedShadowReceivers@CVisual@@QEAAXPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@@Z @ 0x180229554 (-SetProjectedShadowReceivers@CVisual@@QEAAXPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocat.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::AddProjectedShadowReceiver(CVisual *this, struct CProjectedShadowReceiver *a2)
{
  _QWORD *v4; // rax
  __int64 ProjectedShadowReceivers; // rdi
  char v6; // al
  _BYTE *v7; // rdx
  char v8; // bp
  struct CProjectedShadowReceiver *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  if ( (**((_DWORD **)this + 29) & 0x40000) == 0 )
  {
    v4 = operator new(0x18uLL);
    if ( v4 )
    {
      *v4 = 0LL;
      v4[1] = 0LL;
      v4[2] = 0LL;
    }
    CVisual::SetProjectedShadowReceivers((__int64)this, (__int64)v4);
  }
  ProjectedShadowReceivers = CVisual::GetProjectedShadowReceivers((__int64)this);
  v6 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 264LL))(this);
  v7 = *(_BYTE **)(ProjectedShadowReceivers + 8);
  v8 = v6;
  if ( v7 == *(_BYTE **)(ProjectedShadowReceivers + 16) )
  {
    std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
      (const void **)ProjectedShadowReceivers,
      v7,
      &v9);
  }
  else
  {
    *(_QWORD *)v7 = a2;
    *(_QWORD *)(ProjectedShadowReceivers + 8) += 8LL;
  }
  if ( !v8 )
    CVisual::PropagateFlags((__int64)this, 5u);
}
