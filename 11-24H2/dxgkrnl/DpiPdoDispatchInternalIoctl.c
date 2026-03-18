/*
 * XREFs of DpiPdoDispatchInternalIoctl @ 0x140429C30
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A8E8 (DpiCheckForOutstandingD3Requests.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140032AE8 (--0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x1400356D0 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x140035774 (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14006E08C (Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_I2CInterface_V2__private_IsEnabledDeviceUsageNoInline @ 0x14007DCA0 (Feature_I2CInterface_V2__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline @ 0x14008D5C8 (Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_I2CManifestPerfLogging__private_IsEnabledDeviceUsageNoInline @ 0x14008D61C (Feature_I2CManifestPerfLogging__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pxqqqq_EtwWriteTransfer @ 0x14008D670 (McTemplateK0pxqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pxqqqqqqbr6br7pp_EtwWriteTransfer @ 0x14008D730 (McTemplateK0pxqqqqqqbr6br7pp_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z @ 0x140184008 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z.c)
 *     ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x14024D744 (-DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402C78D0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402CA36C (DpiAcquireCoreSyncAccessSafe.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402E1840 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x140308924 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1403156CC (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x140315D70 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     DxgkAcquireAdapterDdiSync @ 0x14031E9B8 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x14031EAA8 (DxgkReleaseAdapterDdiSync.c)
 *     DpiPdoSetDevicePower @ 0x14039C45C (DpiPdoSetDevicePower.c)
 *     DpiPdoHandleOpmIoctls @ 0x1403A4314 (DpiPdoHandleOpmIoctls.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1403C4838 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1403CDE4C (DxgkAcquireAdapterOpmI2CSync.c)
 */

