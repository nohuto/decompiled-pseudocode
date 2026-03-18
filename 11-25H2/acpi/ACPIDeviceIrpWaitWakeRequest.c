/*
 * XREFs of ACPIDeviceIrpWaitWakeRequest @ 0x14001F388
 * Callers:
 *     ACPIWakeWaitIrp @ 0x14001F100 (ACPIWakeWaitIrp.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDeviceInitializePowerRequest @ 0x14001BA00 (ACPIDeviceInitializePowerRequest.c)
 *     WPP_RECORDER_SF_qdqss @ 0x14001D6DC (WPP_RECORDER_SF_qdqss.c)
 */

__int64 __fastcall ACPIDeviceIrpWaitWakeRequest(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rdi
  const char *v7; // rcx
  const char *v8; // r8
  int v9; // eax
  __int64 v11; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = 0LL;
  v5 = DeviceExtension;
  v6 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  v7 = byte_140075488;
  v8 = byte_140075488;
  if ( DeviceExtension )
  {
    v11 = *(_QWORD *)(DeviceExtension + 8);
    v4 = v5;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(v5 + 608);
      if ( (v11 & 0x400000000000LL) != 0 )
        v8 = *(const char **)(v5 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( (unsigned int)v6 >= 7 )
      LOBYTE(v9) = -1;
    else
      v9 = AcpiSystemStateTranslation[v6];
    WPP_RECORDER_SF_qdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v4,
      0x11u,
      0x22u,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a2,
      v9,
      v4,
      v7,
      v8);
  }
  return ACPIDeviceInitializePowerRequest(
           v5,
           v6,
           0LL,
           (void (__fastcall *)(__int64, __int64, __int64))ACPIDeviceIrpCompleteRequest,
           a2,
           0,
           2,
           2u);
}
