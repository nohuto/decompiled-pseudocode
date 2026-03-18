/*
 * XREFs of ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x14034F628
 * Callers:
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1401ECC5C (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402250C0 (-VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14034F110 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1400391A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x140043DA0 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402B64B0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x14036620C (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 */

__int64 __fastcall DXGADAPTER::CreateHandle(DXGADAPTER *this, struct DXGPROCESS *a2, unsigned int *a3)
{
  int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // ebp
  struct ADAPTER_RENDER *v10; // rdx

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3360;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pProcess != NULL", 3360LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a3 )
    return 3221225485LL;
  if ( *((_DWORD *)this + 50) != 1 )
  {
    v7 = -1073741130;
    WdLogSingleEntry2(3LL, this, -1073741130LL);
    WdLogGlobalForLineNumber = 3372;
    return (unsigned int)v7;
  }
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 248));
  v8 = HMGRTABLE::AllocHandle((unsigned int *)a2 + 70, (__int64)this, 1, 0, 0);
  *((_QWORD *)a2 + 32) = 0LL;
  v9 = v8;
  ExReleasePushLockExclusiveEx((char *)a2 + 248, 0LL);
  KeLeaveCriticalRegion();
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  if ( !v9 )
  {
    v7 = -1073741801;
LABEL_13:
    DXGADAPTER::ReleaseReferenceNoTracking(this);
    return (unsigned int)v7;
  }
  v10 = (struct ADAPTER_RENDER *)*((_QWORD *)this + 391);
  if ( v10 )
  {
    v7 = DXGPROCESS::OpenAdapter(a2, v10, (*((_DWORD *)a2 + 102) & 0x80) != 0);
    if ( v7 < 0 )
    {
      DXGPROCESS::FreeHandleSafe(a2, v9);
      goto LABEL_13;
    }
  }
  *a3 = v9;
  return 0LL;
}
