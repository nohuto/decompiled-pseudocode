/*
 * XREFs of ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAXH_N@Z @ 0x1401F8DE0
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z @ 0x1401F71E0 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002B770 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D5E0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002F800 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140078ECC (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pqp_EtwWriteTransfer @ 0x1400790A4 (McTemplateK0pqp_EtwWriteTransfer.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x14039D9C0 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1403F0310 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSurfacesResourcesLocalForCreator(
        struct _KTHREAD **this,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a2,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *a3,
        void *a4,
        int a5,
        bool a6)
{
  NTSTATUS v10; // eax
  __int64 v11; // r8
  __int64 v12; // rdi
  const wchar_t *v13; // r9
  PVOID v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 CurrentProcess; // rbx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rax
  PVOID **v30; // r13
  int v31; // eax
  __int64 v32; // rsi
  unsigned int hSyncObject; // ebx
  PVOID *v34; // rax
  bool v35; // cf
  int v36; // eax
  struct DXGGLOBAL *v37; // rax
  DXGGLOBAL *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  DXGSYNCOBJECTLOCK *v43; // rcx
  struct DXGPROCESS *v44; // r14
  unsigned int v45; // ecx
  __int64 v46; // r9
  int v47; // r8d
  DXGSYNCOBJECTLOCK *v48; // rcx
  struct DXGGLOBAL *Global; // rax
  DXGGLOBAL *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  struct DXGPROCESS *Current; // r14
  unsigned int v56; // ecx
  __int64 v57; // r9
  int v58; // r8d
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v59; // rax
  PVOID *Object; // [rsp+20h] [rbp-B9h]
  PVOID *Objecta; // [rsp+20h] [rbp-B9h]
  PVOID *Objectb; // [rsp+20h] [rbp-B9h]
  PVOID *Objectc; // [rsp+20h] [rbp-B9h]
  int v64; // [rsp+38h] [rbp-A1h]
  int v65; // [rsp+38h] [rbp-A1h]
  __int64 v66; // [rsp+50h] [rbp-89h] BYREF
  struct DXGSYNCOBJECT *v67; // [rsp+58h] [rbp-81h] BYREF
  struct DXGSYNCOBJECT *v68; // [rsp+60h] [rbp-79h] BYREF
  _BYTE v69[16]; // [rsp+68h] [rbp-71h] BYREF
  _BYTE v70[24]; // [rsp+78h] [rbp-61h] BYREF
  _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 v71; // [rsp+90h] [rbp-49h] BYREF
  unsigned int v72; // [rsp+130h] [rbp+57h] BYREF
  PVOID v73; // [rsp+138h] [rbp+5Fh] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v74; // [rsp+140h] [rbp+67h]

  v74 = a3;
  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2304;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_SwapChainLock.IsOwner()", 2304LL, 0LL, 0LL, 0LL, 0LL);
  }
  *(_QWORD *)a2 = 0LL;
  v73 = 0LL;
  v10 = ObReferenceObjectByHandle(a4, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &v73, 0LL);
  v12 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry2(2LL, a4, v10);
    v13 = L"Failed to verify Surface Nt handle 0x%I64x, error 0x%I64x";
    WdLogGlobalForLineNumber = 2321;
LABEL_5:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v13, (__int64)a4, v12, 0LL, 0LL, 0LL);
    return (unsigned int)v12;
  }
  v15 = v73;
  if ( v73 )
  {
    v16 = *((_QWORD *)v73 + 2);
    if ( v16 )
    {
      v17 = (_QWORD *)(v16 + 136);
      v18 = 0LL;
      if ( (_QWORD *)*v17 != v17 )
        v18 = *(_QWORD *)(*v17 - 40LL);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
      {
        LODWORD(Object) = -858993459 * ((a2 - this[8]) >> 5);
        McTemplateK0pqp_EtwWriteTransfer(0xCCCCCCCCCCCCCCCDuLL, v18, v11, this, Object, v18);
      }
    }
  }
  ObfDereferenceObject(v15);
  v66 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v19);
  v22 = PsGetCurrentProcess(v21);
  LOBYTE(v64) = 1;
  LODWORD(Object) = 0;
  v23 = ObDuplicateObject(v22, a4, CurrentProcess, &v66, Object, 0, 6, v64);
  v12 = v23;
  if ( v23 < 0 )
  {
    WdLogSingleEntry2(2LL, a4, v23);
    v13 = L"Failed to duplicate Surface Nt handle 0x%I64x, error 0x%I64x";
    WdLogGlobalForLineNumber = 2352;
    goto LABEL_5;
  }
  *((_QWORD *)a3 + 5) = v66;
  *((_QWORD *)a3 + 4) = a4;
  v72 = 0;
  if ( !(unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v70, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v70);
    v68 = 0LL;
    v50 = DXGGLOBAL::GetGlobal();
    LODWORD(v32) = DXGGLOBAL::OpenSyncObject(v50, *((_DWORD *)a2 + 7), &v68, &v72, 0LL);
    if ( (int)v32 < 0 )
    {
      v52 = PsGetCurrentProcess(v51);
      WdLogSingleEntry2(2LL, *((unsigned int *)a2 + 7), v52);
      WdLogGlobalForLineNumber = 2433;
      v54 = PsGetCurrentProcess(v53);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to open GPU fence 0x%I64x in process 0x%I64x",
        *((unsigned int *)a2 + 7),
        v54,
        0LL,
        0LL,
        0LL);
      v43 = (DXGSYNCOBJECTLOCK *)v70;
      goto LABEL_26;
    }
    Current = DXGPROCESS::GetCurrent();
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
    hSyncObject = v72;
    v56 = (v72 >> 6) & 0xFFFFFF;
    if ( v56 < *((_DWORD *)Current + 74) )
    {
      v57 = *((_QWORD *)Current + 35);
      v58 = *(_DWORD *)(v57 + 16LL * v56 + 8);
      if ( ((v72 >> 25) & 0x60) == (v58 & 0x60) && (v58 & 0x1F) != 0 )
      {
        if ( (*(_DWORD *)(v57 + 16 * (((unsigned __int64)v72 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
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
        *(_DWORD *)(*((_QWORD *)Current + 35) + 16 * (((unsigned __int64)hSyncObject >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
      }
    }
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)Current + 32) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
    KeLeaveCriticalRegion();
    v48 = (DXGSYNCOBJECTLOCK *)v70;
LABEL_43:
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK(v48);
    goto LABEL_44;
  }
  if ( !*((_DWORD *)this + 59) )
  {
    v37 = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v69, v37, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v69);
    v67 = 0LL;
    v38 = DXGGLOBAL::GetGlobal();
    LODWORD(v32) = DXGGLOBAL::OpenSyncObject(v38, *((_DWORD *)a2 + 7), &v67, &v72, 0LL);
    if ( (int)v32 < 0 )
    {
      v40 = PsGetCurrentProcess(v39);
      WdLogSingleEntry2(2LL, *((unsigned int *)a2 + 7), v40);
      WdLogGlobalForLineNumber = 2415;
      v42 = PsGetCurrentProcess(v41);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to open GPU fence 0x%I64x in process 0x%I64x",
        *((unsigned int *)a2 + 7),
        v42,
        0LL,
        0LL,
        0LL);
      v43 = (DXGSYNCOBJECTLOCK *)v69;
LABEL_26:
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK(v43);
      return (unsigned int)v32;
    }
    v44 = DXGPROCESS::GetCurrent();
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v44 + 248));
    hSyncObject = v72;
    v45 = (v72 >> 6) & 0xFFFFFF;
    if ( v45 < *((_DWORD *)v44 + 74) )
    {
      v46 = *((_QWORD *)v44 + 35);
      v47 = *(_DWORD *)(v46 + 16LL * v45 + 8);
      if ( ((v72 >> 25) & 0x60) == (v47 & 0x60) && (v47 & 0x1F) != 0 )
      {
        if ( (*(_DWORD *)(v46 + 16 * (((unsigned __int64)v72 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
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
        *(_DWORD *)(*((_QWORD *)v44 + 35) + 16 * (((unsigned __int64)hSyncObject >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
      }
    }
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)v44 + 32) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v44 + 248, 0LL);
    KeLeaveCriticalRegion();
    v48 = (DXGSYNCOBJECTLOCK *)v69;
    goto LABEL_43;
  }
  v25 = PsGetCurrentProcess(v24);
  v26 = *((_QWORD *)a2 + 5);
  v27 = v25;
  v29 = PsGetCurrentProcess(v28);
  LOBYTE(v65) = 1;
  v30 = (PVOID **)((char *)a3 + 24);
  LODWORD(Objecta) = 0;
  v31 = ObDuplicateObject(v29, v26, v27, (char *)a3 + 24, Objecta, 0, 6, v65);
  v32 = v31;
  if ( v31 < 0 )
  {
    WdLogSingleEntry2(2LL, a4, v31);
    WdLogGlobalForLineNumber = 2377;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to duplicate Surface Nt handle 0x%I64x, error 0x%I64x",
      (__int64)a4,
      v32,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v32;
  }
  if ( a6 )
  {
    hSyncObject = *((_DWORD *)a2 + 7);
LABEL_44:
    v59 = v74;
    *((_DWORD *)v74 + 4) = hSyncObject;
    *(_BYTE *)v59 = 1;
    return (unsigned int)v32;
  }
  memset(&v71, 0, sizeof(v71));
  v34 = *v30;
  v35 = a5 != 0;
  a5 = -a5;
  v71.hNtHandle = v34;
  v71.Flags.Value |= 0x83u;
  v71.hDevice = *(_DWORD *)((char *)this + (v35 ? 0x30 : 0) + 96);
  v36 = DxgkOpenSyncObjectFromNtHandle2Impl(&v71, 0, 1u, 1u, Objectb);
  v32 = v36;
  if ( v36 >= 0 )
  {
    hSyncObject = v71.hSyncObject;
    goto LABEL_44;
  }
  WdLogSingleEntry2(2LL, *v30, v36);
  Objectc = *v30;
  WdLogGlobalForLineNumber = 2398;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Failed to open Fence Nt handle 0x%I64x, error 0x%I64x",
    (__int64)Objectc,
    v32,
    0LL,
    0LL,
    0LL);
  return (unsigned int)v32;
}
