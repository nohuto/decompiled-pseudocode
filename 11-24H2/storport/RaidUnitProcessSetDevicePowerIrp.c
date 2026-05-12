/*
 * XREFs of RaidUnitProcessSetDevicePowerIrp @ 0x140007B60
 * Callers:
 *     RaidUnitSetDevicePowerIrp @ 0x1400079E8 (RaidUnitSetDevicePowerIrp.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x14000F548 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x140007CC8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitSendPowerToMiniport @ 0x140008218 (RaidUnitSendPowerToMiniport.c)
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     WPP_SF_d @ 0x140055B28 (WPP_SF_d.c)
 *     WPP_SF_qq @ 0x140067E84 (WPP_SF_qq.c)
 *     McTemplateK0quuupdudddd_EtwWriteTransfer @ 0x140076960 (McTemplateK0quuupdudddd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitProcessSetDevicePowerIrp(char *Context, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  int v5; // r14d
  unsigned int LowPart; // esi
  unsigned int v7; // eax
  __int128 v9; // [rsp+70h] [rbp-48h] BYREF

  v9 = 0LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 53LL, &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids, Context, Irp);
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = *((_DWORD *)Context + 137);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, &v9);
    if ( (byte_140171462 & 0x10) != 0 )
      McTemplateK0quuupdudddd_EtwWriteTransfer(
        Irp->Tail.Overlay.CurrentStackLocation,
        CurrentStackLocation->MinorFunction,
        (unsigned int)&v9,
        *(_DWORD *)(*((_QWORD *)Context + 3) + 56LL),
        Context[104],
        Context[105],
        Context[106],
        (char)Irp,
        CurrentStackLocation->MinorFunction,
        Irp->Tail.Overlay.CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter,
        v5,
        LowPart,
        Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.EaLength);
  }
  if ( LowPart == 4 )
    *((_DWORD *)Context + 234) = 0;
  if ( (unsigned __int8)RaidIsUnitControlSupported(Context, 3LL) )
  {
    v7 = RaidUnitSendPowerToMiniport(Context, Irp);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_d(WPP_GLOBAL_Control->AttachedDevice, 54LL, &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids, v7);
    }
  }
  RaidUnitProcessSetDevicePowerIrpComplete(Context, Irp);
  return 0LL;
}
