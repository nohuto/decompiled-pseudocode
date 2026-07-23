/*
 * XREFs of PopBatteryReadTag @ 0x140AA8E2C
 * Callers:
 *     PopBatteryWorker @ 0x140AC5DB0 (PopBatteryWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     IoSynchronousCallDriver @ 0x14025D510 (IoSynchronousCallDriver.c)
 *     IoReuseIrp @ 0x1402C2EB0 (IoReuseIrp.c)
 */

__int64 __fastcall PopBatteryReadTag(__int64 a1)
{
  IRP *v1; // rbx
  struct _IRP *v2; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS v5; // ebx

  v1 = *(IRP **)(a1 + 56);
  v2 = (struct _IRP *)(a1 + 188);
  *(_DWORD *)(a1 + 188) = 0;
  IoReuseIrp(v1, -1073741637);
  CurrentStackLocation = v1->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 14;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2703424;
  CurrentStackLocation[-1].Parameters.Create.Options = 4;
  CurrentStackLocation[-1].Parameters.Read.Length = 4;
  v1->AssociatedIrp.MasterIrp = v2;
  v5 = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), *(IRP **)(a1 + 56));
  if ( v5 >= 0 )
  {
    v5 = 0;
    *(_DWORD *)(a1 + 108) = *(_DWORD *)&v2->Type;
    *(_DWORD *)(a1 + 104) = 1;
    KeSetEvent((PRKEVENT)(a1 + 80), 0, 0);
  }
  return (unsigned int)v5;
}
