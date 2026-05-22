/*
 * XREFs of ?GetCurrentContext@KernelContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180108880
 * Callers:
 *     <none>
 * Callees:
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x18007AA64 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 */

__int64 __fastcall KernelContextProvider::GetCurrentContext(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a2 + 24) == 4 )
  {
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 128);
  }
  else
  {
    std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy(a2);
    *(_BYTE *)(a2 + 24) = -1;
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 128);
    *(_BYTE *)(a2 + 24) = 4;
  }
  return 0LL;
}
