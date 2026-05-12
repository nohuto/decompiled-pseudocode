/*
 * XREFs of RaidAdapterSetPowerIrp @ 0x140007260
 * Callers:
 *     RaidAdapterPowerIrp @ 0x140006D90 (RaidAdapterPowerIrp.c)
 * Callees:
 *     RaidAdapterSetDevicePowerIrp @ 0x1400073D4 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1400099D8 (RaidAdapterSetSystemPowerIrp.c)
 *     WPP_SF_qqs @ 0x14007AAAC (WPP_SF_qqs.c)
 *     WPP_SF_qqsD @ 0x14007AB4C (WPP_SF_qqsD.c)
 */

NTSTATUS __fastcall RaidAdapterSetPowerIrp(__int64 a1, IRP *a2, int a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int LowPart; // ebx
  unsigned int Options; // ebp
  const char *v8; // r14
  int v9; // eax
  int v10; // ebx
  _IO_STACK_LOCATION *v12; // rax
  const char *v13; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v8 = "System";
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    v13 = "System";
    if ( Options )
      v13 = "Device";
    WPP_SF_qqs(WPP_GLOBAL_Control->AttachedDevice, 15, a3, a1, (char)a2, (__int64)v13);
  }
  if ( !Options )
  {
    if ( LowPart > 6 )
    {
      v12 = a2->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v12[-1].MajorFunction = *(_OWORD *)&v12->MajorFunction;
      *(_OWORD *)&v12[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v12->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v12[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v12->Parameters.SetQuota + 6);
      v12[-1].FileObject = v12->FileObject;
      v12[-1].Control = 0;
      return PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
    }
    v9 = RaidAdapterSetSystemPowerIrp(a1, a2);
    goto LABEL_6;
  }
  if ( Options == 1 )
  {
    v9 = RaidAdapterSetDevicePowerIrp(a1, a2);
LABEL_6:
    v10 = v9;
    goto LABEL_7;
  }
  v10 = -1073741823;
LABEL_7:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( Options )
      v8 = "Device";
    WPP_SF_qqsD(WPP_GLOBAL_Control->AttachedDevice, 16, a3, a1, (char)a2, (__int64)v8, v10);
  }
  return v10;
}
