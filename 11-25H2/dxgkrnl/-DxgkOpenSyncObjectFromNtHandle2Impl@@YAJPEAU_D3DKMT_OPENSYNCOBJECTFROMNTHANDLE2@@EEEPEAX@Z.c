/*
 * XREFs of ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1403F0310
 * Callers:
 *     ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAXH_N@Z @ 0x1401F8DE0 (-OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX_NH@Z @ 0x1401F9514 (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX_NH@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle2Internal @ 0x1403F02C8 (DxgkOpenSyncObjectFromNtHandle2Internal.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1403F02F0 (DxgkOpenSyncObjectFromNtHandle2.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@H@Z @ 0x140029B7C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@H@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002B770 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D5E0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002F800 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140049660 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     ??0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140052344 (--0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_2887029049__private_IsEnabledDeviceUsageNoInline @ 0x140076234 (Feature_2887029049__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77@Z @ 0x140180008 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x14033D52C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle2Impl(
        struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *a1,
        char a2,
        __int64 a3,
        char a4)
{
  struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *v6; // r14
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r13
  const void *v9; // rdx
  struct DXGDEVICE *v10; // rbx
  __int64 v11; // r9
  int v12; // ebx
  unsigned int v13; // ebx
  __int64 v14; // r12
  struct DXGGLOBAL *Global; // rax
  int v16; // eax
  int v17; // eax
  PVOID v18; // r13
  __int64 v19; // rcx
  __int64 v20; // r8
  struct ADAPTER_RENDER **v22; // r12
  NTSTATUS v23; // eax
  unsigned int v24; // r12d
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  struct DXGGLOBAL *v29; // rax
  __int64 v30; // r8
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r9
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v36; // r12
  unsigned __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // r9
  unsigned int v40; // edx
  __int64 v41; // rbx
  unsigned __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // rbx
  __int64 v46; // rcx
  __int64 v47; // r8
  char v48; // [rsp+80h] [rbp-1C8h]
  int v50; // [rsp+88h] [rbp-1C0h] BYREF
  __int64 v51; // [rsp+90h] [rbp-1B8h]
  char v52; // [rsp+98h] [rbp-1B0h]
  struct DXGDEVICE *v53; // [rsp+A0h] [rbp-1A8h]
  _BYTE v54[8]; // [rsp+A8h] [rbp-1A0h] BYREF
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v55[2]; // [rsp+B0h] [rbp-198h]
  struct DXGDEVICE *v56; // [rsp+B8h] [rbp-190h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-188h] BYREF
  char v58; // [rsp+C8h] [rbp-180h]
  _BYTE v59[16]; // [rsp+D0h] [rbp-178h] BYREF
  HANDLE Handle[12]; // [rsp+E0h] [rbp-168h] BYREF
  PVOID Object; // [rsp+140h] [rbp-108h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+148h] [rbp-100h] BYREF
  struct DXGADAPTERSYNCOBJECT *v63; // [rsp+150h] [rbp-F8h] BYREF
  PVOID v64; // [rsp+158h] [rbp-F0h]
  struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *v65; // [rsp+160h] [rbp-E8h]
  _DWORD *v66; // [rsp+168h] [rbp-E0h]
  _BYTE v67[16]; // [rsp+170h] [rbp-D8h] BYREF
  _BYTE v68[160]; // [rsp+180h] [rbp-C8h] BYREF

  v48 = a3;
  v6 = a1;
  v65 = a1;
  v50 = -1;
  v51 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v52 = 1;
    v50 = 2086;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2086);
  }
  else
  {
    v52 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v50, 2086);
  Current = DXGPROCESS::GetCurrent(v7);
  *(_QWORD *)&v55[0].hSyncObject = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1861;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_35:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( v52 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v50);
    }
    return 3221225485LL;
  }
  memset(Handle, 0, 0x58uLL);
  if ( a2 )
  {
    v9 = v6;
    if ( (unsigned __int64)v6 >= MmUserProbeAddress )
      v9 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(Handle, v9, 0x58uLL);
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)&v6->hNtHandle;
    *(_OWORD *)&Handle[2] = *(_OWORD *)&v6->hSyncObject;
    *(_OWORD *)&Handle[4] = *(_OWORD *)&v6->Reserved[1];
    *(_OWORD *)&Handle[6] = *(_OWORD *)&v6->Reserved[3];
    *(_OWORD *)&Handle[8] = *(_OWORD *)&v6->Reserved[5];
    Handle[10] = (HANDLE)v6->Reserved[7];
  }
  LODWORD(Handle[2]) = 0;
  if ( (HIDWORD(Handle[1]) & 0x7FFFF800) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1897;
    goto LABEL_35;
  }
  if ( (BYTE4(Handle[1]) & 0x10) != 0 || (BYTE4(Handle[1]) & 0x20) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1904;
  }
  v56 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v54, (unsigned int)Handle[1], Current, &v56);
  v10 = v56;
  v53 = v56;
  if ( !v56 )
  {
    WdLogSingleEntry2(2LL, LODWORD(Handle[1]), -1073741811LL);
    WdLogGlobalForLineNumber = 1913;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      LODWORD(Handle[1]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_34:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v54);
    goto LABEL_35;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v59, v56, v48 == 0);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v68, (__int64)v10, 0, v11, 0);
  if ( !a4 )
  {
    v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v68, 0LL);
    if ( v12 < 0 )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v59);
LABEL_94:
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v54);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
      if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v46, (__int64)&EventProfilerExit, v47, v50);
      return (unsigned int)v12;
    }
  }
  v13 = HIDWORD(Handle[1]);
  v66 = (_DWORD *)((char *)Current + 408);
  if ( (*((_DWORD *)Current + 102) & 0x10) != 0 )
  {
    v14 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 4);
    Global = DXGGLOBAL::GetGlobal();
    DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED(
      (DXGAUTOPUSHLOCKFASTSHARED *)&v57,
      (struct DXGGLOBAL *)((char *)Global + 40));
    if ( *(_DWORD *)(v14 + 16) )
    {
      v16 = *(_DWORD *)(*(_QWORD *)v14 + 8LL);
      if ( (v16 & 0x60) == 0 && (v16 & 0x2000) == 0 )
      {
        v17 = *(_DWORD *)(*(_QWORD *)v14 + 8LL) & 0x1F;
        if ( v17 )
        {
          if ( v17 == 8 )
          {
            v18 = **(PVOID **)v14;
LABEL_30:
            v64 = v18;
            if ( !v18 )
            {
              WdLogSingleEntry1(3LL, 0LL);
              WdLogGlobalForLineNumber = 1950;
              if ( v58 )
              {
                _InterlockedDecrement((volatile signed __int32 *)(v57 + 16));
                ExReleasePushLockSharedEx(v57, 0LL);
                KeLeaveCriticalRegion();
              }
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
              DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v59);
              goto LABEL_34;
            }
            if ( v58 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v57 + 16));
              ExReleasePushLockSharedEx(v57, 0LL);
              KeLeaveCriticalRegion();
              v58 = 0;
              v22 = (struct ADAPTER_RENDER **)v56;
LABEL_54:
              v63 = 0LL;
              v29 = DXGGLOBAL::GetGlobal();
              DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v67, v29, 0);
              DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v67);
              LODWORD(v53) = DXGSYNCOBJECT::Open(
                               *(DXGSYNCOBJECT **)v18,
                               v22[2],
                               (struct DXGDEVICE *)v22,
                               0LL,
                               (unsigned int *)&Handle[2],
                               &Handle[3],
                               (unsigned __int64 *)&Handle[4],
                               (unsigned int)Handle[5],
                               &v63,
                               1,
                               (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v13,
                               0LL,
                               0LL,
                               0,
                               *(_DWORD *)(*(_QWORD *)v18 + 404LL) == 7);
              if ( (int)v53 >= 0 )
              {
                DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v67);
                if ( bTracingEnabled )
                {
                  if ( v63 ? *((_QWORD *)v63 + 4) : 0LL )
                  {
                    v33 = v63 ? *((_QWORD *)v63 + 4) : 0LL;
                    v32 = *(_QWORD *)(v33 + 16);
                  }
                  else
                  {
                    v32 = 0LL;
                  }
                  v34 = v63 ? *((_QWORD *)v63 + 4) : 0LL;
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                    McTemplateK0pppp_EtwWriteTransfer(v32, &EventOpenSyncObject, v30, v34, LODWORD(Handle[2]), v22, v32);
                }
                IsEnabledDeviceUsageNoInline = Feature_2887029049__private_IsEnabledDeviceUsageNoInline();
                v36 = *(_QWORD *)&v55[0].hSyncObject;
                if ( IsEnabledDeviceUsageNoInline )
                {
                  v37 = LODWORD(Handle[2]);
                  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)&v55[0].hSyncObject + 248LL));
                  v38 = ((unsigned int)v37 >> 6) & 0xFFFFFF;
                  if ( (unsigned int)v38 < *(_DWORD *)(v36 + 296) )
                  {
                    v39 = *(_QWORD *)(v36 + 280);
                    v40 = *(_DWORD *)(v39 + 16 * v38 + 8);
                    if ( (unsigned int)v37 >> 30 == ((v40 >> 5) & 3) && (v40 & 0x1F) != 0 )
                    {
                      v41 = 2 * ((v37 >> 6) & 0xFFFFFF);
                      if ( (*(_DWORD *)(v39 + 8 * v41 + 8) & 0x2000) == 0 )
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
                      *(_DWORD *)(*(_QWORD *)(v36 + 280) + 8 * v41 + 8) &= ~0x2000u;
                    }
                  }
                  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
                  *(_QWORD *)(v36 + 256) = 0LL;
                  ExReleasePushLockExclusiveEx(v36 + 248, 0LL);
                  KeLeaveCriticalRegion();
                }
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
                DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v59);
                if ( a2 )
                {
                  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
                    v6 = (struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *)MmUserProbeAddress;
                  RtlCopyVolatileMemory(v6, Handle, 0x58uLL);
                }
                else
                {
                  *(_OWORD *)&v6->hNtHandle = *(_OWORD *)Handle;
                  *(_OWORD *)&v6->hSyncObject = *(_OWORD *)&Handle[2];
                  *(_OWORD *)&v6->Reserved[1] = *(_OWORD *)&Handle[4];
                  *(_OWORD *)&v6->Reserved[3] = *(_OWORD *)&Handle[6];
                  *(_OWORD *)&v6->Reserved[5] = *(_OWORD *)&Handle[8];
                  v6->Reserved[7] = (UINT64)Handle[10];
                }
                if ( !(unsigned int)Feature_2887029049__private_IsEnabledDeviceUsageNoInline() )
                {
                  v42 = LODWORD(Handle[2]);
                  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v36 + 248));
                  v43 = ((unsigned int)v42 >> 6) & 0xFFFFFF;
                  if ( (unsigned int)v43 < *(_DWORD *)(v36 + 296) )
                  {
                    v44 = *(_QWORD *)(v36 + 280);
                    if ( (((unsigned int)v42 >> 25) & 0x60) == (*(_BYTE *)(v44 + 16 * v43 + 8) & 0x60)
                      && (*(_DWORD *)(v44 + 16 * v43 + 8) & 0x1F) != 0 )
                    {
                      v45 = 2 * ((v42 >> 6) & 0xFFFFFF);
                      if ( (*(_DWORD *)(v44 + 8 * v45 + 8) & 0x2000) == 0 )
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
                      *(_DWORD *)(*(_QWORD *)(v36 + 280) + 8 * v45 + 8) &= ~0x2000u;
                    }
                  }
                  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
                  *(_QWORD *)(v36 + 256) = 0LL;
                  ExReleasePushLockExclusiveEx(v36 + 248, 0LL);
                  KeLeaveCriticalRegion();
                }
              }
              else
              {
                DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v67);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
                DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v59);
              }
              v12 = (int)v53;
              if ( (*v66 & 0x10) == 0 )
                ObfDereferenceObject(v18);
              goto LABEL_94;
            }
LABEL_53:
            v22 = (struct ADAPTER_RENDER **)v53;
            goto LABEL_54;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v18 = 0LL;
    goto LABEL_30;
  }
  HandleInformation = 0LL;
  Object = 0LL;
  v23 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSyncObjectType, 1, &Object, &HandleInformation);
  v24 = v23;
  v18 = Object;
  v64 = Object;
  if ( v23 == -1073741788 )
  {
    WdLogSingleEntry2(3LL, Handle[0], -1073741788LL);
    WdLogGlobalForLineNumber = 1979;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v59);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v54);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, v26, v50);
    return 3221225508LL;
  }
  else
  {
    if ( v23 >= 0 )
    {
      v13 = v13 & 0xFFFFFFCF | ~(8 * LOBYTE(HandleInformation.GrantedAccess)) & 0x10 | ~(32
                                                                                       * LOBYTE(HandleInformation.GrantedAccess)) & 0x20;
      goto LABEL_53;
    }
    WdLogSingleEntry2(3LL, Handle[0], v23);
    WdLogGlobalForLineNumber = 1986;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v59);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v54);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v50);
    return v24;
  }
}
