/*
 * XREFs of PopPrepareIoctl @ 0x140A54F18
 * Callers:
 *     PopBatteryAdd @ 0x140759340 (PopBatteryAdd.c)
 *     PopBatteryQueryStatus @ 0x1407594B4 (PopBatteryQueryStatus.c)
 *     PopPowerAdapterAdd @ 0x14075A030 (PopPowerAdapterAdd.c)
 *     PopPowerAdapterQueryStatus @ 0x14075A84C (PopPowerAdapterQueryStatus.c)
 *     PopPowerAdapterReinitialize @ 0x14075AA58 (PopPowerAdapterReinitialize.c)
 *     PopThermalWorker @ 0x140A36310 (PopThermalWorker.c)
 *     PopFanWorker @ 0x140A7E230 (PopFanWorker.c)
 *     PopBatteryInitialize @ 0x140AC5B8C (PopBatteryInitialize.c)
 *     PopBatteryWorker @ 0x140AC5DB0 (PopBatteryWorker.c)
 * Callees:
 *     IoReuseIrp @ 0x1402C2EB0 (IoReuseIrp.c)
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