__int64 __fastcall DpiPdoDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  __int64 VideoOutputTechnology; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v6; // rsi
  _QWORD *UserBuffer; // r12
  unsigned int Length; // ecx
  unsigned int Options; // edx
  struct _DEVICE_OBJECT *v10; // r8
  unsigned int LowPart; // r13d
  union _LARGE_INTEGER *Parameters; // r14
  __int64 v13; // rax
  _QWORD *DeviceExtension; // rdi
  unsigned __int64 Information; // rdi
  PIRP v16; // rsi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  DXGADAPTER *v31; // rbx
  __int64 v32; // rsi
  MONITOR_MGR *v33; // rdi
  unsigned int v34; // edx
  _QWORD *v35; // rcx
  int SourceConnectedToTargetInClientVidPn; // eax
  int CurrentWireFormatAndColorSpace; // eax
  DXGADAPTER *v38; // rbx
  __int64 v39; // rsi
  MONITOR_MGR *v40; // rdi
  bool v41; // zf
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 (__fastcall *v45)(__int64, _QWORD, __int64, __int64, PLARGE_INTEGER, DWORD, LONG, _DWORD, _QWORD *); // rax
  __int64 HighPart; // r9
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 (__fastcall *v49)(_QWORD, __int64, __int64, __int64, union _LARGE_INTEGER); // rax
  __int64 v50; // r9
  __int64 v51; // r8
  __int64 v52; // rdx
  NTSTATUS v53; // eax
  __int64 v54; // rdx
  __int64 v55; // r8
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  void *v57; // [rsp+28h] [rbp-D8h]
  void *v58; // [rsp+28h] [rbp-D8h]
  DWORD v59; // [rsp+28h] [rbp-D8h]
  unsigned __int64 *v60; // [rsp+30h] [rbp-D0h]
  LONG v61; // [rsp+30h] [rbp-D0h]
  __int64 v62; // [rsp+38h] [rbp-C8h]
  __int64 v63; // [rsp+40h] [rbp-C0h]
  unsigned int v64; // [rsp+88h] [rbp-78h]
  unsigned int v65; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v66; // [rsp+90h] [rbp-70h]
  unsigned __int64 v67; // [rsp+98h] [rbp-68h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v68; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v69[16]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v70[16]; // [rsp+B8h] [rbp-48h] BYREF
  DXGMONITOR *v71[3]; // [rsp+C8h] [rbp-38h] BYREF
  DXGMONITOR *v72[12]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v73; // [rsp+150h] [rbp+50h] BYREF
  PIRP Irp; // [rsp+158h] [rbp+58h]
  union _LARGE_INTEGER Interval; // [rsp+160h] [rbp+60h] BYREF
  ULONG pSessionId; // [rsp+168h] [rbp+68h] BYREF

  Irp = a2;
  pSessionId = 0;
  v67 = 0LL;
  LODWORD(VideoOutputTechnology) = -1073741637;
  IoGetRequestorSessionId(a2, &pSessionId);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = *(_QWORD *)(a1 + 64);
  UserBuffer = a2->UserBuffer;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v10 = *(struct _DEVICE_OBJECT **)(v6 + 32);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Parameters = (union _LARGE_INTEGER *)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v13 = *(int *)(v6 + 496);
  DeviceExtension = v10->DeviceExtension;
  LODWORD(v73) = Length;
  v64 = Options;
  if ( (_DWORD)v13 != 1 )
  {
    WdLogSingleEntry3(2LL, -1073741637LL, v13, LowPart);
    WdLogGlobalForLineNumber = 1270;
    goto LABEL_3;
  }
  if ( LowPart <= 0x232493 )
  {
    switch ( LowPart )
    {
      case 0x232493u:
LABEL_17:
        v16 = Irp;
        v18 = DpiPdoHandleOpmIoctls(a1, (__int64)Irp);
        Information = v16->IoStatus.Information;
        LODWORD(VideoOutputTechnology) = v18;
        goto LABEL_5;
      case 0x232407u:
        LODWORD(v73) = 0;
        if ( UserBuffer )
        {
          if ( Length >= 0x28 )
          {
            LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
            if ( (int)VideoOutputTechnology >= 0 )
            {
              *UserBuffer = DeviceExtension[504];
              UserBuffer[1] = DeviceExtension[337];
              *((_DWORD *)UserBuffer + 4) = *(_DWORD *)(v6 + 504);
              *((_DWORD *)UserBuffer + 6) = *(_DWORD *)(*(_QWORD *)(v6 + 936) + 68LL);
              *((_BYTE *)UserBuffer + 28) = *(_BYTE *)(*(_QWORD *)(v6 + 936) + 66LL);
              *((_DWORD *)UserBuffer + 8) = UserBuffer[4] & 0xFFFFFFFE | (*(_DWORD *)(DeviceExtension[5] + 28LL) >= 0x7006u);
              VideoOutputTechnology = (int)DmmGetVideoOutputTechnology(
                                             (_QWORD *)DeviceExtension[504],
                                             *(_DWORD *)(v6 + 504),
                                             (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v73,
                                             0LL);
              DpiReleaseCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology >= 0 )
              {
                Information = 40LL;
                *((_DWORD *)UserBuffer + 5) = (_DWORD)v73;
                LODWORD(VideoOutputTechnology) = 0;
                goto LABEL_4;
              }
              WdLogSingleEntry1(2LL, VideoOutputTechnology);
              WdLogGlobalForLineNumber = 1340;
            }
          }
          else
          {
            LODWORD(VideoOutputTechnology) = -1073741789;
            WdLogSingleEntry1(2LL, -1073741789LL);
            WdLogGlobalForLineNumber = 1299;
          }
        }
        else
        {
          LODWORD(VideoOutputTechnology) = -1073741811;
          WdLogSingleEntry1(2LL, -1073741811LL);
          WdLogGlobalForLineNumber = 1288;
        }
        goto LABEL_3;
      case 0x23242Fu:
        if ( Parameters )
        {
          if ( Options >= 4 )
          {
            KeEnterCriticalRegion();
            if ( *(_BYTE *)(v6 + 484) )
              DpiCheckForOutstandingD3Requests(v6);
            ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v6 + 168), 1u);
            LODWORD(VideoOutputTechnology) = DpiPdoSetDevicePower(a1, Parameters->LowPart, 0);
            if ( *(_BYTE *)(v6 + 484) )
              DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
            ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
            KeLeaveCriticalRegion();
          }
          else
          {
            LODWORD(VideoOutputTechnology) = -1073741789;
            WdLogSingleEntry1(2LL, -1073741789LL);
            WdLogGlobalForLineNumber = 1783;
          }
        }
        else
        {
          LODWORD(VideoOutputTechnology) = -1073741811;
          WdLogSingleEntry1(2LL, -1073741811LL);
          WdLogGlobalForLineNumber = 1772;
        }
        goto LABEL_3;
    }
    if ( LowPart != 2303031 )
    {
      if ( LowPart == 2303043 )
      {
        if ( DeviceExtension[391] )
        {
          if ( Parameters )
          {
            if ( Options >= 0x10 )
            {
              if ( (unsigned int)(Parameters->HighPart - 1) > 0x3F )
              {
                LODWORD(VideoOutputTechnology) = -1073741811;
                WdLogSingleEntry1(2LL, -1073741811LL);
                WdLogGlobalForLineNumber = 1391;
              }
              else
              {
                LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
                if ( (int)VideoOutputTechnology >= 0 )
                {
                  DxgkAcquireAdapterOpmI2CSync(DeviceExtension[504]);
                  KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v6 + 936) + 72LL), Executive, 0, 0, 0LL);
                  DxgkAcquireAdapterDdiSync(DeviceExtension[504], 1);
                  if ( (unsigned int)Feature_I2CManifestPerfLogging__private_IsEnabledDeviceUsageNoInline()
                    && bTracingEnabled
                    && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  {
                    McTemplateK0pxqqqq_EtwWriteTransfer(
                      v27,
                      v26,
                      v28,
                      *(_QWORD *)(v6 + 48),
                      DeviceExtension[337],
                      *(_DWORD *)(v6 + 504),
                      *((_DWORD *)DeviceExtension + 772),
                      2303047,
                      0);
                  }
                  VideoOutputTechnology = ((int (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, union _LARGE_INTEGER))DeviceExtension[391])(
                                            *(_QWORD *)(v6 + 48),
                                            *(unsigned int *)(v6 + 504),
                                            Parameters->LowPart,
                                            (unsigned int)Parameters->HighPart,
                                            Parameters[1]);
                  if ( (unsigned int)Feature_I2CManifestPerfLogging__private_IsEnabledDeviceUsageNoInline()
                    && bTracingEnabled
                    && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  {
                    LODWORD(v63) = VideoOutputTechnology;
                    LODWORD(v62) = 2303043;
                    LODWORD(v60) = *((_DWORD *)DeviceExtension + 772);
                    LODWORD(v57) = *(_DWORD *)(v6 + 504);
                    McTemplateK0pxqqqqqqbr6br7pp_EtwWriteTransfer(
                      Parameters[1].QuadPart,
                      v29,
                      v30,
                      *(_QWORD *)(v6 + 48),
                      DeviceExtension[337],
                      v57,
                      v60,
                      v62,
                      v63,
                      Parameters->HighPart,
                      0,
                      Parameters[1].QuadPart,
                      0LL,
                      Parameters[1].QuadPart,
                      0LL);
                  }
                  DxgkReleaseAdapterDdiSync((DXGADAPTER *)DeviceExtension[504]);
                  KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v6 + 936) + 72LL), 0);
                  DxgkReleaseAdapterOpmI2CSync(DeviceExtension[504]);
                  DpiReleaseCoreSyncAccessSafe(a1, 0);
                  if ( (int)VideoOutputTechnology < 0 )
                  {
                    WdLogSingleEntry1(3LL, VideoOutputTechnology);
                    WdLogGlobalForLineNumber = 1446;
                  }
                }
              }
            }
            else
            {
              LODWORD(VideoOutputTechnology) = -1073741789;
              WdLogSingleEntry1(2LL, -1073741789LL);
              WdLogGlobalForLineNumber = 1379;
            }
          }
          else
          {
            LODWORD(VideoOutputTechnology) = -1073741811;
            WdLogSingleEntry1(2LL, -1073741811LL);
            WdLogGlobalForLineNumber = 1368;
          }
        }
        goto LABEL_3;
      }
      if ( LowPart != 2303047 )
      {
        if ( LowPart == 2303107 || LowPart == 2303111 || LowPart == 2303115 || LowPart == 2303119 )
          goto LABEL_17;
LABEL_83:
        LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
        if ( (int)VideoOutputTechnology < 0 )
          goto LABEL_3;
        v31 = (DXGADAPTER *)DeviceExtension[504];
        v32 = *(unsigned int *)(v6 + 504);
        Interval.LowPart = pSessionId;
        if ( v31 && (_DWORD)v32 != -1 )
        {
          if ( !DXGADAPTER::IsCoreResourceSharedOwner(v31) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2826;
          }
          if ( !*((_QWORD *)v31 + 390) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2827;
          }
          v33 = *(MONITOR_MGR **)(*((_QWORD *)v31 + 390) + 112LL);
          if ( v33 )
          {
            MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v69, 0LL);
            LODWORD(VideoOutputTechnology) = MONITOR_MGR::_GetMonitorInstance(
                                               v33,
                                               v32,
                                               1,
                                               (struct MONITOR_REF_ACCESSOR *)v69);
            if ( (int)VideoOutputTechnology >= 0 )
            {
              MONITOR_REF_LOCK_ACCESSOR::MONITOR_REF_LOCK_ACCESSOR(
                (MONITOR_REF_LOCK_ACCESSOR *)v71,
                (const struct MONITOR_REF_ACCESSOR *)v69);
              LODWORD(VideoOutputTechnology) = DXGMONITOR::_DispatchInternalIOCtrl(
                                                 (DxgMonitor::MonitorDescriptorState **)v71[0],
                                                 LowPart,
                                                 v64,
                                                 (unsigned int *)Parameters,
                                                 (unsigned int)v73,
                                                 (bool *)UserBuffer,
                                                 &v67,
                                                 Interval.LowPart);
              MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v71);
              Information = v67;
            }
            else
            {
              WdLogSingleEntry2(7LL, v32, v33);
              Information = 0LL;
              WdLogGlobalForLineNumber = 2855;
            }
            MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v69);
            if ( (_DWORD)VideoOutputTechnology == -1073741637 )
            {
              WdLogSingleEntry1(3LL, -1073741637LL);
              WdLogGlobalForLineNumber = 1939;
              goto LABEL_94;
            }
            if ( (int)VideoOutputTechnology >= 0
              || (_DWORD)VideoOutputTechnology == -1073741789
              || (_DWORD)VideoOutputTechnology == -2147483643 )
            {
              goto LABEL_94;
            }
