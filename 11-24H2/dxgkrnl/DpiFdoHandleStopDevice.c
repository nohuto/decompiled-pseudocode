/*
 * XREFs of DpiFdoHandleStopDevice @ 0x1402421F0
 * Callers:
 *     DpiFdoHandleRemoveDevice @ 0x140241460 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1402425A0 (DpiFdoHandleSurpriseRemoval.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     DpiCheckForOutstandingD3Requests @ 0x14002A8E8 (DpiCheckForOutstandingD3Requests.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003551C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140041998 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1400419DC (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DpiFdoIsPostDevice @ 0x14004D4F0 (DpiFdoIsPostDevice.c)
 *     DpiFdoIsMsBddAnchoredDevice @ 0x140058E78 (DpiFdoIsMsBddAnchoredDevice.c)
 *     DpiRemoveAdapter @ 0x14007C860 (DpiRemoveAdapter.c)
 *     DxgkCompletePnPTransition @ 0x1401FCD58 (DxgkCompletePnPTransition.c)
 *     DxgkStartPnPTransition @ 0x1401FD198 (DxgkStartPnPTransition.c)
 *     DpiFdoCloseDeviceFileObject @ 0x14023D01C (DpiFdoCloseDeviceFileObject.c)
 *     DpiFdoStopAdapter @ 0x140248100 (DpiFdoStopAdapter.c)
 *     DpiEnableMsBddFallbackDriver @ 0x140249F1C (DpiEnableMsBddFallbackDriver.c)
 *     DpiPnpEnableVga @ 0x14024A8C4 (DpiPnpEnableVga.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x140253BC8 (DpiLdaStopAllAdaptersInChain.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 *     DpiRequestIoPowerState @ 0x14039F1A8 (DpiRequestIoPowerState.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1403C4B50 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiFdoStopMiracastSession @ 0x1403E12A0 (DpiFdoStopMiracastSession.c)
 */

__int64 __fastcall DpiFdoHandleStopDevice(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // r15
  __int64 DeviceExtension; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdi
  NTSTATUS v8; // r12d
  _QWORD *started; // r14
  char v10; // r13
  __int64 v11; // r8
  __int64 v12; // rax
  void *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v18; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v20[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v21; // [rsp+90h] [rbp+8h] BYREF

  LOBYTE(v20[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v20, 0LL, 5u, 0);
  v4 = v20[1];
  DeviceExtension = (__int64)a1->DeviceExtension;
  LOBYTE(v6) = 1;
  v21 = -300000000LL;
  v7 = 0LL;
  v8 = 0;
  started = 0LL;
  v10 = 0;
  DpiFdoStopMiracastSession(a1, v6, &v21, 130LL);
  AcquireMiniportListMutex();
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  if ( !*(_DWORD *)(DeviceExtension + 504) || *(_BYTE *)(DeviceExtension + 508) )
  {
    if ( *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
      v7 = DeviceExtension;
  }
  else
  {
    v12 = *(_QWORD *)(DeviceExtension + 2832);
    if ( v12 )
      v7 = *(_QWORD *)(v12 + 64);
  }
  if ( *(_DWORD *)(DeviceExtension + 240) == 2 )
  {
    v10 = 1;
    if ( (unsigned int)(*(_DWORD *)(DeviceExtension + 236) - 5) <= 1 )
    {
      started = DxgkStartPnPTransition(0LL, 0x200000000LL);
      if ( !started )
      {
        WdLogSingleEntry1(6LL, -1073741670LL);
        WdLogGlobalForLineNumber = 7996;
      }
    }
  }
  if ( *(_DWORD *)(DeviceExtension + 236) == 6 && v7 )
  {
    if ( *(_BYTE *)(v7 + 480) )
    {
      if ( *(_DWORD *)(v7 + 4120) != 3 && *(_QWORD *)(v7 + 4032) )
      {
        DpiRemoveAdapter(v7, 0, 0, 1);
        *(_DWORD *)(v7 + 4120) = 3;
      }
    }
    else
    {
      DpiRequestIoPowerState(*(_QWORD *)(v7 + 24), 3LL, v11, 0LL);
    }
  }
  if ( *(_DWORD *)(DeviceExtension + 504) )
  {
    DpiLdaStopAllAdaptersInChain(a1, v4);
  }
  else if ( *(_DWORD *)(DeviceExtension + 240) == 2 )
  {
    DpiFdoStopAdapter(a1);
  }
  DpiFdoCloseDeviceFileObject(DeviceExtension);
  v13 = *(void **)(DeviceExtension + 1312);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    *(_QWORD *)(DeviceExtension + 1312) = 0LL;
  }
  if ( *(_DWORD *)(DeviceExtension + 236) != 4 )
  {
    *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7) + 244) = *(_DWORD *)(DeviceExtension + 240);
    v14 = *(_DWORD *)(DeviceExtension + 236);
    ++*(_DWORD *)(DeviceExtension + 276);
    *(_DWORD *)(DeviceExtension + 240) = v14;
    *(_DWORD *)(DeviceExtension + 236) = 4;
  }
  WdLogSingleEntry1(4LL, a1);
  WdLogGlobalForLineNumber = 8093;
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
  KeLeaveCriticalRegion();
  if ( (unsigned int)(*(_DWORD *)(DeviceExtension + 240) - 5) <= 1 )
  {
    if ( v10 )
    {
      if ( DpiFdoIsMsBddAnchoredDevice((__int64)a1) && dword_140161110 == 2 )
        DpiEnableMsBddFallbackDriver(started);
      if ( v7 && *(_BYTE *)(v7 + 2847) )
      {
        DxgkCompletePnPTransition((struct _PNP_TRANS_TOKEN *)started);
      }
      else
      {
        LOBYTE(v15) = 1;
        DpiPnpEnableVga(v15, 0LL, started, v4);
      }
    }
    if ( DpiFdoIsPostDevice((__int64)a1) )
      qword_140160FC0 = 0LL;
    if ( DpiFdoIsMsBddAnchoredDevice(v16) )
      qword_140161068 = 0LL;
  }
  ReleaseMiniportListMutex();
  DxgkMiracastQueryMiracastSupportInternal(0LL);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MinorFunction == 4 )
  {
    ++a2->CurrentLocation;
    a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
    a2->IoStatus.Status = 0;
    v8 = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
  }
  if ( v7 )
    v18 = *(_QWORD *)(v7 + 4032);
  else
    v18 = 0LL;
  DxgkLogInternalTriageEvent(
    v18,
    131078LL,
    0xFFFFFFFFLL,
    L"Adapter StopDevice has completed with status %1",
    v8,
    0LL,
    0LL,
    0LL,
    0LL);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v20);
  return (unsigned int)v8;
}
