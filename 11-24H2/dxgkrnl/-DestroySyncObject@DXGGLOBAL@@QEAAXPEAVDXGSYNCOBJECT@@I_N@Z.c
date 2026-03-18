/*
 * XREFs of ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401F41B4
 * Callers:
 *     ??1DXGPROTECTEDSESSION@@QEAA@XZ @ 0x140077EEC (--1DXGPROTECTEDSESSION@@QEAA@XZ.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x14019CD40 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x14019FC38 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1401E44AC (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     DxgkCreateProtectedSession @ 0x1401F0700 (DxgkCreateProtectedSession.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1401FE624 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x14021C218 (-DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1402CD2EC (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     DxgkShareObjectsInternal @ 0x14032A300 (DxgkShareObjectsInternal.c)
 *     ?VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140330B80 (-VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14034D4E0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x140353CE0 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     DxgkOpenResourceFromNtHandleInternal @ 0x140395150 (DxgkOpenResourceFromNtHandleInternal.c)
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x140395A78 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403A2940 (-VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1403ABF4C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1403BF960 (-DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1403E8358 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140423DEC (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000A520 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002BEF0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CONTEXT@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KE@Z @ 0x14002D620 (-VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CON.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002FE40 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1400434E8 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?IsSyncObjectLockExclusiveOwner@DXGGLOBAL@@QEBAEXZ @ 0x14004360C (-IsSyncObjectLockExclusiveOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     Feature_4234972473__private_IsEnabledDeviceUsageNoInline @ 0x140079100 (Feature_4234972473__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1402FA90C (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1403885F8 (-Close@DXGSYNCOBJECT@@QEAAEI@Z.c)
 */

void __fastcall DXGGLOBAL::DestroySyncObject(PERESOURCE *this, struct DXGSYNCOBJECT *a2, unsigned int a3, char a4)
{
  bool IsSyncObjectLockExclusiveOwner; // al
  __int64 v9; // rax
  const wchar_t *v10; // r9
  struct DXGGLOBAL *Global; // rax
  struct DXGSYNCOBJECT *v12; // rax
  char *v13; // rdx
  __int64 v14; // rcx
  struct DXGSYNCOBJECT *v15; // rdx
  struct DXGSYNCOBJECT **v16; // rax
  struct _VIDSCH_SYNC_OBJECT *v17; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v18[16]; // [rsp+58h] [rbp-40h] BYREF
  _BYTE v19[24]; // [rsp+68h] [rbp-30h] BYREF
  unsigned __int64 v20; // [rsp+A8h] [rbp+10h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3191;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pSyncObject != NULL", 3191LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !(unsigned int)Feature_4234972473__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !DXGGLOBAL::IsSyncObjectLockExclusiveOwner(this) )
      goto LABEL_13;
    WdLogSingleEntry0(1LL);
    v9 = 3213LL;
    goto LABEL_11;
  }
  IsSyncObjectLockExclusiveOwner = DXGGLOBAL::IsSyncObjectLockExclusiveOwner(this);
  if ( !a4 )
  {
    if ( !IsSyncObjectLockExclusiveOwner )
      goto LABEL_13;
    WdLogSingleEntry0(1LL);
    v9 = 3208LL;
LABEL_11:
    v10 = L"!IsSyncObjectLockExclusiveOwner()";
    goto LABEL_12;
  }
  if ( !IsSyncObjectLockExclusiveOwner )
  {
    WdLogSingleEntry0(1LL);
    v9 = 3204LL;
    v10 = L"IsSyncObjectLockExclusiveOwner()";
LABEL_12:
    WdLogGlobalForLineNumber = v9;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, v10, v9, 0LL, 0LL, 0LL, 0LL);
  }
LABEL_13:
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v19, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v19);
  if ( (*((_DWORD *)a2 + 102) & 4) != 0 && (unsigned int)(*((_DWORD *)a2 + 101) - 5) > 2 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (struct DXGSYNCOBJECT *)((char *)a2 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
    v12 = (struct DXGSYNCOBJECT *)*((_QWORD *)a2 + 53);
    v13 = (char *)v12 - 112;
    if ( v12 == (struct DXGSYNCOBJECT *)((char *)a2 + 424) )
      v13 = 0LL;
    if ( v13 )
    {
      v17 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v13 + 4);
      if ( v17 )
      {
        v14 = *((_QWORD *)v13 + 2);
        v20 = -1LL;
        VIDSCH_EXPORT::VidSchSignalSyncObjectsFromGpu(
          *(VIDSCH_EXPORT **)(v14 + 736),
          0,
          0LL,
          0,
          0LL,
          1u,
          &v17,
          0,
          &v20,
          0);
      }
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v18);
  }
  if ( DXGSYNCOBJECT::Close(a2, a3) )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 67));
    v15 = *(struct DXGSYNCOBJECT **)a2;
    if ( *(struct DXGSYNCOBJECT **)(*(_QWORD *)a2 + 8LL) != a2
      || (v16 = (struct DXGSYNCOBJECT **)*((_QWORD *)a2 + 1), *v16 != a2) )
    {
      __fastfail(3u);
    }
    *v16 = v15;
    *((_QWORD *)v15 + 1) = v16;
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 67);
    DXGSYNCOBJECT::Destroy(a2);
  }
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v19);
}
