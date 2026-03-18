/*
 * XREFs of ACPIRootIrpQueryPower @ 0x140029A30
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIGetParent @ 0x1400160B8 (AMLIGetParent.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDispatchForwardPowerIrp @ 0x14001B990 (ACPIDispatchForwardPowerIrp.c)
 *     WPP_RECORDER_SF_qLqss @ 0x140028718 (WPP_RECORDER_SF_qLqss.c)
 *     AMLIIsNamedChildPresent @ 0x140029050 (AMLIIsNamedChildPresent.c)
 */

__int64 __fastcall ACPIRootIrpQueryPower(ULONG_PTR a1, IRP *a2)
{
  unsigned int Status; // ebx
  bool v5; // r14
  __int64 DeviceExtension; // rax
  _QWORD *v7; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // edi
  __int64 *v14; // rbx
  bool v15; // di
  char v16; // r8
  const char *v17; // rax
  const char *v18; // rdx
  __int64 v19; // rcx

  Status = a2->IoStatus.Status;
  v5 = 1;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v7 = (_QWORD *)DeviceExtension;
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation->Parameters.Create.Options )
  {
    if ( CurrentStackLocation->Parameters.Create.EaLength == 7 )
    {
LABEL_3:
      v5 = 0;
      Status = -1073741808;
      goto LABEL_15;
    }
    v9 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( (unsigned int)(v12 - 1) <= 1 )
            {
              Status = 0;
              goto LABEL_15;
            }
            goto LABEL_3;
          }
          v13 = 1597199199;
        }
        else
        {
          v13 = 1597133663;
        }
      }
      else
      {
        v13 = 1597068127;
      }
    }
    else
    {
      v13 = 1597002591;
    }
    v14 = (__int64 *)AMLIGetParent(*(_QWORD *)(DeviceExtension + 760));
    v15 = AMLIIsNamedChildPresent(v14, v13);
    AMLIDereferenceHandleEx((__int64)v14);
    v5 = v15;
    Status = !v15 ? 0xC0000010 : 0;
  }
LABEL_15:
  v16 = 0;
  a2->IoStatus.Status = Status;
  v17 = byte_140075488;
  v18 = byte_140075488;
  if ( v7 )
  {
    v19 = v7[1];
    v16 = (char)v7;
    if ( (v19 & 0x200000000000LL) != 0 )
    {
      v17 = (const char *)v7[76];
      if ( (v19 & 0x400000000000LL) != 0 )
        v18 = (const char *)v7[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x15u,
      (__int64)&WPP_407264dfc63035306de6021495d93ce2_Traceguids,
      (char)a2,
      Status,
      v16,
      v17,
      v18);
  if ( v5 )
    ACPIDispatchForwardPowerIrp(a1, a2);
  else
    IofCompleteRequest(a2, 0);
  return 259LL;
}
