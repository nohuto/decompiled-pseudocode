/*
 * XREFs of NdisWdfDeviceControlIrpHandler @ 0x140077960
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14000E580 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline @ 0x140092F04 (Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NdisWdfDeviceControlIrpHandler(struct _IRP *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _FILE_OBJECT *FileObject; // rdx
  void *FsContext; // rdi
  int v7; // edx
  unsigned int v9; // ebx

  FileObject = a1->Tail.Overlay.CurrentStackLocation->FileObject;
  FsContext = FileObject->FsContext;
  if ( !(unsigned int)Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline(a1, FileObject, a3, a4) )
    return ndisDeviceControlHandler(
             *(struct _DEVICE_OBJECT **)FsContext,
             *((struct _NDIS_MINIPORT_BLOCK **)FsContext + 1),
             a1);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)FsContext + 11) )
  {
    v9 = ndisDeviceControlHandler(
           *(struct _DEVICE_OBJECT **)FsContext,
           *((struct _NDIS_MINIPORT_BLOCK **)FsContext + 1),
           a1);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)FsContext + 11);
    return v9;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        13,
        124,
        (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
        (char)FsContext);
    }
    a1->IoStatus.Status = -1071448040;
    IofCompleteRequest(a1, 2);
    return 3223519256LL;
  }
}
