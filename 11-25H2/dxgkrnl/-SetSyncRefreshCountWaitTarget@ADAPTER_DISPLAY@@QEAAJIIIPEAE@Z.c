/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x14032ACAC
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x14032973C (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x14001380C (-SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x140015A54 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     ?SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z @ 0x140034748 (-SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetSyncRefreshCountWaitTarget(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        unsigned int a3,
        char a4,
        unsigned __int8 *a5)
{
  __int64 v8; // rbp
  __int64 v9; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v12; // r8

  v8 = a2;
  v9 = *((_QWORD *)this + 16) + 3984LL * a2;
  Current = DXGPROCESS::GetCurrent((__int64)this);
  *a5 = 1;
  if ( !*(_QWORD *)(v9 + 912) || (*((_DWORD *)Current + 102) & 4) == 0 && !g_OSTestSigningEnabled )
    return 3221225485LL;
  if ( *((_QWORD *)this + 57) )
  {
    *(_DWORD *)(v9 + 920) = a3;
    BLTQUEUE::SetDWMTargetVsync((BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)this + 57) + 8LL) + 2968 * v8), a3);
  }
  else
  {
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqqqq_EtwWriteTransfer(
          0LL,
          &EventDWMVsyncCountWait,
          v12,
          a3,
          *(_DWORD *)(v9 + 924),
          *(_BYTE *)(v9 + 928),
          a4,
          4);
    }
    ADAPTER_DISPLAY::SetSyncRefreshCountWaitTargetNonPaged(this, a2, a3, a5);
  }
  return 0LL;
}
