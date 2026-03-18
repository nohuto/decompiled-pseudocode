/*
 * XREFs of ACPIBusAndFilterIrpSetLock @ 0x14009B480
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1400307B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x140040AF4 (ACPIDebugGetIrpText.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpSetLock(ULONG_PTR a1, __int64 a2)
{
  char v2; // di
  unsigned int v3; // ebx
  unsigned __int8 v4; // si
  __int64 DeviceExtension; // rax
  __int64 v6; // rcx
  char *IrpText; // rax
  char v8; // r8
  const char *v9; // r10
  const char *v10; // r11

  v2 = a2;
  v3 = *(_DWORD *)(a2 + 48);
  v4 = *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( DeviceExtension )
    v6 = *(_QWORD *)(DeviceExtension + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v6, v4);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x18u,
      (__int64)&WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids,
      v2,
      IrpText,
      v3,
      v8,
      v9,
      v10);
  }
  return v3;
}
