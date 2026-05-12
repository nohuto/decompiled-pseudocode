/*
 * XREFs of RaidAdapterQueryPowerIrp @ 0x1400070EC
 * Callers:
 *     RaidAdapterPowerIrp @ 0x140006D90 (RaidAdapterPowerIrp.c)
 * Callees:
 *     RaidAdapterQuerySystemPowerIrp @ 0x140008728 (RaidAdapterQuerySystemPowerIrp.c)
 *     WPP_SF_qqs @ 0x14007AAAC (WPP_SF_qqs.c)
 *     WPP_SF_qqsD @ 0x14007AB4C (WPP_SF_qqsD.c)
 */

NTSTATUS __fastcall RaidAdapterQueryPowerIrp(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  unsigned int Options; // ebp
  const char *v6; // r14
  NTSTATUS SystemPowerIrp; // eax
  int v8; // edi
  const char *v10; // rax
  _IO_STACK_LOCATION *v11; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart >= 6 )
  {
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    return PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  v6 = "System";
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    v10 = "System";
    if ( Options )
      v10 = "Device";
    WPP_SF_qqs(WPP_GLOBAL_Control->AttachedDevice, 13, (_DWORD)CurrentStackLocation, a1, (char)a2, (__int64)v10);
  }
  if ( !Options )
  {
    SystemPowerIrp = RaidAdapterQuerySystemPowerIrp(a1, a2);
LABEL_5:
    v8 = SystemPowerIrp;
    goto LABEL_6;
  }
  if ( Options == 1 )
  {
    v11 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v11[-1].MajorFunction = *(_OWORD *)&v11->MajorFunction;
    *(_OWORD *)&v11[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v11->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v11[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v11->Parameters.SetQuota + 6);
    v11[-1].FileObject = v11->FileObject;
    v11[-1].Control = 0;
    SystemPowerIrp = PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
    goto LABEL_5;
  }
  v8 = -1073741823;
LABEL_6:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( Options )
      v6 = "Device";
    WPP_SF_qqsD(WPP_GLOBAL_Control->AttachedDevice, 14, (_DWORD)CurrentStackLocation, a1, (char)a2, (__int64)v6, v8);
  }
  return v8;
}
