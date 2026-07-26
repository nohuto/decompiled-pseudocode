/*
 * XREFs of ?ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z @ 0x14004AC40
 * Callers:
 *     ?ndisCloseHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14002A4D0 (-ndisCloseHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisCloseIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x14002A710 (-ndisCloseIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14004A030 (-ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisDeviceInternalDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1400AEDC8 (-ndisDeviceInternalDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisDummyHandler(struct _DEVICE_OBJECT *a1, struct _NDIS_OBJECT_HEADER *a2, struct _IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 (__fastcall *v7)(struct _DEVICE_OBJECT *, struct _IRP *); // rax
  unsigned int v8; // ebx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Bu,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1,
      a3);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( a2->Type == 17 )
  {
    v8 = 0;
    if ( CurrentStackLocation->MajorFunction != 18 )
      v8 = -1073741637;
  }
  else
  {
    if ( a2->Type == 9 )
    {
      v7 = *(__int64 (__fastcall **)(struct _DEVICE_OBJECT *, struct _IRP *))&a2[2 * CurrentStackLocation->MajorFunction
                                                                               + 12].Type;
      if ( v7 )
      {
        v8 = v7(a1, a3);
        goto LABEL_7;
      }
    }
    v8 = -1073741637;
  }
  a3->IoStatus.Status = v8;
  IofCompleteRequest(a3, 2);
LABEL_7:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Cu,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1,
      a3);
  return v8;
}
