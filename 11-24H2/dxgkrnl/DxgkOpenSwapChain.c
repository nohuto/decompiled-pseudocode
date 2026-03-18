/*
 * XREFs of DxgkOpenSwapChain @ 0x1403DDD30
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?IsNonSequential@DXGSWAPCHAIN@@QEBA_NXZ @ 0x1400793EC (-IsNonSequential@DXGSWAPCHAIN@@QEBA_NXZ.c)
 *     McTemplateK0pqdqpp_EtwWriteTransfer @ 0x1400794A8 (McTemplateK0pqdqpp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1401FF300 (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHHH@Z @ 0x1402002AC (-OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHHH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkOpenSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  DXGSWAPCHAIN *v4; // rsi
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rdi
  const void *v7; // rdx
  void *v8; // r14
  char *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGDEVICE *v17; // r12
  int v18; // edi
  __int64 v19; // r9
  __int64 v20; // r8
  int v21; // eax
  NTSTATUS v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  size_t v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  PVOID *Object; // [rsp+20h] [rbp-1C8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-1C0h]
  int v34[2]; // [rsp+30h] [rbp-1B8h]
  struct DXGDEVICE *v35; // [rsp+50h] [rbp-198h] BYREF
  int v36; // [rsp+58h] [rbp-190h] BYREF
  __int64 v37; // [rsp+60h] [rbp-188h]
  char v38; // [rsp+68h] [rbp-180h]
  BOOL v39[4]; // [rsp+70h] [rbp-178h] BYREF
  _BYTE Handle[80]; // [rsp+80h] [rbp-168h] BYREF
  struct DXGDEVICE *v41; // [rsp+D0h] [rbp-118h] BYREF
  PVOID v42; // [rsp+D8h] [rbp-110h] BYREF
  __int64 v43; // [rsp+E0h] [rbp-108h]
  DXGSWAPCHAIN *v44; // [rsp+E8h] [rbp-100h]
  _BYTE v45[16]; // [rsp+F0h] [rbp-F8h] BYREF
  PVOID v46; // [rsp+100h] [rbp-E8h]
  ULONG64 v47; // [rsp+108h] [rbp-E0h]
  _BYTE v48[160]; // [rsp+110h] [rbp-D8h] BYREF

  v47 = a1;
  v36 = -1;
  v37 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v38 = 1;
    v36 = 2109;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2109);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v36, 2109);
  v4 = 0LL;
  memset(Handle, 0, sizeof(Handle));
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 691;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Invalid process context", 691LL, 0LL, 0LL, 0LL, 0LL);
LABEL_11:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( v38 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v36);
    }
    return -1073741811LL;
  }
  v7 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Handle, v7, 0x50uLL);
  v8 = 0LL;
  v43 = 0LL;
  v9 = *(char **)&Handle[56];
  if ( (*(_DWORD *)&Handle[48] == 0) != (*(_QWORD *)&Handle[56] == 0LL) )
  {
    WdLogSingleEntry2(2LL, *(unsigned int *)&Handle[48], *(_QWORD *)&Handle[56]);
    WdLogGlobalForLineNumber = 713;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Either both surface count (0x%I64x) and handle table (0x%I64x) are both valid or both invalid",
      *(unsigned int *)&Handle[48],
      *(__int64 *)&Handle[56],
      0LL,
      0LL,
      0LL);
    goto LABEL_11;
  }
  if ( *(_DWORD *)&Handle[48] )
  {
    v13 = 8LL * *(unsigned int *)&Handle[48];
    if ( !is_mul_ok(*(unsigned int *)&Handle[48], 8uLL) )
      v13 = -1LL;
    v14 = operator new[](v13, 0x4B677844u, 256LL);
    v8 = (void *)v14;
    v43 = v14;
    if ( !v14 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 721;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Out of memory allocating memory for handles table",
        721LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
      if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v36);
      return 3221225495LL;
    }
    *(_QWORD *)&Handle[56] = v14;
  }
  v41 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v35, *(unsigned int *)&Handle[20], Current, &v41);
  v17 = v41;
  if ( v41 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45, v41);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v48, (__int64)v17, 2, v19, 0);
    v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v48, 0LL);
    if ( v18 < 0 )
    {
LABEL_61:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
      goto LABEL_62;
    }
    if ( !*(_QWORD *)Handle )
    {
      if ( *(_QWORD *)&Handle[8] )
      {
        LOBYTE(v20) = 1;
        v21 = ObOpenObjectByName(
                *(_QWORD *)&Handle[8],
                g_pDxgkSharedSwapChainObjectType,
                v20,
                0LL,
                *(_DWORD *)&Handle[28],
                0LL,
                Handle);
        v18 = v21;
        if ( v21 < 0 )
        {
          WdLogSingleEntry1(3LL, v21);
          WdLogGlobalForLineNumber = 760;
          goto LABEL_61;
        }
      }
    }
    v42 = 0LL;
    v22 = ObReferenceObjectByHandle(*(HANDLE *)Handle, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v42, 0LL);
    v18 = v22;
    if ( v22 < 0 )
    {
      WdLogSingleEntry2(3LL, *(_QWORD *)Handle, v22);
      WdLogGlobalForLineNumber = 774;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
      if ( v35 )
      {
        v23 = -1LL;
        v24 = _InterlockedDecrement64((volatile signed __int64 *)v35 + 8);
        if ( !v24 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
      }
      goto LABEL_63;
    }
    v46 = v42;
    v4 = *(DXGSWAPCHAIN **)v42;
    v44 = v4;
    if ( DXGSWAPCHAIN::IsNonSequential(v4) )
    {
      if ( *(_DWORD *)&Handle[48] || *(_QWORD *)&Handle[56] )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 784;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"DxgkOpenSwapChain for non-sequential swapchain should not pass any handles",
          784LL,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_43:
        v18 = -1073741811;
      }
    }
    else
    {
      if ( !*(_QWORD *)&Handle[56] )
      {
        *(_DWORD *)&Handle[48] = *((_DWORD *)v4 + 15);
        v18 = -1073741789;
LABEL_47:
        v39[0] = DXGSWAPCHAIN::IsNonSequential(v4);
        ObfDereferenceObject(v46);
        if ( (int)(v18 + 0x80000000) < 0 || v18 == -1073741789 )
        {
          v26 = (void *)a1;
          if ( a1 >= MmUserProbeAddress )
            v26 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v26, Handle, 8uLL);
          v27 = (void *)(a1 + 48);
          if ( a1 + 48 >= MmUserProbeAddress )
            v27 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v27, &Handle[48], 4uLL);
          v28 = (void *)(a1 + 64);
          if ( a1 + 64 >= MmUserProbeAddress )
            v28 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v28, v39, 4uLL);
          if ( v9 && *(_DWORD *)&Handle[48] )
          {
            v29 = 8LL * *(unsigned int *)&Handle[48];
            if ( (unsigned __int64)&v9[v29] > MmUserProbeAddress || &v9[v29] <= v9 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v9, v8, v29);
          }
        }
        goto LABEL_61;
      }
      if ( *(_DWORD *)&Handle[48] != *((_DWORD *)v4 + 15) )
      {
        WdLogSingleEntry2(2LL, *(unsigned int *)&Handle[48], *((unsigned int *)v4 + 15));
        WdLogGlobalForLineNumber = 798;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Incorrect surface count (%I64d) supplied to DxgkOpenSwapChain (should be %I64d)",
          *(unsigned int *)&Handle[48],
          *((unsigned int *)v4 + 15),
          0LL,
          0LL,
          0LL);
        goto LABEL_43;
      }
    }
    if ( v18 >= 0 )
    {
      v18 = DXGSWAPCHAIN::OpenSwapchainLocal(
              v4,
              *(int *)&Handle[20],
              v17,
              *(__int64 *)&Handle[40],
              *(int *)&Handle[24],
              *(int *)&Handle[16],
              *(int *)&Handle[76]);
      if ( v18 >= 0 )
      {
        *((_DWORD *)v4 + 18) = *(_DWORD *)&Handle[32];
        v18 = DXGSWAPCHAIN::OpenSurfaceResourcesLocalForSequentialOpener(v4, (struct _D3DKMT_OPENSWAPCHAIN *)Handle);
      }
    }
    goto LABEL_47;
  }
  v18 = -1073741811;
  WdLogSingleEntry2(2LL, *(unsigned int *)&Handle[20], -1073741811LL);
  WdLogGlobalForLineNumber = 733;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
    *(unsigned int *)&Handle[20],
    -1073741811LL,
    0LL,
    0LL,
    0LL);
LABEL_62:
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v35);
LABEL_63:
  if ( v8 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
  {
    v34[0] = *(_DWORD *)&Handle[20];
    LODWORD(HandleInformation) = *(_DWORD *)&Handle[16];
    LODWORD(Object) = v18;
    McTemplateK0pqdqpp_EtwWriteTransfer(
      v24,
      v23,
      v25,
      v4,
      Object,
      HandleInformation,
      *(_QWORD *)v34,
      *(_QWORD *)&Handle[40],
      *(_QWORD *)Handle);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit, v31, v36);
  return (unsigned int)v18;
}
