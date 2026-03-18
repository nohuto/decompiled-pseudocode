/*
 * XREFs of ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAXH_N@Z @ 0x1401FF4C0
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z @ 0x1401FDB34 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002BEF0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DD50 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002FE40 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140079400 (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pqp_EtwWriteTransfer @ 0x14007962C (McTemplateK0pqp_EtwWriteTransfer.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1403940A8 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1403EA4F0 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z.c)
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
  PVOID v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 CurrentProcess; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rax
  PVOID **v29; // r12
  int v30; // eax
  unsigned int hSyncObject; // ebx
  PVOID *v32; // rax
  bool v33; // cf
  int v34; // eax
  struct DXGGLOBAL *v35; // rax
  DXGGLOBAL *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  DXGSYNCOBJECTLOCK *v41; // rcx
  struct DXGPROCESS *v42; // r14
  unsigned int v43; // ecx
  __int64 v44; // r9
  int v45; // r8d
  DXGSYNCOBJECTLOCK *v46; // rcx
  struct DXGGLOBAL *Global; // rax
  DXGGLOBAL *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  struct DXGPROCESS *Current; // r14
  unsigned int v54; // ecx
  __int64 v55; // r9
  int v56; // r8d
  PVOID *Object; // [rsp+20h] [rbp-B9h]
  PVOID *Objecta; // [rsp+20h] [rbp-B9h]
  PVOID *Objectb; // [rsp+20h] [rbp-B9h]
  PVOID *Objectc; // [rsp+20h] [rbp-B9h]
  int v62; // [rsp+38h] [rbp-A1h]
  int v63; // [rsp+38h] [rbp-A1h]
  __int64 v64; // [rsp+50h] [rbp-89h] BYREF
  struct DXGSYNCOBJECT *v65; // [rsp+58h] [rbp-81h] BYREF
  struct DXGSYNCOBJECT *v66; // [rsp+60h] [rbp-79h] BYREF
  _BYTE v67[16]; // [rsp+68h] [rbp-71h] BYREF
  _BYTE v68[24]; // [rsp+78h] [rbp-61h] BYREF
  _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 v69; // [rsp+90h] [rbp-49h] BYREF
  unsigned int v70; // [rsp+130h] [rbp+57h] BYREF
  PVOID v71; // [rsp+138h] [rbp+5Fh] BYREF

  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2336;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_SwapChainLock.IsOwner()", 2336LL, 0LL, 0LL, 0LL, 0LL);
  }
  *(_QWORD *)a2 = 0LL;
  v71 = 0LL;
  v10 = ObReferenceObjectByHandle(a4, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &v71, 0LL);
  v12 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry2(2LL, a4, v10);
    v13 = L"Failed to verify Surface Nt handle 0x%I64x, error 0x%I64x";
    WdLogGlobalForLineNumber = 2353;
LABEL_5:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v13, (__int64)a4, v12, 0LL, 0LL, 0LL);
    return (unsigned int)v12;
  }
  v14 = v71;
  if ( v71 )
  {
    v15 = *((_QWORD *)v71 + 2);
    if ( v15 )
    {
      v16 = (_QWORD *)(v15 + 136);
      v17 = 0LL;
      if ( (_QWORD *)*v16 != v16 )
        v17 = *(_QWORD *)(*v16 - 40LL);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
      {
        LODWORD(Object) = -858993459 * ((a2 - this[8]) >> 5);
        McTemplateK0pqp_EtwWriteTransfer(0xCCCCCCCCCCCCCCCDuLL, v17, v11, this, Object, v17);
      }
    }
  }
  ObfDereferenceObject(v14);
  v64 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v18);
  v21 = PsGetCurrentProcess(v20);
  LOBYTE(v62) = 1;
  LODWORD(Object) = 0;
  v22 = ObDuplicateObject(v21, a4, CurrentProcess, &v64, Object, 0, 6, v62);
  v12 = v22;
  if ( v22 < 0 )
  {
    WdLogSingleEntry2(2LL, a4, v22);
    WdLogGlobalForLineNumber = 2384;
LABEL_15:
    v13 = L"Failed to duplicate Surface Nt handle 0x%I64x, error 0x%I64x";
    goto LABEL_5;
  }
  *((_QWORD *)a3 + 5) = v64;
  *((_QWORD *)a3 + 4) = a4;
  v70 = 0;
  if ( !(unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v68, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v68);
    v66 = 0LL;
    v48 = DXGGLOBAL::GetGlobal();
    LODWORD(v12) = DXGGLOBAL::OpenSyncObject(v48, *((_DWORD *)a2 + 7), &v66, &v70, 0LL);
    if ( (int)v12 < 0 )
    {
      v50 = PsGetCurrentProcess(v49);
      WdLogSingleEntry2(2LL, *((unsigned int *)a2 + 7), v50);
      WdLogGlobalForLineNumber = 2465;
      v52 = PsGetCurrentProcess(v51);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to open GPU fence 0x%I64x in process 0x%I64x",
        *((unsigned int *)a2 + 7),
        v52,
        0LL,
        0LL,
        0LL);
      v41 = (DXGSYNCOBJECTLOCK *)v68;
      goto LABEL_27;
    }
    Current = DXGPROCESS::GetCurrent();
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
    hSyncObject = v70;
    v54 = (v70 >> 6) & 0xFFFFFF;
    if ( v54 < *((_DWORD *)Current + 74) )
    {
      v55 = *((_QWORD *)Current + 35);
      v56 = *(_DWORD *)(v55 + 16LL * v54 + 8);
      if ( ((v70 >> 25) & 0x60) == (v56 & 0x60) && (v56 & 0x1F) != 0 )
      {
        if ( (*(_DWORD *)(v55 + 16 * (((unsigned __int64)v70 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 224;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
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
    *((_QWORD *)Current + 32) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
    KeLeaveCriticalRegion();
    v46 = (DXGSYNCOBJECTLOCK *)v68;
LABEL_44:
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK(v46);
    goto LABEL_45;
  }
  if ( !*((_DWORD *)this + 59) )
  {
    v35 = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v67, v35, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v67);
    v65 = 0LL;
    v36 = DXGGLOBAL::GetGlobal();
    LODWORD(v12) = DXGGLOBAL::OpenSyncObject(v36, *((_DWORD *)a2 + 7), &v65, &v70, 0LL);
    if ( (int)v12 < 0 )
    {
      v38 = PsGetCurrentProcess(v37);
      WdLogSingleEntry2(2LL, *((unsigned int *)a2 + 7), v38);
      WdLogGlobalForLineNumber = 2447;
      v40 = PsGetCurrentProcess(v39);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to open GPU fence 0x%I64x in process 0x%I64x",
        *((unsigned int *)a2 + 7),
        v40,
        0LL,
        0LL,
        0LL);
      v41 = (DXGSYNCOBJECTLOCK *)v67;
LABEL_27:
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK(v41);
      return (unsigned int)v12;
    }
    v42 = DXGPROCESS::GetCurrent();
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v42 + 248));
    hSyncObject = v70;
    v43 = (v70 >> 6) & 0xFFFFFF;
    if ( v43 < *((_DWORD *)v42 + 74) )
    {
      v44 = *((_QWORD *)v42 + 35);
      v45 = *(_DWORD *)(v44 + 16LL * v43 + 8);
      if ( ((v70 >> 25) & 0x60) == (v45 & 0x60) && (v45 & 0x1F) != 0 )
      {
        if ( (*(_DWORD *)(v44 + 16 * (((unsigned __int64)v70 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 224;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"m_pEntryTable[GetIndex(hObject)].Destroyed",
            224LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_DWORD *)(*((_QWORD *)v42 + 35) + 16 * (((unsigned __int64)hSyncObject >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
      }
    }
    *((_QWORD *)v42 + 32) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v42 + 248, 0LL);
    KeLeaveCriticalRegion();
    v46 = (DXGSYNCOBJECTLOCK *)v67;
    goto LABEL_44;
  }
  v24 = PsGetCurrentProcess(v23);
  v25 = *((_QWORD *)a2 + 5);
  v26 = v24;
  v28 = PsGetCurrentProcess(v27);
  LOBYTE(v63) = 1;
  v29 = (PVOID **)((char *)a3 + 24);
  LODWORD(Objecta) = 0;
  v30 = ObDuplicateObject(v28, v25, v26, (char *)a3 + 24, Objecta, 0, 6, v63);
  v12 = v30;
  if ( v30 < 0 )
  {
    WdLogSingleEntry2(2LL, a4, v30);
    WdLogGlobalForLineNumber = 2409;
    goto LABEL_15;
  }
  if ( a6 )
  {
    hSyncObject = *((_DWORD *)a2 + 7);
LABEL_45:
    *((_DWORD *)a3 + 4) = hSyncObject;
    *(_BYTE *)a3 = 1;
    return (unsigned int)v12;
  }
  memset(&v69, 0, sizeof(v69));
  v32 = *v29;
  v33 = a5 != 0;
  a5 = -a5;
  v69.hNtHandle = v32;
  v69.Flags.Value |= 0x83u;
  v69.hDevice = *(_DWORD *)((char *)this + (v33 ? 0x30 : 0) + 96);
  v34 = DxgkOpenSyncObjectFromNtHandle2Impl(&v69, 0, 1u, 1u, Objectb);
  v12 = v34;
  if ( v34 >= 0 )
  {
    hSyncObject = v69.hSyncObject;
    goto LABEL_45;
  }
  WdLogSingleEntry2(2LL, *v29, v34);
  Objectc = *v29;
  WdLogGlobalForLineNumber = 2430;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Failed to open Fence Nt handle 0x%I64x, error 0x%I64x",
    (__int64)Objectc,
    v12,
    0LL,
    0LL,
    0LL);
  return (unsigned int)v12;
}
