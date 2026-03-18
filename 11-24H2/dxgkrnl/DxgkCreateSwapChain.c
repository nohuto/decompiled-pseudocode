/*
 * XREFs of DxgkCreateSwapChain @ 0x140201340
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
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x140079320 (--_GDXGSWAPCHAIN@@QEAAPEAXI@Z.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140079400 (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_DeferredSwapChainClose__private_IsEnabledDeviceUsageNoInline @ 0x140079454 (Feature_Servicing_DeferredSwapChainClose__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pqdqqpp_EtwWriteTransfer @ 0x140079568 (McTemplateK0pqdqqpp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ??0DXGSWAPCHAIN@@QEAA@XZ @ 0x1401FD1D4 (--0DXGSWAPCHAIN@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z @ 0x1401FD2D8 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z.c)
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z @ 0x1401FDB34 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z.c)
 *     ?InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1401FEC30 (-InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHA.c)
 *     ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHHH@Z @ 0x1402002AC (-OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHHH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x140379310 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x140394554 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 */

__int64 __fastcall DxgkCreateSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  DXGSWAPCHAIN *v4; // r14
  struct _KTHREAD **Current; // rbx
  __int64 v6; // rax
  const wchar_t *v7; // r9
  const void *v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  void *v13; // r15
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // kr00_8
  __int64 v16; // rcx
  __int64 v17; // r8
  size_t v18; // r8
  const void *v19; // rdx
  struct ADAPTER_RENDER **v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rdx
  HANDLE v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  DXGSWAPCHAIN *v26; // rax
  char v27; // r9
  int v28; // eax
  unsigned int v29; // ebx
  __int64 v30; // r9
  __int64 v31; // rcx
  int v32; // eax
  const wchar_t *v33; // r9
  NTSTATUS inserted; // eax
  void *v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // r8
  PVOID *NewObject; // [rsp+20h] [rbp-248h]
  PHANDLE Handle; // [rsp+28h] [rbp-240h]
  int v41[2]; // [rsp+30h] [rbp-238h]
  __int64 v42; // [rsp+38h] [rbp-230h]
  char v43; // [rsp+50h] [rbp-218h]
  int v44; // [rsp+58h] [rbp-210h] BYREF
  __int64 v45; // [rsp+60h] [rbp-208h]
  char v46; // [rsp+68h] [rbp-200h]
  _BYTE v47[8]; // [rsp+70h] [rbp-1F8h] BYREF
  HANDLE v48[2]; // [rsp+78h] [rbp-1F0h] BYREF
  unsigned int v49; // [rsp+88h] [rbp-1E0h] BYREF
  PVOID Object; // [rsp+90h] [rbp-1D8h] BYREF
  void *v51; // [rsp+98h] [rbp-1D0h]
  _BYTE v52[64]; // [rsp+A0h] [rbp-1C8h] BYREF
  struct DXGDEVICE *v53; // [rsp+E0h] [rbp-188h] BYREF
  struct DXGDEVICE *v54; // [rsp+E8h] [rbp-180h] BYREF
  _BYTE v55[16]; // [rsp+F0h] [rbp-178h] BYREF
  ULONG64 v56; // [rsp+100h] [rbp-168h]
  _BYTE v57[160]; // [rsp+110h] [rbp-158h] BYREF
  _BYTE v58[128]; // [rsp+1B0h] [rbp-B8h] BYREF

  v56 = a1;
  v44 = -1;
  v45 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v46 = 1;
    v44 = 2108;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2108);
  }
  else
  {
    v46 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v44, 2108);
  v4 = 0LL;
  v43 = 0;
  Object = 0LL;
  v48[0] = 0LL;
  memset(v52, 0, sizeof(v52));
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    v6 = 428LL;
    v7 = L"Invalid process context";
