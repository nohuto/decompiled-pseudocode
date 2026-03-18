/*
 * XREFs of DxgkCreateSwapChain @ 0x1401FAC90
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
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x140078DEC (--_GDXGSWAPCHAIN@@QEAAPEAXI@Z.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140078ECC (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pqdqqpp_EtwWriteTransfer @ 0x140078FE0 (McTemplateK0pqdqqpp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ??0DXGSWAPCHAIN@@QEAA@XZ @ 0x1401F6884 (--0DXGSWAPCHAIN@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z @ 0x1401F6988 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z.c)
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z @ 0x1401F71E0 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z.c)
 *     ?InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1401F8554 (-InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHA.c)
 *     ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHHH@Z @ 0x1401F9BF0 (-OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHHH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x14038CBB0 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x14039DE6C (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 */

__int64 __fastcall DxgkCreateSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  DXGSWAPCHAIN *v4; // r14
  struct DXGPROCESS *Current; // rbx
  __int64 v6; // rax
  const wchar_t *v7; // r9
  const void *v8; // rdx
  __int64 v9; // r9
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  void *v14; // r15
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // kr00_8
  __int64 v17; // rcx
  __int64 v18; // r8
  size_t v19; // r8
  const void *v20; // rdx
  struct ADAPTER_RENDER **v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rdx
  HANDLE v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r9
  DXGSWAPCHAIN *v28; // rax
  char v29; // r9
  int v30; // eax
  unsigned int v31; // ebx
  __int64 v32; // r9
  __int64 v33; // rcx
  int v34; // eax
  const wchar_t *v35; // r9
  NTSTATUS inserted; // eax
  void *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r8
  PVOID *NewObject; // [rsp+20h] [rbp-248h]
  PHANDLE Handle; // [rsp+28h] [rbp-240h]
  int v42[2]; // [rsp+30h] [rbp-238h]
  __int64 v43; // [rsp+38h] [rbp-230h]
  char v44; // [rsp+50h] [rbp-218h]
  int v45; // [rsp+58h] [rbp-210h] BYREF
  __int64 v46; // [rsp+60h] [rbp-208h]
  char v47; // [rsp+68h] [rbp-200h]
  _BYTE v48[8]; // [rsp+70h] [rbp-1F8h] BYREF
  DXGSWAPCHAIN *v49; // [rsp+78h] [rbp-1F0h]
  HANDLE v50; // [rsp+80h] [rbp-1E8h] BYREF
  unsigned int v51; // [rsp+88h] [rbp-1E0h] BYREF
  PVOID Object; // [rsp+90h] [rbp-1D8h] BYREF
  void *v53; // [rsp+98h] [rbp-1D0h]
  _BYTE v54[64]; // [rsp+A0h] [rbp-1C8h] BYREF
  struct DXGDEVICE *v55; // [rsp+E0h] [rbp-188h] BYREF
  struct DXGDEVICE *v56; // [rsp+E8h] [rbp-180h] BYREF
  _BYTE v57[16]; // [rsp+F0h] [rbp-178h] BYREF
  ULONG64 v58; // [rsp+100h] [rbp-168h]
  _BYTE v59[160]; // [rsp+110h] [rbp-158h] BYREF
  _BYTE v60[128]; // [rsp+1B0h] [rbp-B8h] BYREF

  v58 = a1;
  v45 = -1;
  v46 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v47 = 1;
    v45 = 2108;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2108);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v45, 2108);
  v4 = 0LL;
  v44 = 0;
  Object = 0LL;
  v50 = 0LL;
  memset(v54, 0, sizeof(v54));
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    v6 = 426LL;
    v7 = L"Invalid process context";
