/*
 * XREFs of ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1403E2E90
 * Callers:
 *     ?CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z @ 0x140202DB8 (-CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1403708E8 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x140036924 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x140056AAC (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@00_KI@Z @ 0x1403E31A4 (-CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@00_KI@Z.c)
 */

__int64 __fastcall CreatePeriodicMonitoredFenceNotificationInternal(
        struct DXGADAPTER *a1,
        struct DXGADAPTER *a2,
        struct DXGSYNCOBJECT *a3,
        const struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *a4,
        bool a5)
{
  struct DXGADAPTER *v9; // rcx
  __int64 v10; // rdi
  int PairingAdapters; // eax
  ADAPTER_DISPLAY **v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // rdx
  ADAPTER_DISPLAY *v15; // rcx
  __int64 v16; // rbx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  void *FenceValueCPUVirtualAddress; // rdx
  int PeriodicFrameNotification; // eax
  struct DXGADAPTER *v22; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v23; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v26[144]; // [rsp+70h] [rbp-90h] BYREF

  if ( DXGADAPTER::IsDxgmms2(a1) || (*((_DWORD *)v9 + 111) & 0x100) != 0 )
  {
    v22 = 0LL;
    v23 = 0LL;
    v25 = 0LL;
    v24 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v9, 0, &v22, &v25, &v23, &v24, 0);
    v10 = PairingAdapters;
    if ( PairingAdapters >= 0 )
    {
      v12 = (ADAPTER_DISPLAY **)v23;
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, v22, v23);
      if ( !a5 )
        LODWORD(v10) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26, 0LL);
      DXGADAPTER::ReleaseReference(v22);
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v12);
      if ( (int)v10 >= 0 )
      {
        v13 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(v12[390], a4->Info.Semaphore.InitialCount);
        v10 = v13;
        if ( v13 == -1 )
        {
          v16 = (unsigned int)v14;
          WdLogSingleEntry1(2LL, v14);
          WdLogGlobalForLineNumber = 311;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Invalid VidPnTargetId %d specified when creating a periodic monitored fence",
            v16,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v10) = -1073741811;
        }
        else
        {
          v17 = *((_QWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(v15, v13) + 2);
          if ( HIDWORD(v17) && (_DWORD)v17 )
          {
            v18 = 10000000 * HIDWORD(v17) / (unsigned int)v17;
            FenceValueCPUVirtualAddress = a4->Info.MonitoredFence.FenceValueCPUVirtualAddress;
            if ( (unsigned __int64)FenceValueCPUVirtualAddress <= v18 )
            {
              PeriodicFrameNotification = DXGSYNCOBJECT::CreatePeriodicFrameNotification(
                                            a3,
                                            a2,
                                            v22,
                                            (struct DXGADAPTER *)v12,
                                            v18,
                                            v10);
              LODWORD(v10) = PeriodicFrameNotification;
              if ( PeriodicFrameNotification < 0 )
              {
                WdLogSingleEntry1(3LL, PeriodicFrameNotification);
                WdLogGlobalForLineNumber = 343;
              }
            }
            else
            {
              LODWORD(v10) = -1073741811;
              WdLogSingleEntry2(3LL, FenceValueCPUVirtualAddress, -1073741811LL);
              WdLogGlobalForLineNumber = 333;
            }
          }
          else
          {
            WdLogSingleEntry1(2LL, v10);
            WdLogGlobalForLineNumber = 321;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Invalid refresh rate for VidPnSourceId: %d when creating a periodic monitored fence",
              v10,
              0LL,
              0LL,
              0LL,
              0LL);
            LODWORD(v10) = -1073741676;
          }
        }
      }
      else
      {
        WdLogSingleEntry1(3LL, (int)v10);
        WdLogGlobalForLineNumber = 301;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
    }
    else
    {
      WdLogSingleEntry2(2LL, a1, PairingAdapters);
      WdLogGlobalForLineNumber = 282;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to get pairing adapters from adapter 0x%I64x (Status 0x%I64x)!",
        (__int64)a1,
        v10,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 258;
    LODWORD(v10) = -1073741811;
  }
  return (unsigned int)v10;
}