LABEL_18:
    WdLogGlobalForLineNumber = v6;
    goto LABEL_19;
  }
  v8 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v52, v8, 0x40uLL);
  if ( (v52[32] & 2) != 0 )
  {
    v9 = *(_DWORD *)&v52[20];
    if ( *(_DWORD *)&v52[20] )
    {
      WdLogSingleEntry0(2LL);
      v6 = 451LL;
      v7 = L"In non-sequence mode create cannot have any surfaces, add surface should be used to add them";
      goto LABEL_18;
    }
    if ( !*(_DWORD *)v52 )
    {
      WdLogSingleEntry0(2LL);
      v6 = 458LL;
      v7 = L"In non-sequence mode create has to be the producer";
      goto LABEL_18;
    }
  }
  else
  {
    v9 = *(_DWORD *)&v52[20];
    if ( *(_DWORD *)&v52[20] > 0x32u )
    {
      WdLogSingleEntry1(2LL, *(unsigned int *)&v52[20]);
      WdLogGlobalForLineNumber = 467;
      v6 = *(unsigned int *)&v52[20];
      v7 = L"Caller requested 0x%I64x buffers, this is over the maximum";
LABEL_19:
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v7, v6, 0LL, 0LL, 0LL, 0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
      if ( v46 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v44);
      }
      return -1073741811LL;
    }
    if ( !*(_DWORD *)&v52[20] )
    {
      WdLogSingleEntry0(2LL);
      v6 = 472LL;
      v7 = L"Cannot create swapchain with zero buffers";
      goto LABEL_18;
    }
  }
  v13 = 0LL;
  v51 = 0LL;
  if ( v9 )
  {
    v15 = v9;
    v14 = 8LL * v9;
    if ( !is_mul_ok(v15, 8uLL) )
      v14 = -1LL;
    v13 = (void *)operator new[](v14, 0x4B677844u, 256LL);
    v51 = v13;
    if ( !v13 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 484;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Out of memory allocating memory for handles array",
        484LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
      if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v44);
      return 3221225495LL;
    }
    v18 = 8LL * *(unsigned int *)&v52[20];
    v19 = *(const void **)&v52[24];
    if ( *(_QWORD *)&v52[24] + v18 < *(_QWORD *)&v52[24] || *(_QWORD *)&v52[24] + v18 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v13, v19, v18);
    *(_QWORD *)&v52[24] = v13;
  }
  v53 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v47, *(unsigned int *)&v52[4], Current, &v53);
  v20 = (struct ADAPTER_RENDER **)v53;
  if ( !v53 )
  {
    LODWORD(v21) = -1073741811;
    WdLogSingleEntry2(2LL, *(unsigned int *)&v52[4], -1073741811LL);
    WdLogGlobalForLineNumber = 506;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      *(unsigned int *)&v52[4],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_37:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v47);
    goto LABEL_64;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55, v53);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v57, (__int64)v20, 2, v25, 0);
  LODWORD(v21) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v57, 0LL);
  if ( (int)v21 < 0 )
  {
LABEL_39:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v57);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55);
    goto LABEL_37;
  }
  v26 = (DXGSWAPCHAIN *)operator new(0xF0uLL, 0x4B677844u, 256LL);
  if ( v26 )
    v4 = DXGSWAPCHAIN::DXGSWAPCHAIN(v26);
  else
    v4 = 0LL;
  v48[1] = v4;
  if ( !v4 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 523;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Out of memory allocating DXGSWAPCHAIN class",
      523LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v21) = -1073741801;
    goto LABEL_39;
  }
  LODWORD(v21) = DXGSWAPCHAIN::InitializeSwapchainGlobalState(v4, v20[2], (struct _D3DKMT_CREATESWAPCHAIN *)v52);
  if ( (int)v21 < 0 )
    goto LABEL_39;
  LODWORD(v21) = DXGSWAPCHAIN::OpenSwapchainLocal(
                   v4,
                   *(int *)&v52[4],
                   (struct DXGDEVICE *)v20,
                   *(__int64 *)&v52[40],
                   v52[32] & 1,
                   *(int *)v52,
                   *(int *)&v52[56]);
  if ( (int)v21 < 0 )
    goto LABEL_39;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v57);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v47);
  v54 = 0LL;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v58, v4, *(_DWORD *)v52 != 0, 1);
  if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
    v27 = *((_DWORD *)v4 + 59) != 0;
  else
    v27 = 0;
  v28 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v58, &v54, 1, v27);
  v21 = v28;
  if ( v28 < 0 )
  {
    WdLogSingleEntry1(2LL, v28);
    WdLogGlobalForLineNumber = 573;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to acquire swapchain and device lock (0x%I64x)",
      v21,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_52:
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v58);
    goto LABEL_64;
  }
  v29 = 0;
  if ( *(_DWORD *)&v52[20] )
  {
    do
    {
      v49 = 0;
      LODWORD(v21) = DXGSWAPCHAIN::AddSurface(
                       v4,
                       (unsigned __int64)v54,
                       *(int *)v52,
                       *(void **)(*(_QWORD *)&v52[24] + 8LL * v29),
                       &v49);
      if ( (int)v21 < 0 )
        goto LABEL_52;
    }
    while ( ++v29 < *(_DWORD *)&v52[20] );
  }
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v58);
  LOBYTE(v30) = 1;
  LOBYTE(v31) = 1;
  v32 = ObCreateObject(v31, g_pDxgkSharedSwapChainObjectType, *(_QWORD *)&v52[8], v30, 0LL, 8, 248, 0, &Object);
  v21 = v32;
  if ( v32 >= 0 )
  {
    *(_QWORD *)Object = v4;
    v43 = 1;
    inserted = ObInsertObject(Object, 0LL, *(ACCESS_MASK *)&v52[16], 0, 0LL, v48);
    v21 = inserted;
    if ( inserted >= 0 )
    {
      v35 = (void *)(a1 + 48);
      if ( a1 + 48 >= MmUserProbeAddress )
        v35 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v35, v48, 8uLL);
      goto LABEL_64;
    }
    WdLogSingleEntry1(2LL, inserted);
    WdLogGlobalForLineNumber = 621;
    v33 = L"Failed to create Nt handle for swapchain (0x%I64x)";
  }
  else
  {
    WdLogSingleEntry1(2LL, v32);
    WdLogGlobalForLineNumber = 602;
    v33 = L"Failed to create Nt swapchain object (0x%I64x)";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v33, v21, 0LL, 0LL, 0LL, 0LL);
