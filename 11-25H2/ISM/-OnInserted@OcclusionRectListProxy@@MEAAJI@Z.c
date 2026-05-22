/*
 * XREFs of ?OnInserted@OcclusionRectListProxy@@MEAAJI@Z @ 0x180138110
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetStructAt@UDisplayOcclusionRect@@@Bamo@Microsoft@@YAAEBUDisplayOcclusionRect@@PEAVBaseBamoConnection@01@AEAV?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@I@Z @ 0x1801379C0 (--$GetStructAt@UDisplayOcclusionRect@@@Bamo@Microsoft@@YAAEBUDisplayOcclusionRect@@PEAVBaseBamoC.c)
 *     ?GetConnection@BamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnection@2@XZ @ 0x180137EF4 (-GetConnection@BamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAPE.c)
 *     ?GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ @ 0x18019A7D0 (-GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ.c)
 *     ?OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@Z @ 0x18019A864 (-OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOc.c)
 */

__int64 __fastcall OcclusionRectListProxy::OnInserted(OcclusionRectListProxy *this)
{
  Microsoft::Bamo::BaseBamoConnection *Connection; // rax
  unsigned int v2; // r8d
  _QWORD *v3; // r9
  const struct DockInputIdentity *Struct; // rbx
  DisplayOcclusionContextProvider *Instance; // rax

  Connection = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy::GetConnection(this);
  Struct = (const struct DockInputIdentity *)Microsoft::Bamo::GetStructAt<DisplayOcclusionRect>(Connection, v3, v2);
  Instance = DisplayOcclusionContextProvider::GetInstance();
  DisplayOcclusionContextProvider::OnOcclusionRectAdded(Instance, Struct, Struct);
  return 0LL;
}
