/*
 * XREFs of DpiPdoDispatchInternalIoctl @ 0x1404296A0
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A148 (DpiCheckForOutstandingD3Requests.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140032BB8 (--0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140035774 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x140035818 (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z @ 0x140181CE4 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z.c)
 *     ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x140246914 (-DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402BA080 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402BD038 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CB2B0 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1403261A4 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1403762D8 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1403763C8 (DxgkReleaseAdapterDdiSync.c)
 *     DpiPdoSetDevicePower @ 0x1403A573C (DpiPdoSetDevicePower.c)
 *     DpiPdoHandleOpmIoctls @ 0x1403B37C4 (DpiPdoHandleOpmIoctls.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1403D1690 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1403D5F64 (DxgkAcquireAdapterOpmI2CSync.c)
 */

__int64 __fastcall DpiPdoDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  __int64 VideoOutputTechnology; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v6; // rdi
  _QWORD *UserBuffer; // r12
  unsigned int LowPart; // ecx
  unsigned int Options; // edx
  struct _DEVICE_OBJECT *v10; // r8
  unsigned __int64 Length; // r13
  unsigned int *p_NamedPipeType; // r14
  __int64 v13; // rax
  _QWORD *DeviceExtension; // rsi
  unsigned __int64 Information; // rsi
  PIRP v16; // rdi
  int v18; // eax
  DXGADAPTER *v19; // rbx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v20; // eax
  MONITOR_MGR *v21; // rdi
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v22; // esi
  unsigned int v23; // [rsp+40h] [rbp-29h]
  unsigned int v24; // [rsp+44h] [rbp-25h]
  unsigned __int64 v25; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v26[16]; // [rsp+58h] [rbp-11h] BYREF
  DXGMONITOR *v27[11]; // [rsp+68h] [rbp-1h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v28; // [rsp+D0h] [rbp+67h] BYREF
  PIRP Irp; // [rsp+D8h] [rbp+6Fh]
  ULONG pSessionId; // [rsp+E0h] [rbp+77h] BYREF
  unsigned int v31; // [rsp+E8h] [rbp+7Fh]

  Irp = a2;
  pSessionId = 0;
  v25 = 0LL;
  LODWORD(VideoOutputTechnology) = -1073741637;
  IoGetRequestorSessionId(a2, &pSessionId);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = *(_QWORD *)(a1 + 64);
  UserBuffer = a2->UserBuffer;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v10 = *(struct _DEVICE_OBJECT **)(v6 + 32);
  Length = CurrentStackLocation->Parameters.Read.Length;
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  v13 = *(int *)(v6 + 496);
  DeviceExtension = v10->DeviceExtension;
  v24 = LowPart;
  v23 = Options;
  if ( (_DWORD)v13 != 1 )
  {
    WdLogSingleEntry3(2LL, -1073741637LL, v13, LowPart);
    WdLogGlobalForLineNumber = 1256;
    goto LABEL_3;
  }
  if ( LowPart > 0x23248F )
  {
    if ( LowPart == 2303123 || LowPart == 2303127 || LowPart == 2303131 || LowPart == 2303135 || LowPart == 2303139 )
      goto LABEL_16;
    if ( LowPart == 2303195 )
    {
      LODWORD(VideoOutputTechnology) = DpiBrightnessSetUncalibratedBrightness3Fallback(v10, *(unsigned int *)(v6 + 504));
      goto LABEL_3;
    }
    if ( LowPart != 2303199 )
      goto LABEL_64;
    if ( !DeviceExtension[392] || !DeviceExtension[391] )
      goto LABEL_3;
    if ( !p_NamedPipeType )
    {
      LODWORD(VideoOutputTechnology) = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 1532;
      goto LABEL_3;
    }
    if ( Options < 0x20 )
    {
      LODWORD(VideoOutputTechnology) = -1073741789;
      WdLogSingleEntry1(2LL, -1073741789LL);
      WdLogGlobalForLineNumber = 1540;
      goto LABEL_3;
    }
    if ( !UserBuffer )
    {
      LODWORD(VideoOutputTechnology) = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 1548;
      goto LABEL_3;
    }
    if ( (unsigned int)(Length - 1) > 0x3F )
    {
      LODWORD(VideoOutputTechnology) = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 1556;
      goto LABEL_3;
    }
    if ( p_NamedPipeType[1] - 1 > 0x3F )
    {
      LODWORD(VideoOutputTechnology) = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 1564;
      goto LABEL_3;
    }
    LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
    if ( (int)VideoOutputTechnology >= 0 )
    {
      DxgkAcquireAdapterOpmI2CSync(DeviceExtension[504]);
      KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v6 + 936) + 72LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(DeviceExtension[504], 1);
      LODWORD(VideoOutputTechnology) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))DeviceExtension[391])(
                                         *(_QWORD *)(v6 + 48),
                                         *(unsigned int *)(v6 + 504),
                                         *p_NamedPipeType,
                                         p_NamedPipeType[1],
                                         *((_QWORD *)p_NamedPipeType + 1));
      if ( (int)VideoOutputTechnology >= 0 )
        LODWORD(VideoOutputTechnology) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, void *))DeviceExtension[392])(
                                           *(_QWORD *)(v6 + 48),
                                           *(unsigned int *)(v6 + 504),
                                           p_NamedPipeType[4],
                                           p_NamedPipeType[5],
                                           Length,
                                           UserBuffer);
      DxgkReleaseAdapterDdiSync((DXGADAPTER *)DeviceExtension[504]);
      KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v6 + 936) + 72LL), 0);
      DxgkReleaseAdapterOpmI2CSync(DeviceExtension[504]);
      DpiReleaseCoreSyncAccessSafe(a1, 0);
      if ( (int)VideoOutputTechnology < 0 )
      {
        WdLogSingleEntry1(3LL, (int)VideoOutputTechnology);
        WdLogGlobalForLineNumber = 1645;
        goto LABEL_3;
      }
      goto LABEL_28;
    }
  }
  else
  {
    switch ( LowPart )
    {
      case 0x23248Fu:
LABEL_16:
        v16 = Irp;
        v18 = DpiPdoHandleOpmIoctls(a1, (__int64)Irp);
        Information = v16->IoStatus.Information;
        LODWORD(VideoOutputTechnology) = v18;
        goto LABEL_5;
      case 0x232407u:
        v28 = D3DKMDT_VOT_HD15;
        if ( UserBuffer )
        {
          if ( (unsigned int)Length >= 0x28 )
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
                                             &v28,
                                             0LL);
              DpiReleaseCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology >= 0 )
              {
                Information = 40LL;
                *((_DWORD *)UserBuffer + 5) = v28;
                LODWORD(VideoOutputTechnology) = 0;
                goto LABEL_4;
              }
              WdLogSingleEntry1(2LL, VideoOutputTechnology);
              WdLogGlobalForLineNumber = 1326;
            }
          }
          else
          {
            LODWORD(VideoOutputTechnology) = -1073741789;
            WdLogSingleEntry1(2LL, -1073741789LL);
            WdLogGlobalForLineNumber = 1285;
          }
        }
        else
        {
          LODWORD(VideoOutputTechnology) = -1073741811;
          WdLogSingleEntry1(2LL, -1073741811LL);
          WdLogGlobalForLineNumber = 1274;
        }
        goto LABEL_3;
      case 0x23242Fu:
        if ( p_NamedPipeType )
        {
          if ( Options >= 4 )
          {
            KeEnterCriticalRegion();
            if ( *(_BYTE *)(v6 + 484) )
              DpiCheckForOutstandingD3Requests(v6);
            ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v6 + 168), 1u);
            LODWORD(VideoOutputTechnology) = DpiPdoSetDevicePower(a1, *p_NamedPipeType, 0);
            if ( *(_BYTE *)(v6 + 484) )
              DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
            ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
            KeLeaveCriticalRegion();
          }
          else
          {
            LODWORD(VideoOutputTechnology) = -1073741789;
            WdLogSingleEntry1(2LL, -1073741789LL);
            WdLogGlobalForLineNumber = 1700;
          }
        }
        else
        {
          LODWORD(VideoOutputTechnology) = -1073741811;
          WdLogSingleEntry1(2LL, -1073741811LL);
          WdLogGlobalForLineNumber = 1689;
        }
        goto LABEL_3;
    }
    if ( LowPart != 2303031 )
    {
      if ( LowPart == 2303043 )
      {
        if ( DeviceExtension[391] )
        {
          if ( p_NamedPipeType )
          {
            if ( Options >= 0x10 )
            {
              if ( p_NamedPipeType[1] - 1 > 0x3F )
              {
                LODWORD(VideoOutputTechnology) = -1073741811;
                WdLogSingleEntry1(2LL, -1073741811LL);
                WdLogGlobalForLineNumber = 1377;
              }
              else
              {
                LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
                if ( (int)VideoOutputTechnology >= 0 )
                {
                  DxgkAcquireAdapterOpmI2CSync(DeviceExtension[504]);
                  KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v6 + 936) + 72LL), Executive, 0, 0, 0LL);
                  DxgkAcquireAdapterDdiSync(DeviceExtension[504], 1);
                  VideoOutputTechnology = ((int (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))DeviceExtension[391])(
                                            *(_QWORD *)(v6 + 48),
                                            *(unsigned int *)(v6 + 504),
                                            *p_NamedPipeType,
                                            p_NamedPipeType[1],
                                            *((_QWORD *)p_NamedPipeType + 1));
                  DxgkReleaseAdapterDdiSync((DXGADAPTER *)DeviceExtension[504]);
                  KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v6 + 936) + 72LL), 0);
                  DxgkReleaseAdapterOpmI2CSync(DeviceExtension[504]);
                  DpiReleaseCoreSyncAccessSafe(a1, 0);
                  if ( (int)VideoOutputTechnology < 0 )
                  {
                    WdLogSingleEntry1(3LL, VideoOutputTechnology);
                    WdLogGlobalForLineNumber = 1409;
                  }
                }
              }
            }
            else
            {
              LODWORD(VideoOutputTechnology) = -1073741789;
              WdLogSingleEntry1(2LL, -1073741789LL);
              WdLogGlobalForLineNumber = 1365;
            }
          }
          else
          {
            LODWORD(VideoOutputTechnology) = -1073741811;
            WdLogSingleEntry1(2LL, -1073741811LL);
            WdLogGlobalForLineNumber = 1354;
          }
        }
        goto LABEL_3;
      }
      if ( LowPart != 2303047 )
      {
        if ( LowPart == 2303107 || LowPart == 2303111 || LowPart == 2303115 )
          goto LABEL_16;
LABEL_64:
        LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
        if ( (int)VideoOutputTechnology < 0 )
          goto LABEL_3;
        v19 = (DXGADAPTER *)DeviceExtension[504];
        v31 = pSessionId;
        v20 = *(_DWORD *)(v6 + 504);
        v28 = v20;
        if ( v19 && v20 != D3DKMDT_VOT_OTHER )
        {
          if ( !DXGADAPTER::IsCoreResourceSharedOwner(v19) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2826;
          }
          if ( !*((_QWORD *)v19 + 390) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2827;
          }
          v21 = *(MONITOR_MGR **)(*((_QWORD *)v19 + 390) + 112LL);
          if ( v21 )
          {
            MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v26, 0LL);
            v22 = v28;
            LODWORD(VideoOutputTechnology) = MONITOR_MGR::_GetMonitorInstance(
                                               v21,
                                               v28,
                                               1,
                                               (struct MONITOR_REF_ACCESSOR *)v26);
            if ( (int)VideoOutputTechnology >= 0 )
            {
              MONITOR_REF_LOCK_ACCESSOR::MONITOR_REF_LOCK_ACCESSOR(
                (MONITOR_REF_LOCK_ACCESSOR *)v27,
                (const struct MONITOR_REF_ACCESSOR *)v26);
              LODWORD(VideoOutputTechnology) = DXGMONITOR::_DispatchInternalIOCtrl(
                                                 (DxgMonitor::MonitorDescriptorState **)v27[0],
                                                 v24,
                                                 v23,
                                                 p_NamedPipeType,
                                                 Length,
                                                 UserBuffer,
                                                 &v25,
                                                 v31);
              MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v27);
              Information = v25;
            }
            else
            {
              WdLogSingleEntry2(7LL, (unsigned int)v22, v21);
              Information = 0LL;
              WdLogGlobalForLineNumber = 2855;
            }
            MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v26);
            if ( (_DWORD)VideoOutputTechnology == -1073741637 )
            {
              WdLogSingleEntry1(3LL, -1073741637LL);
              WdLogGlobalForLineNumber = 1773;
              goto LABEL_75;
            }
            if ( (int)VideoOutputTechnology >= 0
              || (_DWORD)VideoOutputTechnology == -1073741789
              || (_DWORD)VideoOutputTechnology == -2147483643 )
            {
              goto LABEL_75;
            }