LABEL_93:
            WdLogSingleEntry1(3LL, (int)VideoOutputTechnology);
            WdLogGlobalForLineNumber = 1947;
LABEL_94:
            DpiReleaseCoreSyncAccessSafe(a1, 0);
            goto LABEL_4;
          }
          WdLogSingleEntry1(2LL, v31);
          WdLogGlobalForLineNumber = 2837;
        }
        Information = 0LL;
        LODWORD(VideoOutputTechnology) = -1073741811;
        goto LABEL_93;
      }
      if ( DeviceExtension[392] )
      {
        if ( !Parameters )
        {
          LODWORD(VideoOutputTechnology) = -1073741811;
          WdLogSingleEntry1(2LL, -1073741811LL);
          WdLogGlobalForLineNumber = 1469;
          goto LABEL_3;
        }
        if ( Options < 8 )
        {
          LODWORD(VideoOutputTechnology) = -1073741789;
          WdLogSingleEntry1(2LL, -1073741789LL);
          WdLogGlobalForLineNumber = 1480;
          goto LABEL_3;
        }
        if ( !UserBuffer )
        {
          LODWORD(VideoOutputTechnology) = -1073741811;
          WdLogSingleEntry1(2LL, -1073741811LL);
          WdLogGlobalForLineNumber = 1491;
          goto LABEL_3;
        }
        if ( Length - 1 > 0x3F )
        {
          LODWORD(VideoOutputTechnology) = -1073741811;
          WdLogSingleEntry1(2LL, -1073741811LL);
          WdLogGlobalForLineNumber = 1503;
          goto LABEL_3;
        }
        LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
        if ( (int)VideoOutputTechnology >= 0 )
        {
          DxgkAcquireAdapterOpmI2CSync(DeviceExtension[504]);
          KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v6 + 936) + 72LL), Executive, 0, 0, 0LL);
          DxgkAcquireAdapterDdiSync(DeviceExtension[504], 1);
          if ( (unsigned int)Feature_I2CManifestPerfLogging__private_IsEnabledDeviceUsageNoInline()
            && bTracingEnabled
            && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            McTemplateK0pxqqqq_EtwWriteTransfer(
              v20,
              v19,
              v21,
              *(_QWORD *)(v6 + 48),
              DeviceExtension[337],
              *(_DWORD *)(v6 + 504),
              *((_DWORD *)DeviceExtension + 772),
              2303047,
              0);
          }
          v22 = (unsigned int)v73;
          VideoOutputTechnology = ((int (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD *))DeviceExtension[392])(
                                    *(_QWORD *)(v6 + 48),
                                    *(unsigned int *)(v6 + 504),
                                    Parameters->LowPart,
                                    (unsigned int)Parameters->HighPart,
                                    (_DWORD)v73,
                                    UserBuffer);
          if ( (unsigned int)Feature_I2CManifestPerfLogging__private_IsEnabledDeviceUsageNoInline()
            && bTracingEnabled
            && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            LODWORD(v63) = VideoOutputTechnology;
            LODWORD(v62) = 2303047;
            LODWORD(v60) = *((_DWORD *)DeviceExtension + 772);
            LODWORD(v58) = *(_DWORD *)(v6 + 504);
            McTemplateK0pxqqqqqqbr6br7pp_EtwWriteTransfer(
              v24,
              v23,
              v25,
              *(_QWORD *)(v6 + 48),
              DeviceExtension[337],
              v58,
              v60,
              v62,
              v63,
              0,
              v22,
              0LL,
              UserBuffer,
              0LL,
              UserBuffer);
          }
          DxgkReleaseAdapterDdiSync((DXGADAPTER *)DeviceExtension[504]);
          KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v6 + 936) + 72LL), 0);
          DxgkReleaseAdapterOpmI2CSync(DeviceExtension[504]);
          DpiReleaseCoreSyncAccessSafe(a1, 0);
          if ( (int)VideoOutputTechnology < 0 )
          {
            WdLogSingleEntry1(3LL, VideoOutputTechnology);
            WdLogGlobalForLineNumber = 1559;
            goto LABEL_3;
          }
