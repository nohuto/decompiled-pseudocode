/*
 * XREFs of PopAcquirePowerLimitInterface @ 0x1407492F0
 * Callers:
 *     PopAssociatePowerLimitRequest @ 0x1407493A8 (PopAssociatePowerLimitRequest.c)
 *     PopPowerLimitPnpNotification @ 0x140749CA0 (PopPowerLimitPnpNotification.c)
 * Callees:
 *     IoAllocateIrp @ 0x14025AD60 (IoAllocateIrp.c)
 *     IoSynchronousCallDriver @ 0x14025D510 (IoSynchronousCallDriver.c)
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 */

__int64 __fastcall PopAcquirePowerLimitInterface(__int64 a1)
{
  PIRP Irp; // rax
  IRP *v3; // rsi
  NTSTATUS v4; // edi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx

  Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(a1 + 56) + 76LL), 0);
  v3 = Irp;
  if ( Irp )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)&GUID_POWER_LIMIT_INTERFACE;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = a1 + 112;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
    CurrentStackLocation[-1].Parameters.Create.Options = 65600;
    Irp->IoStatus.Status = -1073741637;
    v4 = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 56), Irp);
    if ( v4 >= 0 && (!*(_QWORD *)(a1 + 152) || !*(_QWORD *)(a1 + 160) || !*(_QWORD *)(a1 + 168)) )
      v4 = -1073741637;
    IoFreeIrp(v3);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v4;
}
