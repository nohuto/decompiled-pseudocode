/*
 * XREFs of ACPIFilterIrpStartDevice @ 0x1400BC6E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1400307B0 (WPP_RECORDER_SF_qsLqss.c)
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     ACPIDebugGetIrpText @ 0x140040AF4 (ACPIDebugGetIrpText.c)
 *     ACPIInitStartDevice @ 0x140044BF4 (ACPIInitStartDevice.c)
 *     ACPIQueryGedDeviceInterface @ 0x1400617C8 (ACPIQueryGedDeviceInterface.c)
 */

__int64 __fastcall ACPIFilterIrpStartDevice(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v5; // rcx
  __int64 DeviceExtension; // rbx
  __int64 result; // rax
  char *IrpText; // rax
  const char *v9; // r8
  const char *v10; // r10
  char v11; // r11
  int v12; // eax
  __int64 v13; // [rsp+28h] [rbp-50h]

  v2 = *(_QWORD *)(a2 + 184);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v5, *(_BYTE *)(v2 + 1));
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x18u,
      (__int64)&WPP_9d2f517172373c998ff4f5e88626c58e_Traceguids,
      a2,
      IrpText,
      *(_DWORD *)(a2 + 48),
      v11,
      v9,
      v10);
  }
  if ( _bittest64((const signed __int64 *)(DeviceExtension + 1120), 0x26u) )
  {
    v12 = ACPIQueryGedDeviceInterface((_QWORD *)DeviceExtension);
    if ( v12 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v13) = v12;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        8u,
        0x19u,
        (__int64)&WPP_9d2f517172373c998ff4f5e88626c58e_Traceguids,
        v13);
    }
  }
  result = ACPIInitStartDevice(
             a1,
             v2,
             (void (__fastcall *)(__int64, __int64, _QWORD))ACPIFilterIrpStartDeviceCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}
