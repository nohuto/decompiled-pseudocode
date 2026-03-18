/*
 * XREFs of ACPIDispatchWmiLog @ 0x14006A340
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x14001DF70 (ACPIDispatchForwardIrp.c)
 *     ACPIWmiRegisterGuids @ 0x14006A460 (ACPIWmiRegisterGuids.c)
 *     WPP_RECORDER_SF_IdDD @ 0x14006A5A8 (WPP_RECORDER_SF_IdDD.c)
 */

__int64 __fastcall ACPIDispatchWmiLog(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  int v6; // edi
  __int64 v7; // rdx
  _NAMED_PIPE_CREATE_PARAMETERS *v8; // rcx
  unsigned int LowPart; // ecx
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rdx
  unsigned int v11; // [rsp+60h] [rbp+8h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( BugCheckParameter3 != CurrentStackLocation->Parameters.WMI.ProviderId )
    return ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
  switch ( CurrentStackLocation->MinorFunction )
  {
    case 4u:
      LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
      _InterlockedExchange(&ACPIWmiTraceEnable, 1);
      if ( LowPart >= 0x30 )
      {
        ACPIWmiLoggerHandle = *(_QWORD *)&Parameters->CompletionMode;
        if ( ACPIWmiTraceGlobalEnable )
          ACPIWmiTraceGlobalEnable = 0;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_IdDD(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)Parameters,
            (_DWORD)CurrentStackLocation,
            BugCheckParameter3);
      }
      v6 = 0;
      Irp->IoStatus.Status = 0;
      goto LABEL_17;
    case 5u:
      v6 = 0;
      _InterlockedExchange(&ACPIWmiTraceEnable, 0);
      ACPIWmiLoggerHandle = 0LL;
      Irp->IoStatus.Status = 0;
LABEL_17:
      IofCompleteRequest(Irp, 0);
      return (unsigned int)v6;
    case 8u:
      v7 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      v8 = CurrentStackLocation->Parameters.CreatePipe.Parameters;
      v11 = 0;
      v6 = ACPIWmiRegisterGuids(v8, v7, &v11, BugCheckParameter3);
      if ( v6 >= 0 )
        Irp->IoStatus.Information = v11;
      Irp->IoStatus.Status = v6;
      goto LABEL_17;
  }
  return (unsigned int)ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
}
