/*
 * XREFs of DpiGdoDispatchInternalIoctl @ 0x14042BEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003551C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004BC00 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiFdoIsPostDevice @ 0x14004D4F0 (DpiFdoIsPostDevice.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x140293650 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x140298418 (DxgkReleaseSessionModeChangeLock.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402C78D0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402CA36C (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1402D751C (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x140308924 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x140316098 (-DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x140345CB0 (DxgkUseAdapterViewInCurrentSession.c)
 *     ?DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z @ 0x1403A15EC (-DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z.c)
 *     ?DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@@Z @ 0x1403CAA64 (-DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_.c)
 *     DxgkPowerOnOffMonitor @ 0x1404279D4 (DxgkPowerOnOffMonitor.c)
 */

__int64 __fastcall DpiGdoDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v4; // r14
  __int64 v5; // rbx
  _DWORD *UserBuffer; // r12
  NTSTATUS CurrentIntegerVSyncFromClientVidPnSource; // edi
  __int64 Length; // r9
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // rsi
  __int64 v10; // r15
  bool v11; // zf
  int CurrentProcessSessionId; // r12d
  int v13; // eax
  int v14; // eax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v15; // rsi
  int v16; // eax
  NTSTATUS AllMonitorDevicesFromSessionView; // eax
  char v18; // r13
  int v19; // edi
  unsigned int v20; // ecx
  unsigned int v21; // edi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *Pool2; // rax
  unsigned int v23; // edx
  unsigned int v24; // r13d
  __int64 *v25; // rdi
  char *v26; // r13
  char v27; // r12
  int v28; // esi
  _QWORD *v29; // rcx
  bool v30; // al
  unsigned int v31; // r8d
  int v32; // edx
  DXGADAPTER *v33; // rcx
  unsigned int v34; // edx
  DXGADAPTER *v35; // rcx
  int v36; // eax
  int v37; // eax
  PIRP v38; // rcx
  unsigned int v40; // [rsp+30h] [rbp-38h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v41; // [rsp+34h] [rbp-34h] BYREF
  size_t Size; // [rsp+38h] [rbp-30h]
  _DWORD *v43; // [rsp+40h] [rbp-28h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v44[4]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v45; // [rsp+B0h] [rbp+48h] BYREF
  PIRP Irp; // [rsp+B8h] [rbp+50h]
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v47; // [rsp+C0h] [rbp+58h] BYREF
  unsigned __int8 v48; // [rsp+C8h] [rbp+60h] BYREF

  Irp = a2;
  v45 = a1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  UserBuffer = a2->UserBuffer;
  CurrentIntegerVSyncFromClientVidPnSource = -1073741637;
  v43 = UserBuffer;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v10 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301967 )
  {
    LODWORD(v45) = -1;
    LOBYTE(v44[0]) = 0;
    CDisplayScenarioContextScope::ContextScopeConstructor(v44, (const struct _GUID *)&Parameters->ReadMode, 0x46u, 0);
    v37 = DxgkPowerOnOffMonitor(*(_QWORD *)(v10 + 24), 1u, &v45, (int *)Parameters, 1, v44[1]);
    CurrentIntegerVSyncFromClientVidPnSource = v37;
    if ( v37 < 0 )
    {
      WdLogSingleEntry1(2LL, v37);
      WdLogGlobalForLineNumber = 1310;
    }
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v44);
    goto LABEL_71;
  }
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2301979 )
  {
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301983 )
    {
      *(_QWORD *)(v4 + 184) = *(_QWORD *)&Parameters->NamedPipeType;
      Parameters->InboundQuota = *(unsigned __int8 *)(v10 + 1156);
      Parameters->DefaultTimeout.QuadPart = *(_QWORD *)(v10 + 152);
      *(_DWORD *)&Parameters->TimeoutSpecified = 0;
      if ( !*(_DWORD *)(v4 + 156) && DpiFdoIsPostDevice(*(_QWORD *)(v4 + 32)) )
        *(_DWORD *)&Parameters->TimeoutSpecified = 0x20000000;
      CurrentIntegerVSyncFromClientVidPnSource = 0;
      v5 = 40LL;
      goto LABEL_71;
    }
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2301995 )
    {
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2302003 )
      {
        if ( (unsigned int)Length >= 0x20 && UserBuffer )
        {
          CurrentIntegerVSyncFromClientVidPnSource = 0;
          v5 = 32LL;
          *UserBuffer = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 24LL);
          UserBuffer[1] = *(_DWORD *)(v4 + 156);
          *((_QWORD *)UserBuffer + 1) = *(_QWORD *)(v10 + 4032);
          *((_QWORD *)UserBuffer + 2) = *(_QWORD *)(*(_QWORD *)(v10 + 4032) + 412LL);
          *((_QWORD *)UserBuffer + 3) = *(_QWORD *)(*(_QWORD *)(v10 + 4032) + 4828LL);
          goto LABEL_71;
        }
      }
      else
      {
        if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2302019 )
          goto LABEL_71;
        if ( (unsigned int)Length >= 8 && UserBuffer )
        {
          LODWORD(v45) = 0;
          v47 = D3DDDI_VSSLO_UNINITIALIZED;
          CurrentIntegerVSyncFromClientVidPnSource = DpiAcquireCoreSyncAccessSafe(a1, 1);
          if ( CurrentIntegerVSyncFromClientVidPnSource >= 0 )
          {
            CurrentIntegerVSyncFromClientVidPnSource = DmmGetCurrentIntegerVSyncFromClientVidPnSource(
                                                         *(ADAPTER_DISPLAY ***)(v10 + 4032),
                                                         *(_DWORD *)(v4 + 156),
                                                         (unsigned int *)&v45,
                                                         &v47);
            DpiReleaseCoreSyncAccessSafe(a1, 1);
            if ( CurrentIntegerVSyncFromClientVidPnSource < 0 )
            {
              WdLogSingleEntry1(3LL, *(unsigned int *)(v4 + 156));
              WdLogGlobalForLineNumber = 1356;
            }
            else
            {
              v11 = v47 == D3DDDI_VSSLO_PROGRESSIVE;
              *UserBuffer = v45;
              *((_BYTE *)UserBuffer + 4) = v11;
            }
          }
          goto LABEL_71;
        }
      }
