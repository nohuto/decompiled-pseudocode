/*
 * XREFs of ACPIBusIrpQueryPower @ 0x140028D80
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDockIsDockDevice @ 0x1400284D4 (ACPIDockIsDockDevice.c)
 *     ACPIDispatchPowerIrpSuccess @ 0x140028E60 (ACPIDispatchPowerIrpSuccess.c)
 *     AMLIIsNamedChildPresent @ 0x140029050 (AMLIIsNamedChildPresent.c)
 */

__int64 __fastcall ACPIBusIrpQueryPower(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 DeviceExtension; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation->Control |= 1u;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( CurrentStackLocation->Parameters.Create.Options || CurrentStackLocation->Parameters.Create.EaLength != 7 )
    goto LABEL_8;
  if ( _bittest64((const signed __int64 *)(DeviceExtension + 8), 0x33u) )
    goto LABEL_16;
  v6 = *(_QWORD *)(DeviceExtension + 760);
  if ( !ACPIDockIsDockDevice() )
  {
    switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
    {
      case 2u:
        v7 = 826951007LL;
        break;
      case 3u:
        v7 = 843728223LL;
        break;
      case 4u:
        v7 = 860505439LL;
        break;
      case 5u:
        v7 = 877282655LL;
        break;
      default:
        goto LABEL_16;
    }
    if ( (unsigned __int8)AMLIIsNamedChildPresent(v6, v7) )
      goto LABEL_8;
LABEL_16:
    a2->IoStatus.Status = -1073741823;
    IofCompleteRequest(a2, 0);
    return 259LL;
  }
LABEL_8:
  ACPIDispatchPowerIrpSuccess(a1, a2);
  return 259LL;
}
