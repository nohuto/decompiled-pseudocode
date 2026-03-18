/*
 * XREFs of ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x140322E94
 * Callers:
 *     ?VmBusCloseAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140220DC0 (-VmBusCloseAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCloseAdapterImpl @ 0x140322C20 (DxgkCloseAdapterImpl.c)
 *     ?DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x140348A38 (-DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x140348E00 (-DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x140349510 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x140349F80 (-DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14034D4E0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1400391A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z @ 0x14005D474 (-FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1402CEA6C (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::DestroyHandle(struct _KTHREAD **this, unsigned int a2)
{
  __int64 v4; // rbx
  int v5; // eax
  struct _KTHREAD *v6; // rbp
  __int64 v7; // r8
  __int64 v8; // rbx
  int v9; // edx
  __int64 v10; // rbx
  struct _KTHREAD *v11; // r8
  __int64 v12; // rbx
  int v13; // edx
  struct ADAPTER_RENDER *v15; // rdx
  _BYTE v16[8]; // [rsp+50h] [rbp-38h] BYREF
  char *v17; // [rsp+58h] [rbp-30h]
  int v18; // [rsp+60h] [rbp-28h]

  if ( !this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3422;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pProcess != NULL", 3422LL, 0LL, 0LL, 0LL, 0LL);
  }
  v17 = (char *)(this + 31);
  if ( this != (struct _KTHREAD **)-248LL && this[32] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1512LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 31));
  v4 = (a2 >> 6) & 0xFFFFFF;
  v5 = *((_DWORD *)this + 102) >> 8;
  v18 = 2;
  if ( (v5 & 1) != 0 )
  {
    v6 = this[74];
    DXGPUSHLOCK::AcquireShared((struct _KTHREAD *)((char *)v6 + 248));
    if ( (unsigned int)v4 < *((_DWORD *)v6 + 74) )
    {
      v7 = *((_QWORD *)v6 + 35);
      v8 = 2 * v4;
      if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v7 + 8 * v8 + 8) & 0x60) && (*(_DWORD *)(v7 + 8 * v8 + 8) & 0x2000) == 0 )
      {
        v9 = *(_DWORD *)(v7 + 8 * v8 + 8) & 0x1F;
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            v10 = *(_QWORD *)(v7 + 8 * v8);
            goto LABEL_14;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v10 = 0LL;
LABEL_14:
    _InterlockedDecrement((volatile signed __int32 *)v6 + 66);
    ExReleasePushLockSharedEx((char *)v6 + 248, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_23;
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 74) )
    goto LABEL_22;
  v11 = this[35];
  v12 = 2 * v4;
  if ( ((a2 >> 25) & 0x60) != (*((_BYTE *)v11 + 8 * v12 + 8) & 0x60) )
    goto LABEL_22;
  if ( (*((_DWORD *)v11 + 2 * v12 + 2) & 0x2000) != 0 )
    goto LABEL_22;
  v13 = *((_DWORD *)v11 + 2 * v12 + 2) & 0x1F;
  if ( !v13 )
    goto LABEL_22;
  if ( v13 != 1 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_22:
    v10 = 0LL;
    goto LABEL_23;
  }
  v10 = *((_QWORD *)v11 + v12);
LABEL_23:
  if ( v10 )
  {
    DXGPROCESS::FreeHandleUnsafe((DXGPROCESS *)this, a2);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v10 + 136, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 152));
    v15 = *(struct ADAPTER_RENDER **)(v10 + 3128);
    if ( v15 )
    {
      if ( *(_DWORD *)(v10 + 240) == -1 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 3452;
      }
      else
      {
        DXGPROCESS::CloseAdapter((DXGPROCESS *)this, v15);
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 152));
    ExReleasePushLockSharedEx(v10 + 136, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v10);
    return 0LL;
  }
  else
  {
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
    return 3221225485LL;
  }
}