LABEL_13:
      CurrentIntegerVSyncFromClientVidPnSource = -1073741789;
      goto LABEL_71;
    }
    if ( CurrentStackLocation->Parameters.Create.Options < 8 || !Parameters )
      goto LABEL_13;
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(
                                CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 2301995,
                                a2,
                                CurrentStackLocation,
                                Length);
    if ( Parameters->NamedPipeType == 1 )
    {
      v13 = *(_DWORD *)(v4 + 192);
      if ( v13 != -1 && v13 != CurrentProcessSessionId )
      {
        WdLogSingleEntry1(3LL, -1073741637LL);
        WdLogGlobalForLineNumber = 923;
LABEL_29:
        Parameters->ReadMode = 0;
        goto LABEL_30;
      }
      if ( (int)DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2696), *(_DWORD *)(v4 + 156), 1) < 0 )
        goto LABEL_29;
      *(_DWORD *)(v4 + 192) = CurrentProcessSessionId;
    }
    else
    {
      v14 = DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2696), *(_DWORD *)(v4 + 156), 0);
      if ( *(_DWORD *)(v4 + 192) != CurrentProcessSessionId )
      {
        WdLogSingleEntry1(3LL, v14);
        WdLogGlobalForLineNumber = 960;
        goto LABEL_29;
      }
      *(_DWORD *)(v4 + 192) = -1;
    }
    Parameters->ReadMode = 1;
