/*
 * XREFs of ?GetCurrentContext@DisplayOcclusionContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x18019A770
 * Callers:
 *     ?RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x18013CB70 (-RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAV.c)
 * Callees:
 *     ?_Tidy@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ @ 0x1801086D0 (-_Tidy@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ.c)
 *     ??$?4AEAUDisplayOcclusionContextMessage@@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUDisplayOcclusionContextMessage@@@Z @ 0x18019A174 (--$-4AEAUDisplayOcclusionContextMessage@@$0A@@-$variant@Umonostate@std@@UInputConfigContextMessa.c)
 *     ??4?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18019A588 (--4-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAAAEAV01@AE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DisplayOcclusionContextProvider::GetCurrentContext(__int64 a1, __int64 a2)
{
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 88) == *(_QWORD *)(a1 + 96) )
    return 2147943568LL;
  v4 = 0LL;
  v5 = 0LL;
  std::vector<DisplayOcclusionRect>::operator=((char **)&v4, a1 + 88);
  std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::operator=<DisplayOcclusionContextMessage &,0>(
    a2,
    &v4);
  std::vector<DisplayOcclusionRect>::_Tidy((__int64)&v4);
  return 0LL;
}
