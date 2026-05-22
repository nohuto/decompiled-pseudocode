/*
 * XREFs of ?BroadcastMessageToObservers@SystemContextProvider@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180079DDC
 * Callers:
 *     ?Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ @ 0x1801A10F0 (-Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ.c)
 *     ?Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ @ 0x1801A1C20 (-Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SystemContextProvider::BroadcastMessageToObservers(__int64 a1, __int64 a2)
{
  __int64 *i; // rbx

  for ( i = *(__int64 **)(a1 + 32); ; (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)i[2] + 24LL))(i[2], a2) )
  {
    i = (__int64 *)*i;
    if ( i == *(__int64 **)(a1 + 32) )
      break;
  }
  return 0LL;
}
