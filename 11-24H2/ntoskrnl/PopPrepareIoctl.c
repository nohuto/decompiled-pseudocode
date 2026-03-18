/*
 * XREFs of PopPrepareIoctl @ 0x140A5D1E8
 * Callers:
 *     PopBatteryAdd @ 0x14075AC50 (PopBatteryAdd.c)
 *     PopBatteryQueryStatus @ 0x14075ADC4 (PopBatteryQueryStatus.c)
 *     PopPowerAdapterAdd @ 0x14075B550 (PopPowerAdapterAdd.c)
 *     PopPowerAdapterQueryStatus @ 0x14075BB40 (PopPowerAdapterQueryStatus.c)
 *     PopThermalWorker @ 0x140A40A30 (PopThermalWorker.c)
 *     PopFanWorker @ 0x140A83710 (PopFanWorker.c)
 *     PopBatteryWorker @ 0x140AC7D70 (PopBatteryWorker.c)
 * Callees:
 *     IoReuseIrp @ 0x14031A320 (IoReuseIrp.c)
 */

__int64 __fastcall PopPrepareIoctl(IRP *a1, ULONG a2, char a3, struct _IRP *a4, ULONG a5, ULONG a6)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 result; // rax

  IoReuseIrp(a1, -1073741637);
  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = (a3 != 0) + 14;
  CurrentStackLocation[-1].Parameters.Create.Options = a5;
  result = a6;
  CurrentStackLocation[-1].Parameters.Read.Length = a6;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a2;
  a1->AssociatedIrp.MasterIrp = a4;
  return result;
}
