/*
 * XREFs of ACPIDockIrpQueryPower @ 0x140057710
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDispatchPowerIrpSuccess @ 0x140028E60 (ACPIDispatchPowerIrpSuccess.c)
 *     AMLIIsNamedChildPresent @ 0x140029050 (AMLIIsNamedChildPresent.c)
 *     WPP_RECORDER_SF_qqss @ 0x140033134 (WPP_RECORDER_SF_qqss.c)
 */

__int64 __fastcall ACPIDockIrpQueryPower(ULONG_PTR a1, IRP *a2)
{
  _QWORD *DeviceExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  const char *v7; // rcx
  const char *v8; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 *v11; // r8
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // edx

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  v5 = DeviceExtension[23];
  if ( !v5 )
  {
    v6 = DeviceExtension[1];
    v7 = byte_1400753E8;
    v8 = byte_1400753E8;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v7 = (const char *)DeviceExtension[76];
      if ( (v6 & 0x400000000000LL) != 0 )
        v8 = (const char *)DeviceExtension[77];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x12u,
        0x19u,
        (__int64)&WPP_6a0c72af8ad13ec042225ebd05f61004_Traceguids,
        (char)a2,
        (char)DeviceExtension,
        v7,
        v8);
    goto LABEL_7;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation->Parameters.Create.Options && CurrentStackLocation->Parameters.Create.EaLength == 7 )
  {
    v11 = *(__int64 **)(v5 + 760);
    v12 = ((CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF) - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            if ( v15 != 1 )
              goto LABEL_7;
            v16 = 877282655;
          }
          else
          {
            v16 = 860505439;
          }
        }
        else
        {
          v16 = 843728223;
        }
      }
      else
      {
        v16 = 826951007;
      }
      if ( !AMLIIsNamedChildPresent(v11, v16) )
      {
        a2->IoStatus.Status = -1073741823;
        IofCompleteRequest(a2, 0);
        return 259LL;
      }
    }
  }
LABEL_7:
  ACPIDispatchPowerIrpSuccess(a1, a2);
  return 259LL;
}