LABEL_37:
          Information = v22;
          goto LABEL_4;
        }
      }
    }
    goto LABEL_3;
  }
  if ( LowPart == 2303127 || LowPart == 2303131 || LowPart == 2303135 || LowPart == 2303139 )
    goto LABEL_17;
  if ( LowPart == 2303195 )
  {
    LODWORD(VideoOutputTechnology) = DpiBrightnessSetUncalibratedBrightness3Fallback(v10, *(unsigned int *)(v6 + 504));
    goto LABEL_3;
  }
  if ( LowPart != 2303199 )
  {
    if ( LowPart != 2303203 && LowPart != 2303207 && LowPart != 2303235 )
      goto LABEL_83;
    if ( !(unsigned int)Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline() )
      goto LABEL_3;
    LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
    if ( (int)VideoOutputTechnology < 0 )
      goto LABEL_3;
    v34 = *(_DWORD *)(v6 + 504);
    v35 = (_QWORD *)DeviceExtension[504];
    v68.Value = 0;
    Interval.LowPart = 0;
    v65 = 0;
    SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v35, v34, &v65);
    LODWORD(VideoOutputTechnology) = SourceConnectedToTargetInClientVidPn;
    if ( SourceConnectedToTargetInClientVidPn < 0 )
    {
      WdLogSingleEntry1(2LL, SourceConnectedToTargetInClientVidPn);
      WdLogGlobalForLineNumber = 1859;
LABEL_108:
      DpiReleaseCoreSyncAccessSafe(a1, 0);
      goto LABEL_3;
    }
    CurrentWireFormatAndColorSpace = DmmGetCurrentWireFormatAndColorSpace(
                                       (_QWORD *)DeviceExtension[504],
                                       v65,
                                       *(_DWORD *)(v6 + 504),
                                       &v68,
                                       (enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)&Interval);
    LODWORD(VideoOutputTechnology) = CurrentWireFormatAndColorSpace;
    if ( CurrentWireFormatAndColorSpace < 0 )
    {
      WdLogSingleEntry1(2LL, CurrentWireFormatAndColorSpace);
      WdLogGlobalForLineNumber = 1872;
      goto LABEL_108;
    }
    if ( Interval.LowPart != 12 && Interval.LowPart != 32 )
    {
      Information = 0LL;
      if ( LowPart == 2303203 )
      {
        *(_BYTE *)UserBuffer = 0;
        LODWORD(VideoOutputTechnology) = 0;
      }
      else
      {
        LODWORD(VideoOutputTechnology) = -1073741637;
      }
      goto LABEL_94;
    }
    v38 = (DXGADAPTER *)DeviceExtension[504];
    v39 = *(unsigned int *)(v6 + 504);
    v66 = pSessionId;
    if ( v38 && (_DWORD)v39 != -1 )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v38) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2826;
      }
      if ( !*((_QWORD *)v38 + 390) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2827;
      }
      v40 = *(MONITOR_MGR **)(*((_QWORD *)v38 + 390) + 112LL);
      if ( v40 )
      {
        MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v70, 0LL);
        LODWORD(VideoOutputTechnology) = MONITOR_MGR::_GetMonitorInstance(
                                           v40,
                                           v39,
                                           1,
                                           (struct MONITOR_REF_ACCESSOR *)v70);
        if ( (int)VideoOutputTechnology >= 0 )
        {
          MONITOR_REF_LOCK_ACCESSOR::MONITOR_REF_LOCK_ACCESSOR(
            (MONITOR_REF_LOCK_ACCESSOR *)v72,
            (const struct MONITOR_REF_ACCESSOR *)v70);
          LODWORD(VideoOutputTechnology) = DXGMONITOR::_DispatchInternalIOCtrl(
                                             (DxgMonitor::MonitorDescriptorState **)v72[0],
                                             LowPart,
                                             v64,
                                             (unsigned int *)Parameters,
                                             (unsigned int)v73,
                                             (bool *)UserBuffer,
                                             &v67,
                                             v66);
          MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v72);
          MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v70);
          Information = v67;
          goto LABEL_94;
        }
        WdLogSingleEntry2(7LL, v39, v40);
        WdLogGlobalForLineNumber = 2855;
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v70);
        goto LABEL_125;
      }
      WdLogSingleEntry1(2LL, v38);
      WdLogGlobalForLineNumber = 2837;
    }
    LODWORD(VideoOutputTechnology) = -1073741811;
