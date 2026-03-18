/*
 * XREFs of DxgkOpenSwapChain @ 0x1403E6330
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?IsNonSequential@DXGSWAPCHAIN@@QEBA_NXZ @ 0x140078EB8 (-IsNonSequential@DXGSWAPCHAIN@@QEBA_NXZ.c)
 *     McTemplateK0pqdqpp_EtwWriteTransfer @ 0x140078F20 (McTemplateK0pqdqpp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1401F8C24 (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHHH@Z @ 0x1401F9BF0 (-OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHHH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkOpenSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  DXGSWAPCHAIN *v4; // rsi
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rdi
  const void *v7; // rdx
  __int64 v8; // r9
  void *v9; // r14
  char *v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGDEVICE *v18; // r12
  int v19; // edi
  __int64 v20; // r9
  __int64 v21; // r8
  int v22; // eax
  NTSTATUS v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  size_t v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  PVOID *Object; // [rsp+20h] [rbp-1C8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-1C0h]
  int v35[2]; // [rsp+30h] [rbp-1B8h]
  struct DXGDEVICE *v36; // [rsp+50h] [rbp-198h] BYREF
  int v37; // [rsp+58h] [rbp-190h] BYREF
  __int64 v38; // [rsp+60h] [rbp-188h]
  char v39; // [rsp+68h] [rbp-180h]
  BOOL v40[4]; // [rsp+70h] [rbp-178h] BYREF
  _BYTE Handle[80]; // [rsp+80h] [rbp-168h] BYREF
  struct DXGDEVICE *v42; // [rsp+D0h] [rbp-118h] BYREF
  PVOID v43; // [rsp+D8h] [rbp-110h] BYREF
  __int64 v44; // [rsp+E0h] [rbp-108h]
  DXGSWAPCHAIN *v45; // [rsp+E8h] [rbp-100h]
  _BYTE v46[16]; // [rsp+F0h] [rbp-F8h] BYREF
  PVOID v47; // [rsp+100h] [rbp-E8h]
  ULONG64 v48; // [rsp+108h] [rbp-E0h]
  _BYTE v49[160]; // [rsp+110h] [rbp-D8h] BYREF

  v48 = a1;
  v37 = -1;
  v38 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v39 = 1;
    v37 = 2109;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2109);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 2109);
  v4 = 0LL;
  memset(Handle, 0, sizeof(Handle));
  Current = DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 681;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid process context", 681LL, 0LL, 0LL, 0LL, 0LL);
LABEL_11:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v37);
    }
    return -1073741811LL;
  }
  v7 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Handle, v7, 0x50uLL);
  v9 = 0LL;
  v44 = 0LL;
  v10 = *(char **)&Handle[56];
  if ( (*(_DWORD *)&Handle[48] == 0) != (*(_QWORD *)&Handle[56] == 0LL) )
  {
    WdLogSingleEntry2(2LL, *(unsigned int *)&Handle[48], *(_QWORD *)&Handle[56]);
    WdLogGlobalForLineNumber = 703;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
    v14 = 8LL * *(unsigned int *)&Handle[48];
    if ( !is_mul_ok(*(unsigned int *)&Handle[48], 8uLL) )
      v14 = -1LL;
    v15 = operator new[](v14, 0x4B677844u, 256LL, v8);
    v9 = (void *)v15;
    v44 = v15;
    if ( !v15 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 711;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Out of memory allocating memory for handles table",
        711LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
      if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v37);
      return 3221225495LL;
    }
    *(_QWORD *)&Handle[56] = v15;
  }
  v42 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v36, *(unsigned int *)&Handle[20], Current, &v42);
  v18 = v42;
  if ( v42 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v46, v42);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v49, (__int64)v18, 2, v20, 0);
    v19 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v49, 0LL);
    if ( v19 < 0 )
    {
LABEL_61:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v46);
      goto LABEL_62;
    }
    if ( !*(_QWORD *)Handle )
    {
      if ( *(_QWORD *)&Handle[8] )
      {
        LOBYTE(v21) = 1;
        v22 = ObOpenObjectByName(
                *(_QWORD *)&Handle[8],
                g_pDxgkSharedSwapChainObjectType,
                v21,
                0LL,
                *(_DWORD *)&Handle[28],
                0LL,
                Handle);
        v19 = v22;
        if ( v22 < 0 )
        {
          WdLogSingleEntry1(3LL, v22);
          WdLogGlobalForLineNumber = 750;
          goto LABEL_61;
        }
      }
    }
    v43 = 0LL;
    v23 = ObReferenceObjectByHandle(*(HANDLE *)Handle, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v43, 0LL);
    v19 = v23;
    if ( v23 < 0 )
    {
      WdLogSingleEntry2(3LL, *(_QWORD *)Handle, v23);
      WdLogGlobalForLineNumber = 764;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v46);
      if ( v36 )
      {
        v24 = -1LL;
        v25 = _InterlockedDecrement64((volatile signed __int64 *)v36 + 8);
        if ( !v25 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
      }
      goto LABEL_63;
    }
    v47 = v43;
    v4 = *(DXGSWAPCHAIN **)v43;
    v45 = v4;
    if ( DXGSWAPCHAIN::IsNonSequential(v4) )
    {
      if ( *(_DWORD *)&Handle[48] || *(_QWORD *)&Handle[56] )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 774;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkOpenSwapChain for non-sequential swapchain should not pass any handles",
          774LL,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_43:
        v19 = -1073741811;
      }
    }
    else
    {
      if ( !*(_QWORD *)&Handle[56] )
      {
        *(_DWORD *)&Handle[48] = *((_DWORD *)v4 + 15);
        v19 = -1073741789;
LABEL_47:
        v40[0] = DXGSWAPCHAIN::IsNonSequential(v4);
        ObfDereferenceObject(v47);
        if ( (int)(v19 + 0x80000000) < 0 || v19 == -1073741789 )
        {
          v27 = (void *)a1;
          if ( a1 >= MmUserProbeAddress )
            v27 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v27, Handle, 8uLL);
          v28 = (void *)(a1 + 48);
          if ( a1 + 48 >= MmUserProbeAddress )
            v28 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v28, &Handle[48], 4uLL);
          v29 = (void *)(a1 + 64);
          if ( a1 + 64 >= MmUserProbeAddress )
            v29 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v29, v40, 4uLL);
          if ( v10 && *(_DWORD *)&Handle[48] )
          {
            v30 = 8LL * *(unsigned int *)&Handle[48];
            if ( (unsigned __int64)&v10[v30] > MmUserProbeAddress || &v10[v30] <= v10 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v10, v9, v30);
          }
        }
        goto LABEL_61;
      }
      if ( *(_DWORD *)&Handle[48] != *((_DWORD *)v4 + 15) )
      {
        WdLogSingleEntry2(2LL, *(unsigned int *)&Handle[48], *((unsigned int *)v4 + 15));
        WdLogGlobalForLineNumber = 788;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
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
    if ( v19 >= 0 )
    {
      v19 = DXGSWAPCHAIN::OpenSwapchainLocal(
              v4,
              *(int *)&Handle[20],
              v18,
              *(__int64 *)&Handle[40],
              *(int *)&Handle[24],
              *(int *)&Handle[16],
              *(int *)&Handle[76]);
      if ( v19 >= 0 )
      {
        *((_DWORD *)v4 + 18) = *(_DWORD *)&Handle[32];
        v19 = DXGSWAPCHAIN::OpenSurfaceResourcesLocalForSequentialOpener(v4, (struct _D3DKMT_OPENSWAPCHAIN *)Handle);
      }
    }
    goto LABEL_47;
  }
  v19 = -1073741811;
  WdLogSingleEntry2(2LL, *(unsigned int *)&Handle[20], -1073741811LL);
  WdLogGlobalForLineNumber = 723;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
    *(unsigned int *)&Handle[20],
    -1073741811LL,
    0LL,
    0LL,
    0LL);
LABEL_62:
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v36);
LABEL_63:
  if ( v9 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
  {
    v35[0] = *(_DWORD *)&Handle[20];
    LODWORD(HandleInformation) = *(_DWORD *)&Handle[16];
    LODWORD(Object) = v19;
    McTemplateK0pqdqpp_EtwWriteTransfer(
      v25,
      v24,
      v26,
      v4,
      Object,
      HandleInformation,
      *(_QWORD *)v35,
      *(_QWORD *)&Handle[40],
      *(_QWORD *)Handle);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerExit, v32, v37);
  return (unsigned int)v19;
}
