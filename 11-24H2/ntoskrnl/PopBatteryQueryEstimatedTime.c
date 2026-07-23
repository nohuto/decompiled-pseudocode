/*
 * XREFs of PopBatteryQueryEstimatedTime @ 0x140A7CB50
 * Callers:
 *     PopBatteryWorker @ 0x140AC5DB0 (PopBatteryWorker.c)
 * Callees:
 *     IoSynchronousCallDriver @ 0x14025D510 (IoSynchronousCallDriver.c)
 *     IoReuseIrp @ 0x1402C2EB0 (IoReuseIrp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall PopBatteryQueryEstimatedTime(__int64 a1, int a2)
{
  int v2; // eax
  IRP *v4; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS v6; // eax
  unsigned int v7; // ecx
  _DWORD v9[4]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(a1 + 108);
  v4 = *(IRP **)(a1 + 56);
  v9[2] = a2;
  v9[0] = v2;
  v9[1] = 3;
  IoReuseIrp(v4, -1073741637);
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 14;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2703428;
  CurrentStackLocation[-1].Parameters.Create.Options = 12;
  CurrentStackLocation[-1].Parameters.Read.Length = 4;
  v4->AssociatedIrp.MasterIrp = (struct _IRP *)v9;
  v6 = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), *(IRP **)(a1 + 56));
  v7 = v9[0];
  if ( v6 < 0 )
    return (unsigned int)-1;
  return v7;
}