LABEL_30:
    CurrentIntegerVSyncFromClientVidPnSource = 0;
    goto LABEL_71;
  }
  v40 = 0;
  LOBYTE(v47) = 0;
  v15 = 0LL;
  v16 = DxgkAcquireSessionModeChangeLock(0);
  CurrentIntegerVSyncFromClientVidPnSource = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry1(2LL, v16);
    WdLogGlobalForLineNumber = 990;
    goto LABEL_71;
  }
  AllMonitorDevicesFromSessionView = DxgkGetAllMonitorDevicesFromSessionView(
                                       (struct _LUID *)(v10 + 2696),
                                       *(_DWORD *)(v4 + 156),
                                       (bool *)&v47,
                                       &v40,
                                       0LL);
  CurrentIntegerVSyncFromClientVidPnSource = AllMonitorDevicesFromSessionView;
  if ( (int)(AllMonitorDevicesFromSessionView + 0x80000000) >= 0 && AllMonitorDevicesFromSessionView != -2147483643 )
  {
    WdLogSingleEntry1(2LL, AllMonitorDevicesFromSessionView);
    WdLogGlobalForLineNumber = 1009;
LABEL_40:
    DxgkReleaseSessionModeChangeLock();
    goto LABEL_71;
  }
  v18 = v47;
  v19 = *(_DWORD *)(v10 + 3800);
  v20 = (_BYTE)v47 != D3DDDI_VSSLO_UNINITIALIZED ? v40 : 0;
  v11 = v20 + v19 == 0;
  v21 = v20 + v19;
  v40 = v21;
  if ( v11 )
    goto LABEL_67;
  v41 = D3DKMDT_VOT_HD15;
  v48 = 0;
  Size = 20 * (v21 + 1);
  Pool2 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)ExAllocatePool2(256LL, Size, 1953656900LL);
  v44[0] = Pool2;
  v15 = Pool2;
  if ( !Pool2 )
  {
    CurrentIntegerVSyncFromClientVidPnSource = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 1069;
    goto LABEL_40;
  }
  memset(Pool2, 0, Size);
  if ( v18 )
  {
    v23 = *(_DWORD *)(v4 + 156);
    v40 = v21;
    CurrentIntegerVSyncFromClientVidPnSource = DxgkGetAllMonitorDevicesFromSessionView(
                                                 (struct _LUID *)(v10 + 2696),
                                                 v23,
                                                 (bool *)&v47,
                                                 &v40,
                                                 (__int64)v15);
    if ( CurrentIntegerVSyncFromClientVidPnSource < 0 )
    {
LABEL_46:
      ExFreePoolWithTag(v15, 0);
      goto LABEL_40;
    }
    v24 = v40;
  }
  else
  {
    v24 = 0;
  }
  KeEnterCriticalRegion();
  Size = v10 + 3440;
  ExAcquireResourceSharedLite((PERESOURCE)(v10 + 3440), 1u);
  CurrentIntegerVSyncFromClientVidPnSource = DpiAcquireCoreSyncAccessSafe(v45, 0);
  if ( CurrentIntegerVSyncFromClientVidPnSource < 0 )
  {
    ExReleaseResourceLite((PERESOURCE)Size);
    KeLeaveCriticalRegion();
    goto LABEL_46;
  }
  v25 = *(__int64 **)(v10 + 3784);
  v26 = (char *)v15 + 20 * v24;
  if ( !*(_DWORD *)(v10 + 3800) )
    goto LABEL_66;
  v27 = v47;
  v28 = 0;
  while ( *v25 != *(_QWORD *)(v10 + 3784) )
  {
    if ( *((_DWORD *)v25 + 124) != 1 || *((_BYTE *)v25 + 510) != 1 )
      goto LABEL_64;
    v29 = *(_QWORD **)(v10 + 4032);
    v40 = *((_DWORD *)v25 + 126);
    DmmGetVideoOutputTechnology(v29, v40, &v41, 0LL);
    v30 = IsInternalVideoOutput(v41);
    v31 = v40;
    v26[16] = v30;
    v32 = *(_DWORD *)(v4 + 156);
    v33 = *(DXGADAPTER **)(v10 + 4032);
    v48 = 0;
    DmmIsPresentPathInClientVidPnTopology(v33, v32, v31, (bool *)&v48);
    if ( !v48 )
    {
      if ( !*((_BYTE *)v25 + 944) )
        goto LABEL_64;
      v34 = *(_DWORD *)(v4 + 156);
      v35 = *(DXGADAPTER **)(v10 + 4032);
      LOBYTE(v47) = 0;
      if ( (int)DmmCanAddPresentPathToClientVidPn(v35, v34, v40, (unsigned __int8 *)&v47) < 0 || !(_BYTE)v47 )
        goto LABEL_64;
      v36 = 0;
      goto LABEL_63;
    }
    if ( v27 )
    {
      v36 = 1;
LABEL_63:
      *(_DWORD *)v26 = v36 | 0x20000000;
      *((_DWORD *)v26 + 1) = v40;
      *((_QWORD *)v26 + 1) = *(_QWORD *)(v10 + 2696);
      v26 += 20;
    }
LABEL_64:
    v25 = (__int64 *)*v25;
    if ( (unsigned int)++v28 >= *(_DWORD *)(v10 + 3800) )
      break;
  }
  UserBuffer = v43;
  v15 = v44[0];
LABEL_66:
  DpiReleaseCoreSyncAccessSafe(v45, 0);
  ExReleaseResourceLite((PERESOURCE)Size);
  KeLeaveCriticalRegion();
LABEL_67:
  DxgkReleaseSessionModeChangeLock();
  CurrentIntegerVSyncFromClientVidPnSource = 0;
  *(_QWORD *)UserBuffer = v15;
  v5 = 8LL;
LABEL_71:
  v38 = Irp;
  Irp->IoStatus.Status = CurrentIntegerVSyncFromClientVidPnSource;
  v38->IoStatus.Information = v5;
  IofCompleteRequest(v38, 1);
  return (unsigned int)CurrentIntegerVSyncFromClientVidPnSource;
}
