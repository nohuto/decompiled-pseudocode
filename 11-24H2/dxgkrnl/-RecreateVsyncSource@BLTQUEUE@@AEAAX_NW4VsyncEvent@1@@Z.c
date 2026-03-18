/*
 * XREFs of ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x140282B44
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x140093270 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x14028222C (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?GlobalVmBusStatusChangeWorker@BLTQUEUE@@AEAAXXZ @ 0x1402825D8 (-GlobalVmBusStatusChangeWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?HostMonitorPowerStateWorker@BLTQUEUE@@AEAAXXZ @ 0x14028266C (-HostMonitorPowerStateWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?StartVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x14028320C (-StartVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1403ECEB4 (-Startup@BLTQUEUE@@QEAAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1400516E8 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ??0BLTQUEUE_EMULATED_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_EX_TIMER@@1@Z @ 0x140283EF4 (--0BLTQUEUE_EMULATED_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_EX_TIMER@@1@Z.c)
 *     ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1403A4510 (-IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ.c)
 */

void __fastcall BLTQUEUE::RecreateVsyncSource(__int64 a1, char a2, char a3)
{
  int v3; // r13d
  BLTQUEUE_EMULATED_VSYNC_SOURCE **v4; // rbp
  void (__fastcall ***v6)(_QWORD, _QWORD); // rcx
  DXGGLOBAL *Global; // rax
  struct DXGDODPRESENT *v10; // rdi
  BLTQUEUE_EMULATED_VSYNC_SOURCE *v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _EX_TIMER *v14; // r9
  struct _EX_TIMER *v15; // r8
  struct DXGDODPRESENT *v16; // rdx
  __int64 v17; // rsi
  struct DXGDODPRESENT *v18; // rdi

  v3 = *(_DWORD *)(a1 + 136);
  v4 = (BLTQUEUE_EMULATED_VSYNC_SOURCE **)(a1 + 128);
  v6 = *(void (__fastcall ****)(_QWORD, _QWORD))(a1 + 128);
  if ( v6 )
  {
    (**v6)(v6, 0LL);
    *v4 = 0LL;
  }
  if ( *(_DWORD *)(a1 + 136) == 1 )
  {
    v17 = *(_QWORD *)(a1 + 392);
    v11 = (BLTQUEUE_EMULATED_VSYNC_SOURCE *)(a1 + 8);
    v18 = *(struct DXGDODPRESENT **)a1;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 8) = &BLTQUEUE_HW_VSYNC_SOURCE::`vftable';
    memset((void *)(a1 + 24), 0, 0x40uLL);
    *(_QWORD *)(a1 + 88) = 0LL;
    KeInitializeTimerEx((PKTIMER)(a1 + 24), SynchronizationTimer);
    *(_QWORD *)(a1 + 88) = v17;
    *(_QWORD *)(a1 + 16) = v18;
  }
  else
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( !DXGGLOBAL::IsVmConnectedToHost(Global) || a2 )
    {
      v14 = *(struct _EX_TIMER **)(a1 + 152);
      v15 = *(struct _EX_TIMER **)(a1 + 144);
      v16 = *(struct DXGDODPRESENT **)a1;
      *(_DWORD *)(a1 + 136) = 2;
      v11 = BLTQUEUE_EMULATED_VSYNC_SOURCE::BLTQUEUE_EMULATED_VSYNC_SOURCE(
              (BLTQUEUE_EMULATED_VSYNC_SOURCE *)(a1 + 8),
              v16,
              v15,
              v14);
    }
    else
    {
      v10 = *(struct DXGDODPRESENT **)a1;
      v11 = (BLTQUEUE_EMULATED_VSYNC_SOURCE *)(a1 + 8);
      *(_DWORD *)(a1 + 136) = 3;
      *(_QWORD *)(a1 + 8) = &BLTQUEUE_REMOTE_VSYNC_SOURCE::`vftable';
      memset((void *)(a1 + 16), 0, 0x40uLL);
      *(_QWORD *)(a1 + 104) = 0LL;
      *(_BYTE *)(a1 + 112) = 0;
      *(_QWORD *)(a1 + 116) = 0LL;
      KeInitializeTimerEx((PKTIMER)(a1 + 16), SynchronizationTimer);
      KeInitializeEvent((PRKEVENT)(a1 + 80), SynchronizationEvent, 0);
      *(_DWORD *)(a1 + 124) = -1;
      *(_QWORD *)(a1 + 104) = v10;
    }
  }
  *v4 = v11;
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqq_EtwWriteTransfer(v12, &EventBltQueueVsyncRecreateSource, v13, v3, *(_DWORD *)(a1 + 136), a3);
  }
}
