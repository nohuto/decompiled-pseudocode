/*
 * XREFs of ?ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z @ 0x14004BA10
 * Callers:
 *     ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140053CF0 (-ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisCloseHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@_N@Z @ 0x14009BB88 (-ndisCloseHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@_N@Z.c)
 *     ?ndisDeviceInternalDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1400A6C18 (-ndisDeviceInternalDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisDummyHandler(struct _DEVICE_OBJECT *a1, struct _NDIS_OBJECT_HEADER *a2, struct _IRP *a3)
{
  struct _NDIS_OBJECT_HEADER *v4; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 (__fastcall *v7)(struct _DEVICE_OBJECT *, struct _IRP *); // rax
  int v8; // edx
  unsigned int v9; // ebx

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      32,
      (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
      (char)a1,
      (char)a3);
  }
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( v4->Type == 17 )
  {
    v9 = 0;
    if ( CurrentStackLocation->MajorFunction != 18 )
      v9 = -1073741637;
  }
  else
  {
    if ( v4->Type == 9 )
    {
      v7 = *(__int64 (__fastcall **)(struct _DEVICE_OBJECT *, struct _IRP *))&v4[2 * CurrentStackLocation->MajorFunction
                                                                               + 12].Type;
      if ( v7 )
      {
        v9 = v7(a1, a3);
        goto LABEL_7;
      }
    }
    v9 = -1073741637;
  }
  a3->IoStatus.Status = v9;
  IofCompleteRequest(a3, 2);
LABEL_7:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      11,
      33,
      (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
      (char)a1,
      (char)a3);
  }
  return v9;
}
