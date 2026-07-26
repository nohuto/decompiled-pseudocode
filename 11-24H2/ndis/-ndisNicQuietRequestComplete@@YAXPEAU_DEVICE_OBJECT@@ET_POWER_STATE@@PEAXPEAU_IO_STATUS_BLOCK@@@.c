/*
 * XREFs of ?ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14003C4B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x14002C3B0 (WPP_RECORDER_SF_qZ.c)
 *     WPP_RECORDER_SF_Lq @ 0x140036410 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisCloseTimeInterval@@YAXPEA_K0@Z @ 0x14003C010 (-ndisCloseTimeInterval@@YAXPEA_K0@Z.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x14008ACE0 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

void __fastcall ndisNicQuietRequestComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        struct _NDIS_MINIPORT_BLOCK *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rdi
  int Status; // esi
  KIRQL v8; // bl
  __int64 v9; // rdx

  AoAc = Context->AoAc;
  Status = IoStatus->Status;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  *((_DWORD *)AoAc + 94) = ((Status >> 31) & 2) + 2;
  KeSetEvent((PRKEVENT)((char *)AoAc + 392), 0, 0);
  ndisCloseTimeInterval((unsigned __int64 *)AoAc + 105, (unsigned __int64 *)AoAc + 103);
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v8);
  if ( Status >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        9u,
        0x27u,
        (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
        (char)Context,
        &Context->pAdapterInstanceName->Length);
  }
  else
  {
    NdisUnexpectedAoAcError(Context, 8u, Status);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x26u,
        (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
        Status,
        Context);
  }
}
