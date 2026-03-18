/*
 * XREFs of ACPIEcOtherIrpDispatch @ 0x14009C670
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDispatchForwardIrp @ 0x14001DF70 (ACPIDispatchForwardIrp.c)
 *     ACPIEcReadWrite @ 0x14009C720 (ACPIEcReadWrite.c)
 *     ACPIEcConnectHandler @ 0x14009CE70 (ACPIEcConnectHandler.c)
 *     ACPIEcDisconnectHandler @ 0x14009D090 (ACPIEcDisconnectHandler.c)
 */

__int64 __fastcall ACPIEcOtherIrpDispatch(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int v5; // edi
  __int64 v6; // rcx
  unsigned int v7; // eax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction != 3 && CurrentStackLocation->MajorFunction != 4 )
  {
    if ( CurrentStackLocation->MajorFunction != 15 )
      return ACPIDispatchForwardIrp(a1, a2);
    a2->IoStatus.Information = 0LL;
    v5 = -1073741811;
    v6 = *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 184);
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2228247 )
    {
      v7 = ACPIEcConnectHandler(v6, a2);
    }
    else
    {
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2228251 )
        goto LABEL_10;
      v7 = ACPIEcDisconnectHandler(v6, a2);
    }
    v5 = v7;
    if ( v7 == 259 )
      return v5;
LABEL_10:
    a2->IoStatus.Status = v5;
    IofCompleteRequest(a2, 0);
    return v5;
  }
  return ACPIEcReadWrite(a1, a2);
}
