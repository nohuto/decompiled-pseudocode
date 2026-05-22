/*
 * XREFs of ?_Tidy@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ @ 0x18000B724
 * Callers:
 *     ?OnInputConfigMessageReceived@InputConfigContextProvider@@AEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x18000B874 (-OnInputConfigMessageReceived@InputConfigContextProvider@@AEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z.c)
 *     ?Broadcast@InputConfigContextProvider@@AEAAXXZ @ 0x18000BA1C (-Broadcast@InputConfigContextProvider@@AEAAXXZ.c)
 *     ?SetContext@KernelContextProvider@@QEAAXPEBUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@Z @ 0x18000CF58 (-SetContext@KernelContextProvider@@QEAAXPEBUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@Z.c)
 *     ??0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18000E070 (--0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x18007AA64 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ??1VirtualTouchpadContextMessage@@QEAA@XZ @ 0x1800ABCB4 (--1VirtualTouchpadContextMessage@@QEAA@XZ.c)
 *     ?OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamoInputSpacePayloadProxy@@I@Z @ 0x1800AC700 (-OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamo.c)
 *     ??1InputConfigContextProvider@@EEAA@XZ @ 0x1801084B8 (--1InputConfigContextProvider@@EEAA@XZ.c)
 *     ??1?$ListProxyCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UVirtualTouchpadRect@@@Bamo@Microsoft@@UEAA@XZ @ 0x180138F5C (--1-$ListProxyCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@.c)
 *     ??1?$ListPrincipalCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@UVirtualTouchpadRect@@@Bamo@Microsoft@@UEAA@XZ @ 0x180139BFC (--1-$ListPrincipalCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Mic.c)
 *     ??$?4AEAUVirtualTouchpadContextMessage@@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUVirtualTouchpadContextMessage@@@Z @ 0x1801996D4 (--$-4AEAUVirtualTouchpadContextMessage@@$0A@@-$variant@Umonostate@std@@UInputConfigContextMessag.c)
 *     ??1?$_Tidy_guard@V?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@@std@@QEAA@XZ @ 0x180199A08 (--1-$_Tidy_guard@V-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@@std@@@std@@.c)
 *     ??1VirtualTouchpadContextProvider@@UEAA@XZ @ 0x180199A28 (--1VirtualTouchpadContextProvider@@UEAA@XZ.c)
 *     ?Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ @ 0x180199B00 (-Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ.c)
 *     ?GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180199C70 (-GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConf.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<INPUT_SPACE_PAYLOAD>::_Tidy(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = std::_Deallocate<16,0>(v2, 8 * ((a1[2] - v2) >> 3));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
