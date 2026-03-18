/*
 * XREFs of WPP_RECORDER_SF_qsLqss @ 0x1400307B0
 * Callers:
 *     ACPIBusIrpUnhandled @ 0x1400303F0 (ACPIBusIrpUnhandled.c)
 *     ACPIFilterIrpDeviceUsageNotificationCompletion @ 0x1400304F0 (ACPIFilterIrpDeviceUsageNotificationCompletion.c)
 *     ACPIRootIrpCompleteRoutine @ 0x1400306A0 (ACPIRootIrpCompleteRoutine.c)
 *     ACPIFilterIrpRemoveDevice @ 0x14003C610 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIBusIrpRemoveDevice @ 0x140050130 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x140050500 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIDockIrpRemoveDevice @ 0x140057860 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBusIrpStartDeviceCompletion @ 0x14005B210 (ACPIBusIrpStartDeviceCompletion.c)
 *     ACPICMButtonStartCompletion @ 0x14005BA00 (ACPICMButtonStartCompletion.c)
 *     ACPICMButtonStartWorker @ 0x14005BB60 (ACPICMButtonStartWorker.c)
 *     ACPIEcStartDeviceCompletion @ 0x14005FBB0 (ACPIEcStartDeviceCompletion.c)
 *     ACPIEcStartDeviceWorker @ 0x14005FD10 (ACPIEcStartDeviceWorker.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1400609D0 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIProcessorContainerStartDeviceCompletion @ 0x140066670 (ACPIProcessorContainerStartDeviceCompletion.c)
 *     ACPIProcessorContainerStartDeviceWorker @ 0x1400667D0 (ACPIProcessorContainerStartDeviceWorker.c)
 *     ACPIRootIrpRemoveDevice @ 0x1400676F0 (ACPIRootIrpRemoveDevice.c)
 *     ACPIFanStartDevice @ 0x140096820 (ACPIFanStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x140096CA0 (ACPIBusAndFilterIrpEject.c)
 *     ACPIDockIrpQueryCapabilities @ 0x140099350 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryDeviceRelations @ 0x140099600 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryInterface @ 0x140099D30 (ACPIDockIrpQueryInterface.c)
 *     ACPIDockIrpQueryPnpDeviceState @ 0x140099F10 (ACPIDockIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpSetLock @ 0x14009B480 (ACPIBusAndFilterIrpSetLock.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x14009B550 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x14009B7D0 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStopDevice @ 0x14009BC90 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x14009E6C0 (ACPIFilterIrpQueryIdCompletion.c)
 *     ACPIFilterIrpStopDevice @ 0x14009E910 (ACPIFilterIrpStopDevice.c)
 *     ACPIRootIrpCancelRemoveOrStopDevice @ 0x1400A6D40 (ACPIRootIrpCancelRemoveOrStopDevice.c)
 *     ACPIRootIrpQueryCapabilities @ 0x1400A6E70 (ACPIRootIrpQueryCapabilities.c)
 *     ACPIRootIrpStopDevice @ 0x1400A7100 (ACPIRootIrpStopDevice.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1400AC190 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIBusIrpQueryResources @ 0x1400AC540 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1400AC9B0 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1400ACEA0 (ACPIFilterIrpFilterResourceRequirements.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1400ADF10 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusIrpDeviceUsageNotification @ 0x1400AF640 (ACPIBusIrpDeviceUsageNotification.c)
 *     ACPIRootIrpQueryInterface @ 0x1400B0340 (ACPIRootIrpQueryInterface.c)
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1400B3C10 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1400B3F44 (ACPIRootIrpQueryBusRelations.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1400B4A80 (ACPIInternalDeviceQueryDeviceRelations.c)
 *     ACPIBusIrpQueryDeviceRelations @ 0x1400B4C70 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1400B78F0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIFilterIrpStartDeviceWorker @ 0x1400B9850 (ACPIFilterIrpStartDeviceWorker.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1400BA750 (ACPIRootIrpQueryDeviceRelations.c)
 *     ACPIFilterIrpStartDevice @ 0x1400BC6E0 (ACPIFilterIrpStartDevice.c)
 *     ACPIFilterIrpDeviceEnumeratedCompletion @ 0x1400BCC50 (ACPIFilterIrpDeviceEnumeratedCompletion.c)
 *     ACPIFilterIrpDeviceUsageNotification @ 0x1400BDD20 (ACPIFilterIrpDeviceUsageNotification.c)
 *     ACPIRootIrpQueryRemoveOrStopDevice @ 0x1400BE7D0 (ACPIRootIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1400C0DF0 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIRootIrpStartDevice @ 0x1400C7AE0 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsLqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  const char *v11; // rdi
  __int64 v12; // r11
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rsi
  unsigned int v17; // r13d
  unsigned __int64 v18; // r9
  unsigned int v19; // r12d
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  char *v24; // r14
  __int64 v25; // r9
  __int64 v26; // r9
  const char *v27; // r11
  __int64 v28; // r8
  __int64 v29; // r8
  const char *v30; // r10
  __int64 v31; // rcx
  __int64 v32; // rcx
  const char *v33; // rdx
  int v34; // [rsp+20h] [rbp-98h]

  v11 = a7;
  v12 = a1;
  v13 = (__int64)a10;
  v14 = -1LL;
  v15 = (__int64)a11;
  v17 = a4;
  v18 = (unsigned __int64)a3 >> 16;
  v19 = a2;
  v20 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v18 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v20, (a3 - 1) & 0x1F) )
  {
    v24 = (char *)WPP_GLOBAL_Control + 80 * v18;
    if ( (unsigned __int8)v24[41] >= a2 )
    {
      if ( a11 )
      {
        v25 = -1LL;
        do
          ++v25;
        while ( a11[v25] );
        v26 = v25 + 1;
      }
      else
      {
        v26 = 5LL;
      }
      v27 = a11;
      if ( !a11 )
        v27 = "NULL";
      if ( a10 )
      {
        v28 = -1LL;
        do
          ++v28;
        while ( a10[v28] );
        v29 = v28 + 1;
      }
      else
      {
        v29 = 5LL;
      }
      v30 = a10;
      if ( !a10 )
        v30 = "NULL";
      if ( a7 )
      {
        v31 = -1LL;
        do
          ++v31;
        while ( a7[v31] );
        v32 = v31 + 1;
      }
      else
      {
        v32 = 5LL;
      }
      v33 = a7;
      if ( !a7 )
        v33 = "NULL";
      ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
        *((_QWORD *)v24 + 3),
        43LL,
        a5,
        v17,
        &a6,
        8LL,
        v33,
        v32,
        &a8,
        4LL,
        &a9,
        8LL,
        v30,
        v29,
        v27,
        v26,
        0LL);
      v12 = a1;
    }
  }
  if ( v15 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( *(_BYTE *)(v15 + v21) );
  }
  if ( v13 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *(_BYTE *)(v22 + v13) );
  }
  if ( v11 )
  {
    do
      ++v14;
    while ( v11[v14] );
  }
  if ( !v11 )
    v11 = "NULL";
  LOWORD(v34) = v17;
  return WppAutoLogTrace(v12, v19, a3, a5, v34, &a6, 8LL, v11);
}
