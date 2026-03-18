/*
 * XREFs of ACPIWakeWaitIrp @ 0x14001F100
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDeviceIrpWaitWakeRequest @ 0x14001F388 (ACPIDeviceIrpWaitWakeRequest.c)
 *     ACPIDispatchForwardOrFailPowerIrp @ 0x14001F554 (ACPIDispatchForwardOrFailPowerIrp.c)
 *     WPP_RECORDER_SF_qqss @ 0x140033134 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_qddqss @ 0x140069FA8 (WPP_RECORDER_SF_qddqss.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ACPIWakeWaitIrp(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  const char *v8; // r8
  const char *v9; // rdx
  const char *v10; // rcx
  __int64 v11; // r10
  const char *v12; // rdx
  int v13; // r9d
  __int64 v14; // r9
  __int64 v15; // [rsp+38h] [rbp-40h]
  _BYTE v16[16]; // [rsp+60h] [rbp-18h] BYREF
  char v17; // [rsp+90h] [rbp+18h] BYREF
  char v18; // [rsp+98h] [rbp+20h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v17 = 0;
  v5 = DeviceExtension;
  v16[0] = 0;
  v18 = 0;
  v6 = *(_QWORD *)(DeviceExtension + 8);
  if ( (v6 & 0x10000) == 0 )
    return ACPIDispatchForwardOrFailPowerIrp(a1, a2);
  if ( _bittest64((const signed __int64 *)(DeviceExtension + 1120), 0x20u) && !*(_QWORD *)(DeviceExtension + 680) )
  {
    v9 = byte_1400753E8;
    v10 = byte_1400753E8;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v9 = *(const char **)(DeviceExtension + 608);
      if ( (v6 & 0x400000000000LL) != 0 )
        v10 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = (__int64)v9;
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_qqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v9,
        17,
        26,
        (__int64)&WPP_1095886ccac338778821f66e45f1cb69_Traceguids,
        (char)a2,
        DeviceExtension,
        v15,
        (__int64)v10);
    }
    return ACPIDispatchForwardOrFailPowerIrp(a1, a2);
  }
  if ( (v6 & 0x102000000LL) != 0 && (v6 & 0x20) == 0 )
  {
    (*((void (__fastcall **)(_QWORD, char *, _BYTE *, char *))PciPmeInterface + 4))(
      *(_QWORD *)(DeviceExtension + 784),
      &v17,
      v16,
      &v18);
    if ( v17 )
    {
      if ( !_bittest64((const signed __int64 *)(v5 + 8), 0x3Bu) )
        return ACPIDispatchForwardOrFailPowerIrp(a1, a2);
    }
  }
  if ( *(_DWORD *)(v5 + 536) < (signed int)a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
  {
    v11 = *(_QWORD *)(v5 + 8);
    v12 = byte_1400753E8;
    v8 = byte_1400753E8;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v12 = *(const char **)(v5 + 608);
      if ( (v11 & 0x400000000000LL) != 0 )
        v8 = *(const char **)(v5 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_26;
    v13 = 27;
    goto LABEL_25;
  }
  LODWORD(v8) = *(_DWORD *)(v5 + 384);
  if ( *(_DWORD *)(v5 + 540) >= (int)v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 728));
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    ACPIDeviceIrpWaitWakeRequest(a1, a2);
    return 259LL;
  }
  v14 = *(_QWORD *)(v5 + 8);
  v12 = byte_1400753E8;
  if ( (v14 & 0x200000000000LL) != 0 )
    v12 = *(const char **)(v5 + 608);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = 28;
LABEL_25:
    WPP_RECORDER_SF_qddqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v12, (_DWORD)v8, v13);
  }
LABEL_26:
  a2->IoStatus.Status = -1073741436;
  IofCompleteRequest(a2, 0);
  return 3221225860LL;
}