LABEL_125:
    Information = 0LL;
    goto LABEL_94;
  }
  if ( (unsigned int)Feature_I2CInterface_V2__private_IsEnabledDeviceUsageNoInline()
    && *((_DWORD *)DeviceExtension + 772) == 2 )
  {
    v41 = DeviceExtension[393] == 0LL;
  }
  else
  {
    if ( !DeviceExtension[392] )
      goto LABEL_3;
    v41 = DeviceExtension[391] == 0LL;
  }
  if ( !v41 )
  {
    if ( !Parameters )
    {
      LODWORD(VideoOutputTechnology) = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 1592;
      goto LABEL_3;
    }
    if ( v64 < 0x20 )
    {
      LODWORD(VideoOutputTechnology) = -1073741789;
      WdLogSingleEntry1(2LL, -1073741789LL);
      WdLogGlobalForLineNumber = 1600;
      goto LABEL_3;
    }
    if ( !UserBuffer )
    {
      LODWORD(VideoOutputTechnology) = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 1608;
      goto LABEL_3;
    }
    v22 = (unsigned int)v73;
    if ( (unsigned int)((_DWORD)v73 - 1) > 0x3F )
    {
      LODWORD(VideoOutputTechnology) = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 1616;
      goto LABEL_3;
    }
    if ( (unsigned int)(Parameters->HighPart - 1) > 0x3F )
    {
      LODWORD(VideoOutputTechnology) = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 1624;
      goto LABEL_3;
    }
    LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
    if ( (int)VideoOutputTechnology >= 0 )
    {
      DxgkAcquireAdapterOpmI2CSync(DeviceExtension[504]);
      KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v6 + 936) + 72LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(DeviceExtension[504], 1);
      if ( (unsigned int)Feature_I2CManifestPerfLogging__private_IsEnabledDeviceUsageNoInline()
        && bTracingEnabled
        && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        McTemplateK0pxqqqq_EtwWriteTransfer(
          v43,
          v42,
          v44,
          *(_QWORD *)(v6 + 48),
          DeviceExtension[337],
          *(_DWORD *)(v6 + 504),
          *((_DWORD *)DeviceExtension + 772),
          2303199,
          0);
      }
      if ( (unsigned int)Feature_I2CInterface_V2__private_IsEnabledDeviceUsageNoInline()
        && *((_DWORD *)DeviceExtension + 772) == 2 )
      {
        v45 = (__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, PLARGE_INTEGER, DWORD, LONG, _DWORD, _QWORD *))DeviceExtension[393];
        HighPart = (unsigned int)Parameters->HighPart;
        v47 = Parameters->LowPart;
        v61 = Parameters[2].HighPart;
        v59 = Parameters[2].LowPart;
        Timeout = (PLARGE_INTEGER)Parameters[1].QuadPart;
        v48 = *(_QWORD *)(v6 + 48);
        v73 = (__int64 *)&Parameters[1];
        LODWORD(VideoOutputTechnology) = v45(
                                           v48,
                                           *(unsigned int *)(v6 + 504),
                                           v47,
                                           HighPart,
                                           Timeout,
                                           v59,
                                           v61,
                                           v22,
                                           UserBuffer);
      }
      else
      {
        v49 = (__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, union _LARGE_INTEGER))DeviceExtension[391];
        v50 = (unsigned int)Parameters->HighPart;
        v51 = Parameters->LowPart;
        v52 = *(unsigned int *)(v6 + 504);
        v73 = (__int64 *)&Parameters[1];
        LODWORD(VideoOutputTechnology) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v49)(
                                           *(_QWORD *)(v6 + 48),
                                           v52,
                                           v51,
                                           v50,
                                           (union _LARGE_INTEGER)Parameters[1].QuadPart);
        if ( (int)VideoOutputTechnology >= 0 )
        {
          if ( (unsigned int)Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline() )
          {
            Interval = Parameters[3];
            v53 = KeDelayExecutionThread(0, 0, &Interval);
            LODWORD(VideoOutputTechnology) = v53;
            if ( v53 < 0 )
            {
              WdLogSingleEntry1(3LL, v53);
              WdLogGlobalForLineNumber = 1693;
              goto LABEL_3;
            }
          }
          LODWORD(VideoOutputTechnology) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD *))DeviceExtension[392])(
                                             *(_QWORD *)(v6 + 48),
                                             *(unsigned int *)(v6 + 504),
                                             Parameters[2].LowPart,
                                             (unsigned int)Parameters[2].HighPart,
                                             v22,
                                             UserBuffer);
          v73 = (__int64 *)&Parameters[1];
        }
      }
      if ( (unsigned int)Feature_I2CManifestPerfLogging__private_IsEnabledDeviceUsageNoInline()
        && bTracingEnabled
        && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v63) = VideoOutputTechnology;
        LODWORD(v62) = 2303199;
        LODWORD(v60) = *((_DWORD *)DeviceExtension + 772);
        LODWORD(v57) = *(_DWORD *)(v6 + 504);
        McTemplateK0pxqqqqqqbr6br7pp_EtwWriteTransfer(
          *v73,
          v54,
          v55,
          *(_QWORD *)(v6 + 48),
          DeviceExtension[337],
          v57,
          v60,
          v62,
          v63,
          Parameters->HighPart,
          v22,
          *v73,
          UserBuffer,
          *v73,
          UserBuffer);
      }
      DxgkReleaseAdapterDdiSync((DXGADAPTER *)DeviceExtension[504]);
      KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v6 + 936) + 72LL), 0);
      DxgkReleaseAdapterOpmI2CSync(DeviceExtension[504]);
      DpiReleaseCoreSyncAccessSafe(a1, 0);
      if ( (int)VideoOutputTechnology < 0 )
      {
        WdLogSingleEntry1(3LL, (int)VideoOutputTechnology);
        WdLogGlobalForLineNumber = 1728;
        goto LABEL_3;
      }
      goto LABEL_37;
    }
  }
LABEL_3:
  Information = 0LL;
LABEL_4:
  v16 = Irp;
LABEL_5:
  v16->IoStatus.Status = VideoOutputTechnology;
  v16->IoStatus.Information = Information;
  IofCompleteRequest(v16, 1);
  return (unsigned int)VideoOutputTechnology;
}
