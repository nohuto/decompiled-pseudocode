/*
 * XREFs of ACPIDeviceIrpForwardRequest @ 0x14001C090
 * Callers:
 *     ACPIDeviceIrpSystemRequest @ 0x140047DB0 (ACPIDeviceIrpSystemRequest.c)
 * Callees:
 *     ACPIInternalDecrementIrpReferenceCount @ 0x14001B414 (ACPIInternalDecrementIrpReferenceCount.c)
 *     ACPIDispatchForwardPowerIrp @ 0x14001B990 (ACPIDispatchForwardPowerIrp.c)
 *     WPP_RECORDER_SF_qLqss @ 0x140028718 (WPP_RECORDER_SF_qLqss.c)
 */

LONG __fastcall ACPIDeviceIrpForwardRequest(__int64 a1, IRP *a2, int a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  const char *v6; // rcx
  char v7; // r8
  const char *v9; // rdx
  __int64 v11; // rax
  __int64 v12; // [rsp+48h] [rbp-10h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = byte_1400753E8;
  v7 = 0;
  v9 = byte_1400753E8;
  if ( a1 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    v7 = a1;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v6 = *(const char **)(a1 + 608);
      if ( (v11 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(a1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = (__int64)v9;
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v9,
      10,
      32,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      (char)a2,
      a3,
      v7,
      (__int64)v6,
      v12);
  }
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1 )
    *(_BYTE *)(a1 + 556) = 0;
  if ( a3 < 0 )
  {
    a2->IoStatus.Status = a3;
    IofCompleteRequest(a2, 0);
  }
  else
  {
    ACPIDispatchForwardPowerIrp((ULONG_PTR)CurrentStackLocation->DeviceObject, a2);
  }
  return ACPIInternalDecrementIrpReferenceCount(a1);
}
