/*
 * XREFs of ACPIRootIrpSetPower @ 0x140047C90
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDispatchForwardPowerIrp @ 0x14001B990 (ACPIDispatchForwardPowerIrp.c)
 *     WPP_RECORDER_SF_qdqss @ 0x14001D6DC (WPP_RECORDER_SF_qdqss.c)
 *     ACPIDeviceIrpSystemRequest @ 0x140047DB0 (ACPIDeviceIrpSystemRequest.c)
 *     _ACPIInternalError @ 0x14004C514 (_ACPIInternalError.c)
 */

__int64 __fastcall ACPIRootIrpSetPower(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  char v7; // cl
  const char *v8; // r8
  const char *v9; // r10
  __int64 v10; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = DeviceExtension;
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  if ( (AcpiGlobalFlags & 1) == 0 )
    ACPIInternalError(0xD066CuLL);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = 0;
  if ( CurrentStackLocation->Parameters.Create.Options || (CurrentStackLocation->Parameters.Read.Length & 0x200000) != 0 )
  {
    ACPIDispatchForwardPowerIrp(a1, a2);
  }
  else
  {
    a2->IoStatus.Status = 0;
    v8 = byte_140075488;
    v9 = byte_140075488;
    if ( DeviceExtension )
    {
      v10 = *(_QWORD *)(DeviceExtension + 8);
      v7 = v5;
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v8 = *(const char **)(v5 + 608);
        if ( (v10 & 0x400000000000LL) != 0 )
          v9 = *(const char **)(v5 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)CurrentStackLocation,
        5u,
        0x18u,
        (__int64)&WPP_407264dfc63035306de6021495d93ce2_Traceguids,
        (char)a2,
        CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 1,
        v7,
        v8,
        v9);
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 728));
    ACPIDeviceIrpSystemRequest(a1, a2);
  }
  return 259LL;
}
