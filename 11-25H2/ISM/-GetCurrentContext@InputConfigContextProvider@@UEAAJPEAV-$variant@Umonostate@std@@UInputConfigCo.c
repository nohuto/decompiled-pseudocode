/*
 * XREFs of ?GetCurrentContext@InputConfigContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x18000CAD0
 * Callers:
 *     ?OnInputConfigChanged@SystemContextManager@@QEAAXXZ @ 0x18000BB70 (-OnInputConfigChanged@SystemContextManager@@QEAAXXZ.c)
 *     ??0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18000E070 (--0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x18013CB70 (-RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAV.c)
 * Callees:
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x18007AA64 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 */

__int64 __fastcall InputConfigContextProvider::GetCurrentContext(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int128 v6; // [rsp+20h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 264);
  v4 = *(_QWORD *)(a1 + 256);
  if ( v4 == v2 )
    return 2147943568LL;
  *(_QWORD *)&v6 = -1431655765 * (unsigned int)((v2 - v4) >> 3);
  *((_QWORD *)&v6 + 1) = *(_QWORD *)(a1 + 256);
  if ( *(_BYTE *)(a2 + 24) == 1 )
  {
    *(_OWORD *)a2 = v6;
  }
  else
  {
    std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy(a2);
    *(_OWORD *)a2 = v6;
    *(_BYTE *)(a2 + 24) = 1;
  }
  return 0LL;
}
