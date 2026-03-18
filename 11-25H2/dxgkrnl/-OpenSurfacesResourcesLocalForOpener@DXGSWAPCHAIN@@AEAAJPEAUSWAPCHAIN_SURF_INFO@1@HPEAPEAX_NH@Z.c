/*
 * XREFs of ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX_NH@Z @ 0x1401F9514
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z @ 0x1401F6E08 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1401F8C24 (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002B770 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D5E0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002F800 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x140047710 (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140078ECC (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1401F816C (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x14039D9C0 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1403F0310 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSurfacesResourcesLocalForOpener(
        struct _KTHREAD **this,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a2,
        int a3,
        void **a4,
        bool a5,
        unsigned __int8 a6)
{
  int v9; // eax
  __int64 v10; // r13
  int v12; // ebx
  __int64 v13; // r15
  __int64 CurrentProcess; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  char *v22; // r13
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rax
  const wchar_t *v26; // r9
  unsigned int hSyncObject; // ebx
  int v28; // eax
  struct DXGGLOBAL *v29; // rax
  DXGGLOBAL *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  DXGSYNCOBJECTLOCK *v35; // rcx
  struct DXGPROCESS *v36; // r15
  unsigned int v37; // ecx
  __int64 v38; // r9
  int v39; // r8d
  unsigned __int64 v40; // r14
  DXGSYNCOBJECTLOCK *v41; // rcx
  struct DXGGLOBAL *Global; // rax
  DXGGLOBAL *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  struct DXGPROCESS *Current; // r15
  unsigned int v49; // ecx
  __int64 v50; // r9
  int v51; // r8d
  unsigned __int64 v52; // r14
  struct DXGADAPTERSYNCOBJECT **v53; // [rsp+20h] [rbp-B9h]
  struct DXGADAPTERSYNCOBJECT **v54; // [rsp+20h] [rbp-B9h]
  struct DXGADAPTERSYNCOBJECT **v55; // [rsp+20h] [rbp-B9h]
  int v56; // [rsp+38h] [rbp-A1h]
  int v57; // [rsp+38h] [rbp-A1h]
  void **v58; // [rsp+50h] [rbp-89h]
  __int64 v59; // [rsp+58h] [rbp-81h]
  struct DXGSYNCOBJECT *v60; // [rsp+60h] [rbp-79h] BYREF
  struct DXGSYNCOBJECT *v61; // [rsp+68h] [rbp-71h] BYREF
  _BYTE v62[16]; // [rsp+70h] [rbp-69h] BYREF
  _BYTE v63[16]; // [rsp+80h] [rbp-59h] BYREF
  struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 v64; // [rsp+90h] [rbp-49h] BYREF
  __int64 v65; // [rsp+130h] [rbp+57h]
  unsigned int v66; // [rsp+140h] [rbp+67h] BYREF
  void **v67; // [rsp+148h] [rbp+6Fh]

  v67 = a4;
  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2471;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_SwapChainLock.IsOwner()", 2471LL, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = DXGSWAPCHAIN::SwitchClient((__int64)this, a3 == 0);
  v10 = *(__int64 *)((char *)this + (-(__int64)(v9 != 0) & 0xFFFFFFFFFFFFFFD0uLL) + 160);
  v59 = v10;
  if ( !v10 )
    return 3221225558LL;
  v12 = *((_DWORD *)this + 18);
  v13 = 6LL * v9;
  v65 = 48LL * (a3 == 0);
  v58 = (void **)((char *)a2 + v65 + 104);
  CurrentProcess = PsGetCurrentProcess((unsigned int)-v9);
  LOBYTE(v56) = 1;
  LODWORD(v53) = v12;
  v15 = ObDuplicateObject(v10, *((_QWORD *)a2 + v13 + 13), CurrentProcess, v58, v53, 0, 4, v56);
  v17 = v15;
  if ( v15 < 0 )
  {
    v18 = PsGetCurrentProcess(v16);
    WdLogSingleEntry4(2LL, *((_QWORD *)a2 + v13 + 13), v10, v18, v17);
    WdLogGlobalForLineNumber = 2503;
    v20 = PsGetCurrentProcess(v19);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to dup NT handle 0x%I64x into from creator process 0x%I64x, to process 0x%I64x, status 0x%I64x",
      *((_QWORD *)a2 + v13 + 13),
      v10,
      v20,
      v17,
      0LL);
LABEL_31:
    DXGSWAPCHAIN::DestroySwapchainLocalClient(
      (DXGSWAPCHAIN *)this,
      (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)((char *)this + (a3 != 0 ? 144LL : 96LL)));
    return (unsigned int)v17;
  }
  if ( v67 )
    *v67 = *v58;
  v66 = 0;
  if ( !(unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v63, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v63);
    v61 = 0LL;
    v43 = DXGGLOBAL::GetGlobal();
    LODWORD(v17) = DXGGLOBAL::OpenSyncObject(v43, *((_DWORD *)a2 + 7), &v61, &v66, 0LL);
    if ( (int)v17 < 0 )
    {
      v45 = PsGetCurrentProcess(v44);
      WdLogSingleEntry2(2LL, *((unsigned int *)a2 + 7), v45);
      WdLogGlobalForLineNumber = 2585;
      v47 = PsGetCurrentProcess(v46);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to open GPU fence 0x%I64x in process 0x%I64x",
        *((unsigned int *)a2 + 7),
        v47,
        0LL,
        0LL,
        0LL);
      v35 = (DXGSYNCOBJECTLOCK *)v63;
      goto LABEL_30;
    }
    Current = DXGPROCESS::GetCurrent();
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
    hSyncObject = v66;
    v49 = (v66 >> 6) & 0xFFFFFF;
    if ( v49 < *((_DWORD *)Current + 74) )
    {
      v50 = *((_QWORD *)Current + 35);
      v51 = *(_DWORD *)(v50 + 16LL * v49 + 8);
      if ( ((v66 >> 25) & 0x60) == (v51 & 0x60) && (v51 & 0x1F) != 0 )
      {
        v52 = 2 * (((unsigned __int64)v66 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v50 + 16 * (((unsigned __int64)v66 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 224;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"m_pEntryTable[GetIndex(hObject)].Destroyed",
            224LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_DWORD *)(*((_QWORD *)Current + 35) + 8 * v52 + 8) &= ~0x2000u;
      }
    }
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)Current + 32) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
    KeLeaveCriticalRegion();
    v41 = (DXGSYNCOBJECTLOCK *)v63;
LABEL_39:
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK(v41);
    goto LABEL_40;
  }
  if ( !*((_DWORD *)this + 59) )
  {
    v29 = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v62, v29, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v62);
    v60 = 0LL;
    v30 = DXGGLOBAL::GetGlobal();
    LODWORD(v17) = DXGGLOBAL::OpenSyncObject(v30, *((_DWORD *)a2 + 7), &v60, &v66, 0LL);
    if ( (int)v17 < 0 )
    {
      v32 = PsGetCurrentProcess(v31);
      WdLogSingleEntry2(2LL, *((unsigned int *)a2 + 7), v32);
      WdLogGlobalForLineNumber = 2566;
      v34 = PsGetCurrentProcess(v33);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to open GPU fence 0x%I64x in process 0x%I64x",
        *((unsigned int *)a2 + 7),
        v34,
        0LL,
        0LL,
        0LL);
      v35 = (DXGSYNCOBJECTLOCK *)v62;
LABEL_30:
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK(v35);
      goto LABEL_31;
    }
    v36 = DXGPROCESS::GetCurrent();
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v36 + 248));
    hSyncObject = v66;
    v37 = (v66 >> 6) & 0xFFFFFF;
    if ( v37 < *((_DWORD *)v36 + 74) )
    {
      v38 = *((_QWORD *)v36 + 35);
      v39 = *(_DWORD *)(v38 + 16LL * v37 + 8);
      if ( ((v66 >> 25) & 0x60) == (v39 & 0x60) && (v39 & 0x1F) != 0 )
      {
        v40 = 2 * (((unsigned __int64)v66 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v38 + 16 * (((unsigned __int64)v66 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 224;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"m_pEntryTable[GetIndex(hObject)].Destroyed",
            224LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_DWORD *)(*((_QWORD *)v36 + 35) + 8 * v40 + 8) &= ~0x2000u;
      }
    }
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)v36 + 32) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v36 + 248, 0LL);
    KeLeaveCriticalRegion();
    v41 = (DXGSYNCOBJECTLOCK *)v62;
    goto LABEL_39;
  }
  v22 = (char *)a2 + v65;
  v23 = PsGetCurrentProcess(v21);
  LOBYTE(v57) = 1;
  LODWORD(v54) = 0;
  v24 = ObDuplicateObject(v59, *((_QWORD *)a2 + v13 + 11), v23, (char *)a2 + v65 + 88, v54, 0, 6, v57);
  v17 = v24;
  if ( v24 >= 0 )
  {
    if ( a5 )
    {
      hSyncObject = *((_DWORD *)a2 + 7);
    }
    else
    {
      memset(&v64, 0, sizeof(v64));
      v64.hNtHandle = (HANDLE)*((_QWORD *)v22 + 11);
      v64.Flags.Value |= 0x83u;
      v64.hDevice = *(_DWORD *)((char *)this + (a3 != 0 ? 0x30 : 0) + 96);
      v28 = DxgkOpenSyncObjectFromNtHandle2Impl(&v64, 0, a6, a6, v55);
      v17 = v28;
      if ( v28 < 0 )
      {
        WdLogSingleEntry2(2LL, *((_QWORD *)v22 + 11), v28);
        v25 = *((_QWORD *)v22 + 11);
        v26 = L"Failed to open Fence Nt handle 0x%I64x, error 0x%I64x";
        WdLogGlobalForLineNumber = 2551;
        goto LABEL_13;
      }
      hSyncObject = v64.hSyncObject;
    }
LABEL_40:
    *(_DWORD *)((char *)a2 + v65 + 80) = hSyncObject;
    *((_BYTE *)a2 + v65 + 64) = 1;
    return (unsigned int)v17;
  }
  WdLogSingleEntry2(2LL, *((_QWORD *)a2 + v13 + 11), v24);
  v25 = *((_QWORD *)a2 + v13 + 11);
  v26 = L"Failed to duplicate Surface Nt handle 0x%I64x, error 0x%I64x";
  WdLogGlobalForLineNumber = 2530;
LABEL_13:
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v26, v25, v17, 0LL, 0LL, 0LL);
  return (unsigned int)v17;
}
