/*
 * XREFs of ?ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS@@PEBXI@Z @ 0x1801B7C5C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x18013C654 (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x1801B7B6C (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 *     ?FindCasterEntry@CProjectedShadowScene@@AEBAPEAUCasterEntry@1@PEBVCProjectedShadowCaster@@@Z @ 0x1801B7C34 (-FindCasterEntry@CProjectedShadowScene@@AEBAPEAUCasterEntry@1@PEBVCProjectedShadowCaster@@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1801B9698 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ??$_Emplace@AEAPEAVCProjectedShadowCaster@@@?$list@UCasterEntry@CProjectedShadowScene@@V?$allocator@UCasterEntry@CProjectedShadowScene@@@std@@@std@@QEAAPEAU?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@1@QEAU21@AEAPEAVCProjectedShadowCaster@@@Z @ 0x1802550E8 (--$_Emplace@AEAPEAVCProjectedShadowCaster@@@-$list@UCasterEntry@CProjectedShadowScene@@V-$alloca.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessAddCasters(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS *a3,
        _DWORD *a4)
{
  unsigned int v4; // ebp
  __int64 i; // rbx
  struct CResource *ResourceWithoutType; // rax
  const struct CProjectedShadowCaster *v12; // rsi
  const void **v13; // rcx
  _BYTE *v14; // rdx
  const struct CProjectedShadowCaster *v15; // [rsp+70h] [rbp+18h] BYREF
  CProjectedShadowScene *v16; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a3 + 2); i = (unsigned int)(i + 1) )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, a4[i]);
    v12 = ResourceWithoutType;
    if ( !ResourceWithoutType
      || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 64LL))(
            ResourceWithoutType,
            119LL) )
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x2Au, 0LL);
      return v4;
    }
    v15 = v12;
    if ( !CProjectedShadowScene::FindCasterEntry(this, v12) )
    {
      std::list<CProjectedShadowScene::CasterEntry>::_Emplace<CProjectedShadowCaster * &>(
        (char *)this + 72,
        *((_QWORD *)this + 9),
        &v15);
      v13 = (const void **)((char *)v15 + 104);
      v16 = this;
      v14 = (_BYTE *)*((_QWORD *)v15 + 14);
      if ( v14 == *((_BYTE **)v15 + 15) )
      {
        std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
          v13,
          v14,
          &v16);
      }
      else
      {
        *(_QWORD *)v14 = this;
        v13[1] = (char *)v13[1] + 8;
      }
      CProjectedShadowScene::RequestRedrawAll(this);
    }
  }
  return v4;
}
