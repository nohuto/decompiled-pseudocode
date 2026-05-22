/*
 * XREFs of ?OnReplaced@TouchpadRectListProxy@@MEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x1801393B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetConnection@BamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnection@2@XZ @ 0x180137EF4 (-GetConnection@BamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAPE.c)
 *     ??$GetStructAt@UVirtualTouchpadRect@@@Bamo@Microsoft@@YAAEBUVirtualTouchpadRect@@PEAVBaseBamoConnection@01@AEAV?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@I@Z @ 0x180138CE4 (--$GetStructAt@UVirtualTouchpadRect@@@Bamo@Microsoft@@YAAEBUVirtualTouchpadRect@@PEAVBaseBamoCon.c)
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x180199CF8 (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 *     ?OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x18019A004 (-OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 */

__int64 __fastcall TouchpadRectListProxy::OnReplaced(
        TouchpadRectListProxy *this,
        unsigned int a2,
        const struct VirtualTouchpadRect *a3)
{
  VirtualTouchpadContextProvider *Instance; // rsi
  Microsoft::Bamo::BaseBamoConnection *Connection; // rax
  const struct VirtualTouchpadRect *Struct; // rax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Instance = VirtualTouchpadContextProvider::GetInstance();
  Connection = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy::GetConnection(this);
  Struct = (const struct VirtualTouchpadRect *)Microsoft::Bamo::GetStructAt<VirtualTouchpadRect>(
                                                 Connection,
                                                 (_QWORD *)this + 6,
                                                 a2);
  v8 = VirtualTouchpadContextProvider::OnTouchpadUpdated(Instance, Struct);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\systemcontext\\endpoint\\touchpadrectlistproxy.cpp",
      (const char *)(unsigned int)v8);
  return 0LL;
}
