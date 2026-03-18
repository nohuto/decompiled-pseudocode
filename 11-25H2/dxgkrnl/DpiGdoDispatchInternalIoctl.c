/*
 * XREFs of DpiGdoDispatchInternalIoctl @ 0x14042A600
 * Callers:
 *     <none>
 * Callees:
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400354D0 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140043904 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004C14C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiFdoIsPostDevice @ 0x14004DB50 (DpiFdoIsPostDevice.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x140283874 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x140287094 (DxgkAcquireSessionModeChangeLock.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402BA080 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402BD038 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1402DB730 (DxgkUseAdapterViewInCurrentSession.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1402E8FAC (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1403261A4 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z @ 0x1403B0260 (-DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z.c)
 *     ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x1403B9434 (-DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z.c)
 *     ?DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@@Z @ 0x1403D2A74 (-DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_.c)
 *     DxgkPowerOnOffMonitor @ 0x140427DC4 (DxgkPowerOnOffMonitor.c)
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
  __int64 v18; // r9
  char v19; // r13
  int v20; // edi
  unsigned int v21; // ecx
  unsigned int v22; // edi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *Pool2; // rax
  unsigned int v24; // edx
  unsigned int v25; // r13d
  __int64 *v26; // rdi
  char *v27; // r13
  char v28; // r12
  int v29; // esi
  _QWORD *v30; // rcx
  bool v31; // al
  unsigned int v32; // r8d
  int v33; // edx
  DXGADAPTER *v34; // rcx
  unsigned int v35; // edx
  DXGADAPTER *v36; // rcx
  int v37; // eax
  int v38; // eax
  PIRP v39; // rcx
  unsigned int v41; // [rsp+30h] [rbp-38h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v42; // [rsp+34h] [rbp-34h] BYREF
  size_t Size; // [rsp+38h] [rbp-30h]
  _DWORD *v44; // [rsp+40h] [rbp-28h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v45[4]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v46; // [rsp+B0h] [rbp+48h] BYREF
  PIRP Irp; // [rsp+B8h] [rbp+50h]
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v48; // [rsp+C0h] [rbp+58h] BYREF
  unsigned __int8 v49; // [rsp+C8h] [rbp+60h] BYREF

  Irp = a2;
  v46 = a1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  UserBuffer = a2->UserBuffer;
  CurrentIntegerVSyncFromClientVidPnSource = -1073741637;
  v44 = UserBuffer;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v10 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301967 )
  {
    LODWORD(v46) = -1;
    LOBYTE(v45[0]) = 0;
    CDisplayScenarioContextScope::ContextScopeConstructor(v45, (const struct _GUID *)&Parameters->ReadMode, 0x46u, 0);
    v38 = DxgkPowerOnOffMonitor(*(_QWORD *)(v10 + 24), 1u, &v46, (int *)Parameters, 1, v45[1]);
    CurrentIntegerVSyncFromClientVidPnSource = v38;
    if ( v38 < 0 )
    {
      WdLogSingleEntry1(2LL, v38);
      WdLogGlobalForLineNumber = 1310;
    }
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v45);
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
          LODWORD(v46) = 0;
          v48 = D3DDDI_VSSLO_UNINITIALIZED;
          CurrentIntegerVSyncFromClientVidPnSource = DpiAcquireCoreSyncAccessSafe(a1, 1);
          if ( CurrentIntegerVSyncFromClientVidPnSource >= 0 )
          {
            CurrentIntegerVSyncFromClientVidPnSource = DmmGetCurrentIntegerVSyncFromClientVidPnSource(
                                                         *(ADAPTER_DISPLAY ***)(v10 + 4032),
                                                         *(_DWORD *)(v4 + 156),
                                                         (unsigned int *)&v46,
                                                         &v48);
            DpiReleaseCoreSyncAccessSafe(a1, 1);
            if ( CurrentIntegerVSyncFromClientVidPnSource < 0 )
            {
              WdLogSingleEntry1(3LL, *(unsigned int *)(v4 + 156));
              WdLogGlobalForLineNumber = 1356;
            }
            else
            {
              v11 = v48 == D3DDDI_VSSLO_PROGRESSIVE;
              *UserBuffer = v46;
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
  v41 = 0;
  LOBYTE(v48) = 0;
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
                                       (bool *)&v48,
                                       &v41,
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
  v19 = v48;
  v20 = *(_DWORD *)(v10 + 3800);
  v21 = (_BYTE)v48 != D3DDDI_VSSLO_UNINITIALIZED ? v41 : 0;
  v11 = v21 + v20 == 0;
  v22 = v21 + v20;
  v41 = v22;
  if ( v11 )
    goto LABEL_67;
  v42 = D3DKMDT_VOT_HD15;
  v49 = 0;
  Size = 20 * (v22 + 1);
  Pool2 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)ExAllocatePool2(256LL, Size, 1953656900LL, v18);
  v45[0] = Pool2;
  v15 = Pool2;
  if ( !Pool2 )
  {
    CurrentIntegerVSyncFromClientVidPnSource = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 1069;
    goto LABEL_40;
  }
  memset(Pool2, 0, Size);
  if ( v19 )
  {
    v24 = *(_DWORD *)(v4 + 156);
    v41 = v22;
    CurrentIntegerVSyncFromClientVidPnSource = DxgkGetAllMonitorDevicesFromSessionView(
                                                 (struct _LUID *)(v10 + 2696),
                                                 v24,
                                                 (bool *)&v48,
                                                 &v41,
                                                 (__int64)v15);
    if ( CurrentIntegerVSyncFromClientVidPnSource < 0 )
    {
LABEL_46:
      ExFreePoolWithTag(v15, 0);
      goto LABEL_40;
    }
    v25 = v41;
  }
  else
  {
    v25 = 0;
  }
  KeEnterCriticalRegion();
  Size = v10 + 3440;
  ExAcquireResourceSharedLite((PERESOURCE)(v10 + 3440), 1u);
  CurrentIntegerVSyncFromClientVidPnSource = DpiAcquireCoreSyncAccessSafe(v46, 0);
  if ( CurrentIntegerVSyncFromClientVidPnSource < 0 )
  {
    ExReleaseResourceLite((PERESOURCE)Size);
    KeLeaveCriticalRegion();
    goto LABEL_46;
  }
  v26 = *(__int64 **)(v10 + 3784);
  v27 = (char *)v15 + 20 * v25;
  if ( !*(_DWORD *)(v10 + 3800) )
    goto LABEL_66;
  v28 = v48;
  v29 = 0;
  while ( *v26 != *(_QWORD *)(v10 + 3784) )
  {
    if ( *((_DWORD *)v26 + 124) != 1 || *((_BYTE *)v26 + 510) != 1 )
      goto LABEL_64;
    v30 = *(_QWORD **)(v10 + 4032);
    v41 = *((_DWORD *)v26 + 126);
    DmmGetVideoOutputTechnology(v30, v41, &v42, 0LL);
    v31 = IsInternalVideoOutput(v42);
    v32 = v41;
    v27[16] = v31;
    v33 = *(_DWORD *)(v4 + 156);
    v34 = *(DXGADAPTER **)(v10 + 4032);
    v49 = 0;
    DmmIsPresentPathInClientVidPnTopology(v34, v33, v32, (bool *)&v49);
    if ( !v49 )
    {
      if ( !*((_BYTE *)v26 + 944) )
        goto LABEL_64;
      v35 = *(_DWORD *)(v4 + 156);
      v36 = *(DXGADAPTER **)(v10 + 4032);
      LOBYTE(v48) = 0;
      if ( (int)DmmCanAddPresentPathToClientVidPn(v36, v35, v41, (unsigned __int8 *)&v48) < 0 || !(_BYTE)v48 )
        goto LABEL_64;
      v37 = 0;
      goto LABEL_63;
    }
    if ( v28 )
    {
      v37 = 1;
LABEL_63:
      *(_DWORD *)v27 = v37 | 0x20000000;
      *((_DWORD *)v27 + 1) = v41;
      *((_QWORD *)v27 + 1) = *(_QWORD *)(v10 + 2696);
      v27 += 20;
    }
LABEL_64:
    v26 = (__int64 *)*v26;
    if ( (unsigned int)++v29 >= *(_DWORD *)(v10 + 3800) )
      break;
  }
  UserBuffer = v44;
  v15 = v45[0];
LABEL_66:
  DpiReleaseCoreSyncAccessSafe(v46, 0);
  ExReleaseResourceLite((PERESOURCE)Size);
  KeLeaveCriticalRegion();
LABEL_67:
  DxgkReleaseSessionModeChangeLock();
  CurrentIntegerVSyncFromClientVidPnSource = 0;
  *(_QWORD *)UserBuffer = v15;
  v5 = 8LL;
LABEL_71:
  v39 = Irp;
  Irp->IoStatus.Status = CurrentIntegerVSyncFromClientVidPnSource;
  v39->IoStatus.Information = v5;
  IofCompleteRequest(v39, 1);
  return (unsigned int)CurrentIntegerVSyncFromClientVidPnSource;
}