LABEL_64:
  if ( (int)v21 < 0 )
  {
    v23 = v48[0];
    if ( v48[0] )
    {
      v36 = ObCloseHandle(v48[0], 1);
      if ( (unsigned int)Feature_Servicing_DeferredSwapChainClose__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( (int)v36 < 0 )
        {
          WdLogSingleEntry2(1LL, v48[0], v36);
          WdLogGlobalForLineNumber = 648;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"Failed to close swap chain handle 0x%I64x: Status = 0x%I64x",
            (__int64)v48[0],
            v36,
            0LL,
            0LL,
            0LL);
        }
      }
    }
    if ( v4 && !v43 )
    {
      DXGSWAPCHAIN::`scalar deleting destructor'(v4);
      v4 = 0LL;
    }
  }
  if ( v13 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v13);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
  {
    LODWORD(v42) = *(_DWORD *)&v52[20];
    v41[0] = *(_DWORD *)&v52[4];
    LODWORD(Handle) = *(_DWORD *)v52;
    LODWORD(NewObject) = v21;
    McTemplateK0pqdqqpp_EtwWriteTransfer(
      (__int64)v23,
      v22,
      v24,
      v4,
      NewObject,
      Handle,
      *(_QWORD *)v41,
      v42,
      *(_QWORD *)&v52[40],
      v48[0]);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
  if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v37, (__int64)&EventProfilerExit, v38, v44);
  return (unsigned int)v21;
}
