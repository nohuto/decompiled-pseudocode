/*
 * XREFs of ndisMiniportDeviceReadyNotification @ 0x14015D490
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140054BF0 (-ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisFindMiniportByPdo @ 0x140078410 (ndisFindMiniportByPdo.c)
 *     ??$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@_WPEBU_UNICODE_STRING@@@Z @ 0x14015D650 (--$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@_WPEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x14015D7E0 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 */

__int64 __fastcall ndisMiniportDeviceReadyNotification(char *NotificationStructure, PVOID Context)
{
  __int64 v3; // rax
  PVOID v4; // rdi
  struct _NDIS_MINIPORT_BLOCK *MiniportByPdo; // rax
  int v6; // edx
  struct _NDIS_MINIPORT_BLOCK *v7; // rbx
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp+8h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( v3 )
    return 0LL;
  CopyPartialStringToBuffer<64>(NotificationStructure, *((_QWORD *)NotificationStructure + 5));
  ObjectAttributes.ObjectName = (PUNICODE_STRING)*((_QWORD *)NotificationStructure + 5);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  if ( ZwOpenFile(&FileHandle, 0, &ObjectAttributes, &IoStatusBlock, 3u, 1u) >= 0 )
  {
    Object = 0LL;
    if ( ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL) >= 0 )
    {
      v4 = Object;
      MiniportByPdo = ndisFindMiniportByPdo(*((_DEVICE_OBJECT **)Object + 1));
      v7 = MiniportByPdo;
      if ( MiniportByPdo && (MiniportByPdo->Flags & 0x80u) == 0 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v6,
            1,
            10,
            (struct _GUID *)&WPP_ed0d4e867c5c32c49659a97a590a07bf_Traceguids,
            (char)MiniportByPdo);
        }
        ndisMSetMiniportReadyForBinding(v7, 1, Reason_MiniportDeviceNotStarted, RunAsynchronous);
        ndisNotifyWmiAdapterArrival(v7);
      }
      ObfDereferenceObject(v4);
    }
    ZwClose(FileHandle);
  }
  return 0LL;
}
