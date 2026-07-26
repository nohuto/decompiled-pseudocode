/*
 * XREFs of ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x14004B090
 * Callers:
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x140049A90 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x140049CF0 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x14004AF60 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     ndisIfUpdateInterfaceFromPersistentStore @ 0x1400963C0 (ndisIfUpdateInterfaceFromPersistentStore.c)
 *     ndisConvertIdentifierForNetworkInterface @ 0x14009F010 (ndisConvertIdentifierForNetworkInterface.c)
 *     ?ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@@W4_NDIS_MP_REFTAG@@@Z @ 0x14009F190 (-ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@.c)
 *     ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x14009F2E0 (-ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RES.c)
 *     ndisIfUpdateLoopbackInterfaceOnNetwork @ 0x1400CFD4C (ndisIfUpdateLoopbackInterfaceOnNetwork.c)
 *     ?ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1400D3350 (-ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z @ 0x1400D3908 (-ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z.c)
 *     ?ndisNsiEnumerateAllIfRcvAddresses@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1400D3DC0 (-ndisNsiEnumerateAllIfRcvAddresses@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1400D4020 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1400D4310 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_IF_BLOCK *__fastcall ndisIfFindInterfaceByNetLuid(union _NET_LUID_LH a1)
{
  _DEVICE_OBJECT *i; // rax

  for ( i = (_DEVICE_OBJECT *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
        i != (_DEVICE_OBJECT *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
        i = *(_DEVICE_OBJECT **)&i->Type )
  {
    if ( i->Queue.ListEntry.Flink == (_LIST_ENTRY *)a1.Value )
      return (struct _NDIS_IF_BLOCK *)&i[-4].Queue.Wcb.DeviceContext;
    if ( i->Queue.ListEntry.Flink > (_LIST_ENTRY *)a1.Value )
      break;
  }
  return 0LL;
}
