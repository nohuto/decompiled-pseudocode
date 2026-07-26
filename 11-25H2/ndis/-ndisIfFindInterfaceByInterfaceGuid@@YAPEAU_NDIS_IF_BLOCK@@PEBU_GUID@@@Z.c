/*
 * XREFs of ?ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z @ 0x14007C0C0
 * Callers:
 *     ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x14008CAF0 (-ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z.c)
 *     ?IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z @ 0x140098690 (-IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z.c)
 *     ndisConvertIdentifierForNetworkInterface @ 0x14009F010 (ndisConvertIdentifierForNetworkInterface.c)
 *     ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1400D36C8 (-ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x140181730 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_IF_BLOCK *__fastcall ndisIfFindInterfaceByInterfaceGuid(const struct _GUID *a1)
{
  _DEVICE_OBJECT *i; // rdx
  unsigned __int64 v2; // rax

  for ( i = (_DEVICE_OBJECT *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
        i != (_DEVICE_OBJECT *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
        i = *(_DEVICE_OBJECT **)&i->Type )
  {
    v2 = *(_QWORD *)&a1->Data1 - *(unsigned __int64 *)((char *)&i[-3].DeviceObjectExtension + 4);
    if ( *(_DEVOBJ_EXTENSION **)&a1->Data1 == *(_DEVOBJ_EXTENSION **)((char *)&i[-3].DeviceObjectExtension + 4) )
      v2 = *(_QWORD *)a1->Data4 - *(unsigned __int64 *)((char *)&i[-3].Reserved + 4);
    if ( !v2 )
      return (struct _NDIS_IF_BLOCK *)&i[-4].Queue.Wcb.DeviceContext;
  }
  return 0LL;
}
