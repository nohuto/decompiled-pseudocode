/*
 * XREFs of ?RegisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z @ 0x180260728
 * Callers:
 *     ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x180037894 (-ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180037BE0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800DEA80 (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 */

void __fastcall CSuperWetInkManager::RegisterSuperWetInkVisual(CSuperWetInkManager *this, struct CVisual *a2)
{
  struct CVisual **i; // r8
  _BYTE *v4; // rdx
  struct CVisual *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  for ( i = (struct CVisual **)*((_QWORD *)this + 1); i != *((struct CVisual ***)this + 2); ++i )
  {
    if ( *i == a2 )
      return;
  }
  v4 = (_BYTE *)*((_QWORD *)this + 2);
  if ( v4 == *((_BYTE **)this + 3) )
  {
    std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
      (const void **)this + 1,
      v4,
      &v5);
  }
  else
  {
    *(_QWORD *)v4 = a2;
    *((_QWORD *)this + 2) += 8LL;
  }
}
