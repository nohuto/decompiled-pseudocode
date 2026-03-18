/*
 * XREFs of ?ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS@@PEBXI@Z @ 0x1801B7924
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x18011C25C (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x18013C654 (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ??$_Emplace@AEAPEAVCProjectedShadowReceiver@@@?$list@UReceiverEntry@CProjectedShadowScene@@V?$allocator@UReceiverEntry@CProjectedShadowScene@@@std@@@std@@QEAAPEAU?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@1@QEAU21@AEAPEAVCProjectedShadowReceiver@@@Z @ 0x1801B784C (--$_Emplace@AEAPEAVCProjectedShadowReceiver@@@-$list@UReceiverEntry@CProjectedShadowScene@@V-$al.c)
 *     ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ @ 0x1801B7BAC (-RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1801B9698 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessAddReceivers(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS *a3,
        _DWORD *a4)
{
  unsigned int v4; // esi
  __int64 i; // rbx
  struct CResource *ResourceWithoutType; // rax
  CProjectedShadowReceiver *v11; // rdi
  CProjectedShadowReceiver *v12; // rdi
  const void **v13; // rcx
  _BYTE *v14; // rdx
  CProjectedShadowReceiver *v16; // [rsp+70h] [rbp+18h] BYREF
  CProjectedShadowScene *v17; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a3 + 2); i = (unsigned int)(i + 1) )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, a4[i]);
    v11 = ResourceWithoutType;
    if ( !ResourceWithoutType
      || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 64LL))(
            ResourceWithoutType,
            120LL) )
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x4Cu, 0LL);
      return v4;
    }
    v16 = v11;
    if ( !CProjectedShadowScene::FindReceiverEntry(this, v11) )
    {
      std::list<CProjectedShadowScene::ReceiverEntry>::_Emplace<CProjectedShadowReceiver * &>(
        (__int64)this + 88,
        *((_QWORD *)this + 11),
        (__int64 *)&v16);
      v12 = v16;
      v17 = this;
      v13 = (const void **)((char *)v16 + 80);
      v14 = (_BYTE *)*((_QWORD *)v16 + 11);
      if ( v14 == *((_BYTE **)v16 + 12) )
      {
        std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
          v13,
          v14,
          &v17);
      }
      else
      {
        *(_QWORD *)v14 = this;
        v13[1] = (char *)v13[1] + 8;
      }
      CProjectedShadowReceiver::RequestRedraw(v12);
    }
  }
  return v4;
}
