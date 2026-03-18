/*
 * XREFs of WPP_RECORDER_SF_qqss @ 0x140033134
 * Callers:
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x14001C880 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase6 @ 0x14001CB70 (ACPIDevicePowerProcessPhase5DeviceSubPhase6.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x14001CCE0 (ACPIDevicePowerProcessPhase0DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x14001CE80 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x14001D940 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIWakeWaitIrp @ 0x14001F100 (ACPIWakeWaitIrp.c)
 *     ACPIFanDeviceControl @ 0x14002BA40 (ACPIFanDeviceControl.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1400313E0 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1400314A0 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x140031560 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1400318F0 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x140032430 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x140034590 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDetectDuplicateHID @ 0x14003B994 (ACPIDetectDuplicateHID.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1400482A0 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x140049510 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x14004B120 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     ACPIDockIrpQueryPower @ 0x140057710 (ACPIDockIrpQueryPower.c)
 *     ACPIFanCancelRequest @ 0x1400602A0 (ACPIFanCancelRequest.c)
 *     ACPIQueryGedDeviceInterface @ 0x1400617C8 (ACPIQueryGedDeviceInterface.c)
 *     ACPIMatchKernelPorts @ 0x140063710 (ACPIMatchKernelPorts.c)
 *     ACPIBusAndFilterIrpEject @ 0x140096CA0 (ACPIBusAndFilterIrpEject.c)
 *     ACPIDockIrpEject @ 0x1400990B0 (ACPIDockIrpEject.c)
 *     ACPIDockIrpQueryCapabilities @ 0x140099350 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryEjectRelations @ 0x140099818 (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIDockIrpQueryID @ 0x140099A00 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpStartDevice @ 0x14009A030 (ACPIDockIrpStartDevice.c)
 *     ACPIThermalStartDevice @ 0x1400A78E0 (ACPIThermalStartDevice.c)
 *     ACPIBusIrpQueryResources @ 0x1400AC540 (ACPIBusIrpQueryResources.c)
 *     ACPIRootIrpStartDevice @ 0x1400C7AE0 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        const char *a8,
        const char *a9)
{
  __int64 v9; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbx
  unsigned __int64 v14; // r14
  unsigned int v15; // ebp
  unsigned int v16; // r12d
  int v17; // eax
  unsigned __int8 v18; // cf
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v22; // r8
  const char *v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rdx
  const char *v26; // rcx
  int v27; // [rsp+20h] [rbp-78h]

  v9 = (__int64)a8;
  v11 = (__int64)a9;
  v12 = -1LL;
  v14 = (unsigned __int64)a3 >> 16;
  v15 = a2;
  v16 = a4;
  v17 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v14 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v18 = _bittest(&v17, (a3 - 1) & 0x1F);
  v19 = 5LL;
  if ( v18 && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v14 + 1) >= a2 )
  {
    if ( a9 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a9[v22] );
      v19 = v22 + 1;
    }
    v23 = a9;
    if ( !a9 )
      v23 = "NULL";
    if ( a8 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a8[v24] );
      v25 = v24 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    v26 = a8;
    if ( !a8 )
      v26 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v14),
      43LL,
      a5,
      v16,
      &a6,
      8LL,
      &a7,
      8LL,
      v26,
      v25,
      v23,
      v19,
      0LL);
  }
  if ( v11 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *(_BYTE *)(v11 + v20) );
  }
  if ( v9 )
  {
    do
      ++v12;
    while ( *(_BYTE *)(v9 + v12) );
  }
  LOWORD(v27) = v16;
  return WppAutoLogTrace(a1, v15, a3, a5, v27, &a6, 8LL, &a7);
}
