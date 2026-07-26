/*
 * XREFs of ndisMiniportDeviceReadyNotification @ 0x14016B220
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140051E90 (-ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisFindMiniportByPdo @ 0x14005D420 (ndisFindMiniportByPdo.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x140161630 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 */

__int64 __fastcall ndisMiniportDeviceReadyNotification(char *NotificationStructure, PVOID Context)
{
  const void **v3; // rdx
  __int128 *v4; // rax
  PVOID v5; // rdi
  struct _NDIS_MINIPORT_BLOCK *MiniportByPdo; // rax
  struct _NDIS_MINIPORT_BLOCK *v7; // rbx
  int v8; // edx
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp+8h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  if ( *(_QWORD *)(NotificationStructure + 4) != *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1
    || *(_QWORD *)(NotificationStructure + 12) != *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4 )
  {
    return 0LL;
  }
  v3 = (const void **)*((_QWORD *)NotificationStructure + 5);
  if ( *(_WORD *)v3 < 0x80u )
  {
    xmmword_14011CE20 = 0LL;
    xmmword_14011CE30 = 0LL;
    xmmword_14011CE40 = 0LL;
    xmmword_14011CE50 = 0LL;
    xmmword_14011CE60 = 0LL;
    xmmword_14011CE70 = 0LL;
    xmmword_14011CE80 = 0LL;
    xmmword_14011CE90 = 0LL;
    memmove(&xmmword_14011CE20, v3[1], *(unsigned __int16 *)v3);
  }
  else
  {
    v4 = (__int128 *)v3[1];
    xmmword_14011CE20 = *v4;
    xmmword_14011CE30 = v4[1];
    xmmword_14011CE40 = v4[2];
    xmmword_14011CE50 = v4[3];
    xmmword_14011CE60 = v4[4];
    xmmword_14011CE70 = v4[5];
    xmmword_14011CE80 = v4[6];
    xmmword_14011CE90 = v4[7];
  }
  ObjectAttributes.ObjectName = (PUNICODE_STRING)*((_QWORD *)NotificationStructure + 5);
  ObjectAttributes.RootDirectory = 0LL;
  FileHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  IoStatusBlock = 0LL;
  if ( ZwOpenFile(&FileHandle, 0, &ObjectAttributes, &IoStatusBlock, 3u, 1u) >= 0 )
  {
    Object = 0LL;
    if ( ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL) >= 0 )
    {
      v5 = Object;
      MiniportByPdo = ndisFindMiniportByPdo(*((_DEVICE_OBJECT **)Object + 1));
      v7 = MiniportByPdo;
      if ( MiniportByPdo && (mem::ReadNoFence<unsigned long,void>(&MiniportByPdo->Flags) & 0x80u) == 0LL )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v8,
            1,
            10,
            (struct _GUID *)&WPP_afd79cac345434603fc4697a366a014e_Traceguids,
            (char)v7);
        }
        ndisMSetMiniportReadyForBinding(v7, 1, Reason_MiniportDeviceNotStarted, RunAsynchronous);
        ndisNotifyWmiAdapterArrival(v7);
      }
      ObfDereferenceObject(v5);
    }
    ZwClose(FileHandle);
  }
  return 0LL;
}
