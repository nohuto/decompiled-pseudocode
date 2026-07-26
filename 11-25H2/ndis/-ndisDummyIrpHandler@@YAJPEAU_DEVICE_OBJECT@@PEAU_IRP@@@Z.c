/*
 * XREFs of ?ndisDummyIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x140067770
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisDummyIrpHandler(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  _BYTE *DeviceExtension; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 (__fastcall *v6)(struct _DEVICE_OBJECT *, struct _IRP *); // rax
  unsigned int v7; // ebx

  DeviceExtension = a1->DeviceExtension;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Bu,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1,
      a2);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( *DeviceExtension == 17 )
  {
    v7 = 0;
    if ( CurrentStackLocation->MajorFunction != 18 )
      v7 = -1073741637;
  }
  else
  {
    if ( *DeviceExtension == 9 )
    {
      v6 = *(__int64 (__fastcall **)(struct _DEVICE_OBJECT *, struct _IRP *))&DeviceExtension[8
                                                                                            * CurrentStackLocation->MajorFunction
                                                                                            + 48];
      if ( v6 )
      {
        v7 = v6(a1, a2);
        goto LABEL_7;
      }
    }
    v7 = -1073741637;
  }
  a2->IoStatus.Status = v7;
  IofCompleteRequest(a2, 2);
LABEL_7:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Cu,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1,
      a2);
  return v7;
}
