/*
 * XREFs of ?StopVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z @ 0x1403C5B84
 * Callers:
 *     ?DisableVSync@BLTQUEUE@@QEAAXXZ @ 0x140187EA8 (-DisableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14027A168 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x14027B53C (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?GlobalVmBusStatusChangeWorker@BLTQUEUE@@AEAAXXZ @ 0x14027B798 (-GlobalVmBusStatusChangeWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?HostMonitorPowerStateWorker@BLTQUEUE@@AEAAXXZ @ 0x14027B7D8 (-HostMonitorPowerStateWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x14027BDBC (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x14027C3E0 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x14009214C (McTemplateK0qq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall BLTQUEUE::StopVSync(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  struct _KTHREAD **v5; // rdx
  __int64 v6; // [rsp+20h] [rbp-38h]
  _BYTE v7[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+40h] [rbp-18h]

  v3 = a2;
  if ( (*(_DWORD *)(a1 + 1000) & 2) != 0 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v6) = a3;
      McTemplateK0qq_EtwWriteTransfer(a1, a2, a3, *(_DWORD *)(a1 + 136), v6);
    }
    v5 = 0LL;
    if ( !v3 )
      v5 = (struct _KTHREAD **)(a1 + 424);
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, v5, 0);
    if ( !v3 )
    {
      DXGPUSHLOCK::AcquireExclusive(v8);
      v9 = 2;
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 128) + 40LL))(*(_QWORD *)(a1 + 128));
    *(_DWORD *)(a1 + 1000) &= ~2u;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7);
  }
}
