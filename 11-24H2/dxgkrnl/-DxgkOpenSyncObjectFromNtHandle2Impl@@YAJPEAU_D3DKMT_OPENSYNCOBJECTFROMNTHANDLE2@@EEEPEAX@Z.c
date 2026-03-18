/*
 * XREFs of ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1403EA4F0
 * Callers:
 *     ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAXH_N@Z @ 0x1401FF4C0 (-OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX_NH@Z @ 0x1401FFBD8 (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX_NH@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle2Internal @ 0x1403EA4A8 (DxgkOpenSyncObjectFromNtHandle2Internal.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1403EA4D0 (DxgkOpenSyncObjectFromNtHandle2.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@H@Z @ 0x14002A31C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@H@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002BEF0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DD50 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002FE40 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140048D4C (McTemplateK0pppp_EtwWriteTransfer.c)
 *     ??0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140051D94 (--0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77@Z @ 0x1401F4640 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1403ABF4C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle2Impl(
        struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *a1,
        char a2,
        __int64 a3,
        char a4)
{
  char v5; // r15
  struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *v7; // rsi
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // r12
  const void *v10; // rdx
  struct ADAPTER_RENDER **v11; // r13
  __int64 v12; // r9
  int v13; // ebx
  unsigned int v14; // ebx
  __int64 *v15; // r15
  struct DXGGLOBAL *Global; // rax
  __int64 v17; // r15
  int v18; // eax
  int v19; // eax
  DXGSYNCOBJECT **v20; // r15
  __int64 v21; // rcx
  __int64 v22; // r8
  NTSTATUS v24; // eax
  unsigned int v25; // r12d
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  struct DXGGLOBAL *v30; // rax
  __int64 v31; // r8
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r9
  unsigned __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // r8
  unsigned int v39; // edx
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v44; // [rsp+88h] [rbp-1D0h] BYREF
  __int64 v45; // [rsp+90h] [rbp-1C8h]
  char v46; // [rsp+98h] [rbp-1C0h]
  _BYTE v47[8]; // [rsp+A0h] [rbp-1B8h] BYREF
  int v48; // [rsp+A8h] [rbp-1B0h]
  struct DXGADAPTERSYNCOBJECT *v49; // [rsp+B0h] [rbp-1A8h] BYREF
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v50[2]; // [rsp+B8h] [rbp-1A0h]
  struct DXGDEVICE *v51; // [rsp+C0h] [rbp-198h] BYREF
  __int64 v52; // [rsp+C8h] [rbp-190h] BYREF
  char v53; // [rsp+D0h] [rbp-188h]
  _BYTE v54[16]; // [rsp+D8h] [rbp-180h] BYREF
  PVOID Object; // [rsp+E8h] [rbp-170h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+F0h] [rbp-168h] BYREF
  PVOID v57; // [rsp+F8h] [rbp-160h]
  HANDLE Handle[12]; // [rsp+100h] [rbp-158h] BYREF
  _DWORD *v59; // [rsp+160h] [rbp-F8h]
  _BYTE v60[24]; // [rsp+168h] [rbp-F0h] BYREF
  _BYTE v61[160]; // [rsp+180h] [rbp-D8h] BYREF

  v5 = a3;
  v7 = a1;
  *(_QWORD *)&v50[0].hSyncObject = a1;
  v44 = -1;
  v45 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v46 = 1;
    v44 = 2086;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2086);
  }
  else
  {
    v46 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v44, 2086);
  Current = DXGPROCESS::GetCurrent(v8);
  v49 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1847;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_35:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( v46 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v44);
    }
    return 3221225485LL;
  }
  memset(Handle, 0, 0x58uLL);
  if ( a2 )
  {
    v10 = v7;
    if ( (unsigned __int64)v7 >= MmUserProbeAddress )
      v10 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(Handle, v10, 0x58uLL);
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)&v7->hNtHandle;
    *(_OWORD *)&Handle[2] = *(_OWORD *)&v7->hSyncObject;
    *(_OWORD *)&Handle[4] = *(_OWORD *)&v7->Reserved[1];
    *(_OWORD *)&Handle[6] = *(_OWORD *)&v7->Reserved[3];
    *(_OWORD *)&Handle[8] = *(_OWORD *)&v7->Reserved[5];
    Handle[10] = (HANDLE)v7->Reserved[7];
  }
  LODWORD(Handle[2]) = 0;
  if ( (HIDWORD(Handle[1]) & 0x7FFFF800) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1883;
    goto LABEL_35;
  }
  if ( (BYTE4(Handle[1]) & 0x10) != 0 || (BYTE4(Handle[1]) & 0x20) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1890;
  }
  v51 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)v47,
    (unsigned int)Handle[1],
    (struct _KTHREAD **)Current,
    &v51);
  v11 = (struct ADAPTER_RENDER **)v51;
  if ( !v51 )
  {
    WdLogSingleEntry2(2LL, LODWORD(Handle[1]), -1073741811LL);
    WdLogGlobalForLineNumber = 1899;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      LODWORD(Handle[1]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_34:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v47);
    goto LABEL_35;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54, v51, v5 == 0);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v61, (__int64)v11, 0, v12, 0);
  if ( !a4 )
  {
    v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v61, 0LL);
    if ( v13 < 0 )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
LABEL_83:
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v47);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
      if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v41, (__int64)&EventProfilerExit, v42, v44);
      return (unsigned int)v13;
    }
  }
  v14 = HIDWORD(Handle[1]);
  v59 = (_DWORD *)((char *)Current + 408);
  if ( (*((_DWORD *)Current + 102) & 0x10) != 0 )
  {
    v15 = (__int64 *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 4);
    Global = DXGGLOBAL::GetGlobal();
    DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED(
      (DXGAUTOPUSHLOCKFASTSHARED *)&v52,
      (struct DXGGLOBAL *)((char *)Global + 40));
    if ( *((_DWORD *)v15 + 4) )
    {
      v17 = *v15;
      v18 = *(_DWORD *)(v17 + 8);
      if ( (v18 & 0x60) == 0 && (v18 & 0x2000) == 0 )
      {
        v19 = *(_DWORD *)(v17 + 8) & 0x1F;
        if ( v19 )
        {
          if ( v19 == 8 )
          {
            v20 = *(DXGSYNCOBJECT ***)v17;
            goto LABEL_30;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v20 = 0LL;
LABEL_30:
    v57 = v20;
    if ( !v20 )
    {
      WdLogSingleEntry1(3LL, 0LL);
      WdLogGlobalForLineNumber = 1936;
      if ( v53 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v52 + 16));
        ExReleasePushLockSharedEx(v52, 0LL);
        KeLeaveCriticalRegion();
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
      goto LABEL_34;
    }
    if ( v53 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v52 + 16));
      ExReleasePushLockSharedEx(v52, 0LL);
      KeLeaveCriticalRegion();
      v53 = 0;
      v11 = (struct ADAPTER_RENDER **)v51;
    }
    goto LABEL_53;
  }
  HandleInformation = 0LL;
  Object = 0LL;
  v24 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSyncObjectType, 1, &Object, &HandleInformation);
  v25 = v24;
  v20 = (DXGSYNCOBJECT **)Object;
  v57 = Object;
  if ( v24 == -1073741788 )
  {
    WdLogSingleEntry2(3LL, Handle[0], -1073741788LL);
    WdLogGlobalForLineNumber = 1965;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v47);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v44);
    return 3221225508LL;
  }
  else
  {
    if ( v24 >= 0 )
    {
      v14 = v14 & 0xFFFFFFCF | ~(8 * LOBYTE(HandleInformation.GrantedAccess)) & 0x10 | ~(32
                                                                                       * LOBYTE(HandleInformation.GrantedAccess)) & 0x20;
      Current = v49;
LABEL_53:
      v49 = 0LL;
      v30 = DXGGLOBAL::GetGlobal();
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v60, v30, 0);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v60);
      v13 = DXGSYNCOBJECT::Open(
              *v20,
              v11[2],
              (struct DXGDEVICE *)v11,
              0LL,
              (unsigned int *)&Handle[2],
              &Handle[3],
              (unsigned __int64 *)&Handle[4],
              (unsigned int)Handle[5],
              &v49,
              1,
              (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v14,
              0LL,
              0LL,
              0,
              *((_DWORD *)*v20 + 101) == 7);
      v48 = v13;
      if ( v13 >= 0 )
      {
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v60);
        if ( bTracingEnabled )
        {
          if ( v49 ? *((_QWORD *)v49 + 4) : 0LL )
          {
            v34 = v49 ? *((_QWORD *)v49 + 4) : 0LL;
            v33 = *(_QWORD *)(v34 + 16);
          }
          else
          {
            v33 = 0LL;
          }
          v35 = v49 ? *((_QWORD *)v49 + 4) : 0LL;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0pppp_EtwWriteTransfer(v33, &EventOpenSyncObject, v31, v35, LODWORD(Handle[2]), v11, v33);
        }
        v36 = LODWORD(Handle[2]);
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
        v37 = ((unsigned int)v36 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v37 < *((_DWORD *)Current + 74) )
        {
          v38 = *((_QWORD *)Current + 35);
          v39 = *(_DWORD *)(v38 + 16 * v37 + 8);
          if ( (unsigned int)v36 >> 30 == ((v39 >> 5) & 3) && (v39 & 0x1F) != 0 )
          {
            v40 = 2 * ((v36 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v38 + 8 * v40 + 8) & 0x2000) == 0 )
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
            *(_DWORD *)(*((_QWORD *)Current + 35) + 8 * v40 + 8) &= ~0x2000u;
          }
        }
        *((_QWORD *)Current + 32) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
        KeLeaveCriticalRegion();
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
        if ( a2 )
        {
          if ( (unsigned __int64)v7 >= MmUserProbeAddress )
            v7 = (struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v7, Handle, 0x58uLL);
          v13 = v48;
        }
        else
        {
          *(_OWORD *)&v7->hNtHandle = *(_OWORD *)Handle;
          *(_OWORD *)&v7->hSyncObject = *(_OWORD *)&Handle[2];
          *(_OWORD *)&v7->Reserved[1] = *(_OWORD *)&Handle[4];
          *(_OWORD *)&v7->Reserved[3] = *(_OWORD *)&Handle[6];
          *(_OWORD *)&v7->Reserved[5] = *(_OWORD *)&Handle[8];
          v7->Reserved[7] = (UINT64)Handle[10];
          v13 = v48;
        }
      }
      else
      {
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v60);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
      }
      if ( (*v59 & 0x10) == 0 )
        ObfDereferenceObject(v20);
      goto LABEL_83;
    }
    WdLogSingleEntry2(3LL, Handle[0], v24);
    WdLogGlobalForLineNumber = 1972;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v47);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v44);
    return v25;
  }
}