LABEL_74:
            WdLogSingleEntry1(3LL, (int)VideoOutputTechnology);
            WdLogGlobalForLineNumber = 1781;
LABEL_75:
            DpiReleaseCoreSyncAccessSafe(a1, 0);
            goto LABEL_4;
          }
          WdLogSingleEntry1(2LL, v19);
          WdLogGlobalForLineNumber = 2837;
        }
        Information = 0LL;
        LODWORD(VideoOutputTechnology) = -1073741811;
        goto LABEL_74;
      }
      if ( DeviceExtension[392] )
      {
        if ( !p_NamedPipeType )
        {
          LODWORD(VideoOutputTechnology) = -1073741811;
          WdLogSingleEntry1(2LL, -1073741811LL);
          WdLogGlobalForLineNumber = 1432;
          goto LABEL_3;
        }
        if ( Options < 8 )
        {
          LODWORD(VideoOutputTechnology) = -1073741789;
          WdLogSingleEntry1(2LL, -1073741789LL);
          WdLogGlobalForLineNumber = 1443;
          goto LABEL_3;
        }
        if ( !UserBuffer )
        {
          LODWORD(VideoOutputTechnology) = -1073741811;
          WdLogSingleEntry1(2LL, -1073741811LL);
          WdLogGlobalForLineNumber = 1454;
          goto LABEL_3;
        }
        if ( (unsigned int)(Length - 1) > 0x3F )
        {
          LODWORD(VideoOutputTechnology) = -1073741811;
          WdLogSingleEntry1(2LL, -1073741811LL);
          WdLogGlobalForLineNumber = 1466;
          goto LABEL_3;
        }
        LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
        if ( (int)VideoOutputTechnology >= 0 )
        {
          DxgkAcquireAdapterOpmI2CSync(DeviceExtension[504]);
          KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v6 + 936) + 72LL), Executive, 0, 0, 0LL);
          DxgkAcquireAdapterDdiSync(DeviceExtension[504], 1);
          VideoOutputTechnology = ((int (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, void *))DeviceExtension[392])(
                                    *(_QWORD *)(v6 + 48),
                                    *(unsigned int *)(v6 + 504),
                                    *p_NamedPipeType,
                                    p_NamedPipeType[1],
                                    Length,
                                    UserBuffer);
          DxgkReleaseAdapterDdiSync((DXGADAPTER *)DeviceExtension[504]);
          KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v6 + 936) + 72LL), 0);
          DxgkReleaseAdapterOpmI2CSync(DeviceExtension[504]);
          DpiReleaseCoreSyncAccessSafe(a1, 0);
          if ( (int)VideoOutputTechnology < 0 )
          {
            WdLogSingleEntry1(3LL, VideoOutputTechnology);
            WdLogGlobalForLineNumber = 1499;
            goto LABEL_3;
          }
LABEL_28:
          Information = Length;
          goto LABEL_4;
        }
      }
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
