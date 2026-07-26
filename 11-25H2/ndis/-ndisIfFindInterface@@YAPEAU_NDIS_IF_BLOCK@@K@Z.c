/*
 * XREFs of ?ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z @ 0x14004BEA0
 * Callers:
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x14004B2E0 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ?ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004B4A0 (-ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisIfAddIfStackEntry @ 0x14004BB90 (NdisIfAddIfStackEntry.c)
 *     ?ndisNsiEnumerateAllIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x14007C730 (-ndisNsiEnumerateAllIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiEnumerateAllInvertedIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x14009A9A0 (-ndisNsiEnumerateAllInvertedIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@.c)
 *     ndisConvertIdentifierForNetworkInterface @ 0x14009F010 (ndisConvertIdentifierForNetworkInterface.c)
 *     NdisIfUpdateInterface @ 0x1400CFF70 (NdisIfUpdateInterface.c)
 * Callees:
 *     <none>
 */

struct _NDIS_IF_BLOCK *__fastcall ndisIfFindInterface(int a1)
{
  _DEVICE_OBJECT *i; // rax

  for ( i = (_DEVICE_OBJECT *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
        i != (_DEVICE_OBJECT *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
        i = *(_DEVICE_OBJECT **)&i->Type )
  {
    if ( HIDWORD(i[-4].Queue.Wcb.DeviceContext) == a1 )
      return (struct _NDIS_IF_BLOCK *)&i[-4].Queue.Wcb.DeviceContext;
  }
  return 0LL;
}