LABEL_18:
    WdLogGlobalForLineNumber = v6;
    goto LABEL_19;
  }
  v8 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v54, v8, 0x40uLL);
  if ( (v54[32] & 2) != 0 )
  {
    v10 = *(_DWORD *)&v54[20];
    if ( *(_DWORD *)&v54[20] )
    {
      WdLogSingleEntry0(2LL);
      v6 = 449LL;
      v7 = L"In non-sequence mode create cannot have any surfaces, add surface should be used to add them";
      goto LABEL_18;
    }
    if ( !*(_DWORD *)v54 )
    {
      WdLogSingleEntry0(2LL);
      v6 = 456LL;
      v7 = L"In non-sequence mode create has to be the producer";
      goto LABEL_18;
    }
  }
  else
  {
    v10 = *(_DWORD *)&v54[20];
    if ( *(_DWORD *)&v54[20] > 0x32u )
    {
      WdLogSingleEntry1(2LL, *(unsigned int *)&v54[20]);
      WdLogGlobalForLineNumber = 465;
      v6 = *(unsigned int *)&v54[20];
      v7 = L"Caller requested 0x%I64x buffers, this is over the maximum";
LABEL_19:
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v7, v6, 0LL, 0LL, 0LL, 0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
      if ( v47 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v45);
      }
      return -1073741811LL;
    }
    if ( !*(_DWORD *)&v54[20] )
    {
      WdLogSingleEntry0(2LL);
      v6 = 470LL;
      v7 = L"Cannot create swapchain with zero buffers";
      goto LABEL_18;
    }
  }
  v14 = 0LL;
  v53 = 0LL;
  if ( v10 )
  {
    v16 = v10;
    v15 = 8LL * v10;
    if ( !is_mul_ok(v16, 8uLL) )
      v15 = -1LL;
    v14 = (void *)operator new[](v15, 0x4B677844u, 256LL, v9);
    v53 = v14;
    if ( !v14 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 482;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Out of memory allocating memory for handles array",
        482LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
      if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v45);
      return 3221225495LL;
    }
    v19 = 8LL * *(unsigned int *)&v54[20];
    v20 = *(const void **)&v54[24];
    if ( *(_QWORD *)&v54[24] + v19 < *(_QWORD *)&v54[24] || *(_QWORD *)&v54[24] + v19 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v14, v20, v19);
    *(_QWORD *)&v54[24] = v14;
  }
  v55 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v48, *(unsigned int *)&v54[4], Current, &v55);
  v21 = (struct ADAPTER_RENDER **)v55;
  if ( !v55 )
  {
    LODWORD(v22) = -1073741811;
    WdLogSingleEntry2(2LL, *(unsigned int *)&v54[4], -1073741811LL);
    WdLogGlobalForLineNumber = 504;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      *(unsigned int *)&v54[4],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_37:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v48);
    goto LABEL_64;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v57, v55);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v59, (__int64)v21, 2, v26, 0);
  LODWORD(v22) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v59, 0LL);
  if ( (int)v22 < 0 )
  {
LABEL_39:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v59);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v57);
    goto LABEL_37;
  }
  v28 = (DXGSWAPCHAIN *)operator new(0xF0uLL, 0x4B677844u, 256LL, v27);
  if ( v28 )
    v4 = DXGSWAPCHAIN::DXGSWAPCHAIN(v28);
  else
    v4 = 0LL;
  v49 = v4;
  if ( !v4 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 521;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Out of memory allocating DXGSWAPCHAIN class",
      521LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v22) = -1073741801;
    goto LABEL_39;
  }
  LODWORD(v22) = DXGSWAPCHAIN::InitializeSwapchainGlobalState(v4, v21[2], (struct _D3DKMT_CREATESWAPCHAIN *)v54);
  if ( (int)v22 < 0 )
    goto LABEL_39;
  LODWORD(v22) = DXGSWAPCHAIN::OpenSwapchainLocal(
                   v4,
                   *(int *)&v54[4],
                   (struct DXGDEVICE *)v21,
                   *(__int64 *)&v54[40],
                   v54[32] & 1,
                   *(int *)v54,
                   *(int *)&v54[56]);
  if ( (int)v22 < 0 )
    goto LABEL_39;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v59);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v57);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v48);
  v56 = 0LL;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v60, v4, *(_DWORD *)v54 != 0, 1);
  if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
    v29 = *((_DWORD *)v4 + 59) != 0;
  else
    v29 = 0;
  v30 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v60, &v56, 1, v29);
  v22 = v30;
  if ( v30 < 0 )
  {
    WdLogSingleEntry1(2LL, v30);
    WdLogGlobalForLineNumber = 571;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to acquire swapchain and device lock (0x%I64x)",
      v22,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_52:
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v60);
    goto LABEL_64;
  }
  v31 = 0;
  if ( *(_DWORD *)&v54[20] )
  {
    do
    {
      v51 = 0;
      LODWORD(v22) = DXGSWAPCHAIN::AddSurface(
                       v4,
                       (unsigned __int64)v56,
                       *(int *)v54,
                       *(void **)(*(_QWORD *)&v54[24] + 8LL * v31),
                       &v51);
      if ( (int)v22 < 0 )
        goto LABEL_52;
    }
    while ( ++v31 < *(_DWORD *)&v54[20] );
  }
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v60);
  LOBYTE(v32) = 1;
  LOBYTE(v33) = 1;
  v34 = ObCreateObject(v33, g_pDxgkSharedSwapChainObjectType, *(_QWORD *)&v54[8], v32, 0LL, 8, 248, 0, &Object);
  v22 = v34;
  if ( v34 >= 0 )
  {
    *(_QWORD *)Object = v4;
    v44 = 1;
    inserted = ObInsertObject(Object, 0LL, *(ACCESS_MASK *)&v54[16], 0, 0LL, &v50);
    v22 = inserted;
    if ( inserted >= 0 )
    {
      v37 = (void *)(a1 + 48);
      if ( a1 + 48 >= MmUserProbeAddress )
        v37 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v37, &v50, 8uLL);
      goto LABEL_64;
    }
    WdLogSingleEntry1(2LL, inserted);
    WdLogGlobalForLineNumber = 619;
    v35 = L"Failed to create Nt handle for swapchain (0x%I64x)";
  }
  else
  {
    WdLogSingleEntry1(2LL, v34);
    WdLogGlobalForLineNumber = 600;
    v35 = L"Failed to create Nt swapchain object (0x%I64x)";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v35, v22, 0LL, 0LL, 0LL, 0LL);
LABEL_64:
  if ( (int)v22 < 0 )
  {
    v24 = v50;
    if ( v50 )
      ObCloseHandle(v50, 1);
    if ( v4 && !v44 )
    {
      DXGSWAPCHAIN::`scalar deleting destructor'(v4);
      v4 = 0LL;
    }
  }
  if ( v14 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
  {
    LODWORD(v43) = *(_DWORD *)&v54[20];
    v42[0] = *(_DWORD *)&v54[4];
    LODWORD(Handle) = *(_DWORD *)v54;
    LODWORD(NewObject) = v22;
    McTemplateK0pqdqqpp_EtwWriteTransfer(
      (__int64)v24,
      v23,
      v25,
      v4,
      NewObject,
      Handle,
      *(_QWORD *)v42,
      v43,
      *(_QWORD *)&v54[40],
      v50);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
  if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v38, (__int64)&EventProfilerExit, v39, v45);
  return (unsigned int)v22;
}
