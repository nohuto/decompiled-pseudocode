/*
 * XREFs of ?ndisMediaDisconnectComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1400A8500
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x14003A230 (-ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 */

void __fastcall ndisMediaDisconnectComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        struct _NDIS_MINIPORT_BLOCK *Context)
{
  unsigned int PnPFlags; // eax
  KIRQL v6; // dl
  KIRQL NewIrql; // [rsp+58h] [rbp+20h] BYREF

  NewIrql = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      17,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)Context);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(Context, &NewIrql);
  PnPFlags = Context->PnPFlags;
  if ( (PnPFlags & 0x200) != 0 )
  {
    v6 = NewIrql;
    Context->MiniportThread = 0LL;
    Context->PnPFlags = PnPFlags & 0xFFFFFDFF;
    KeReleaseSpinLock(&Context->Lock, v6);
    if ( (Context->PnPFlags & 0x800) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4,
          14,
          19,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)Context);
      ndisRequestDevicePowerD0(Context, NdisMEventD0_D3DCancel);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        18,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)Context);
    Context->MiniportThread = 0LL;
    KeReleaseSpinLock(&Context->Lock, NewIrql);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      20,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)Context);
}
