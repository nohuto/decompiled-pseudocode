/*
 * XREFs of DxgkAcquireSwapChain @ 0x1404261C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140078ECC (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z @ 0x1401F6988 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z.c)
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z @ 0x1401F6E08 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x14038CBB0 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x14039DE6C (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 */

__int64 __fastcall DxgkAcquireSwapChain(struct DXGDEVICE *a1, __int64 a2, __int64 a3)
{
  char *v4; // r12
  void *v5; // rsi
  const void *v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rax
  const wchar_t *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  NTSTATUS v17; // eax
  int v18; // edi
  struct _KTHREAD ***v19; // r14
  struct DXGSWAPCHAIN *v20; // r13
  char v21; // r9
  int v22; // eax
  void *v23; // rcx
  void *v24; // rcx
  void *v25; // rcx
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  size_t v29; // r8
  const void *v30; // rdx
  void *v31; // rcx
  void *v32; // rcx
  void *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // [rsp+50h] [rbp-178h] BYREF
  __int64 v37; // [rsp+58h] [rbp-170h]
  char v38; // [rsp+60h] [rbp-168h]
  PVOID Object; // [rsp+68h] [rbp-160h] BYREF
  __int64 v40; // [rsp+70h] [rbp-158h]
  struct DXGDEVICE *v41[3]; // [rsp+78h] [rbp-150h] BYREF
  _BYTE Handle[128]; // [rsp+90h] [rbp-138h] BYREF
  _BYTE v43[128]; // [rsp+110h] [rbp-B8h] BYREF

  v41[1] = a1;
  v36 = -1;
  v37 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v38 = 1;
    v36 = 2111;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2111);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v36, 2111);
  memset(Handle, 0, sizeof(Handle));
  v4 = 0LL;
  v5 = 0LL;
  v40 = 0LL;
  v6 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v6 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Handle, v6, 0x80uLL);
  if ( *(_DWORD *)&Handle[8] && *(_DWORD *)&Handle[12] != *(_DWORD *)&Handle[24] )
  {
    WdLogSingleEntry0(2LL);
    v8 = 1171LL;
    v9 = L"Inconsistent bProducer value between acquire and release";
LABEL_15:
    WdLogGlobalForLineNumber = v8;
    goto LABEL_16;
  }
  if ( *(_DWORD *)&Handle[64] > 0x32u )
  {
    WdLogSingleEntry1(2LL, *(unsigned int *)&Handle[64]);
    WdLogGlobalForLineNumber = 1178;
    v8 = *(unsigned int *)&Handle[64];
    v9 = L"Caller specified 0x%I64x deferred list size, this is over the maximum";
LABEL_16:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v9, v8, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( v38 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v36);
    }
    return 3221225485LL;
  }
  if ( *(_DWORD *)&Handle[64] )
  {
    if ( !*(_QWORD *)&Handle[72] )
    {
      WdLogSingleEntry0(2LL);
      v8 = 1186LL;
      v9 = L"Caller specified non-zero free list size but failed to provide buffer";
      goto LABEL_15;
    }
    v13 = 4LL * *(unsigned int *)&Handle[64];
    if ( !is_mul_ok(*(unsigned int *)&Handle[64], 4uLL) )
      v13 = -1LL;
    v14 = operator new[](v13, 0x4B677844u, 256LL, v7);
    v5 = (void *)v14;
    v40 = v14;
    if ( !v14 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1193;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate deferred list",
        1193LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
      if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v36);
      return 3221225495LL;
    }
    v4 = *(char **)&Handle[72];
    *(_QWORD *)&Handle[72] = v14;
  }
  Object = 0LL;
  v17 = ObReferenceObjectByHandle(*(HANDLE *)Handle, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v18 = v17;
  if ( v17 >= 0 )
  {
    v19 = (struct _KTHREAD ***)Object;
    v20 = *(struct DXGSWAPCHAIN **)Object;
    v41[0] = 0LL;
    DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE(
      (DXGSWAPCHAINLOCKWITHDEVICE *)v43,
      v20,
      *(_DWORD *)&Handle[12] != 0,
      1);
    if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
      v21 = *((_DWORD *)v20 + 59) != 0;
    else
      v21 = 0;
    v18 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v43, v41, 1, v21);
    if ( v18 >= 0 )
    {
      if ( *((_DWORD *)v20 + 58) && *(_DWORD *)&Handle[12] )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1309;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkAcquireSwapChain is not allowed for non-sequential swapchain producer",
          1309LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v18 = -1073741637;
      }
      else
      {
        v22 = DXGSWAPCHAIN::AcquireBuffer(*v19, (struct _D3DKMT_ACQUIRESWAPCHAIN *)Handle, 0LL, 1);
        v18 = v22;
        if ( v22 >= 0 && v22 != 259 )
        {
          v23 = (char *)a1 + 80;
          if ( (unsigned __int64)a1 + 80 >= MmUserProbeAddress )
            v23 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v23, &Handle[80], 4uLL);
          v24 = (char *)a1 + 88;
          if ( (unsigned __int64)a1 + 88 >= MmUserProbeAddress )
            v24 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v24, &Handle[88], 8uLL);
          v25 = (char *)a1 + 96;
          if ( (unsigned __int64)a1 + 96 >= MmUserProbeAddress )
            v25 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v25, &Handle[96], 4uLL);
          v26 = (char *)a1 + 64;
          if ( (unsigned __int64)a1 + 64 >= MmUserProbeAddress )
            v26 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v26, &Handle[64], 4uLL);
          if ( *(_QWORD *)&Handle[32] )
          {
            v27 = (char *)a1 + 32;
            if ( (unsigned __int64)a1 + 32 >= MmUserProbeAddress )
              v27 = (void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v27, &Handle[32], 8uLL);
            v28 = (char *)a1 + 40;
            if ( (unsigned __int64)a1 + 40 >= MmUserProbeAddress )
              v28 = (void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v28, &Handle[40], 8uLL);
          }
          if ( *(_DWORD *)&Handle[64] )
          {
            v29 = 4LL * *(unsigned int *)&Handle[64];
            v30 = *(const void **)&Handle[72];
            if ( (unsigned __int64)&v4[v29] > MmUserProbeAddress || &v4[v29] <= v4 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v4, v30, v29);
          }
          if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline()
            && *(_QWORD *)&Handle[104] )
          {
            v31 = (char *)a1 + 104;
            if ( (unsigned __int64)a1 + 104 >= MmUserProbeAddress )
              v31 = (void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v31, &Handle[104], 8uLL);
            v32 = (char *)a1 + 112;
            if ( (unsigned __int64)a1 + 112 >= MmUserProbeAddress )
              v32 = (void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v32, &Handle[112], 8uLL);
            v33 = (char *)a1 + 120;
            if ( (unsigned __int64)a1 + 120 >= MmUserProbeAddress )
              v33 = (void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v33, &Handle[120], 8uLL);
          }
        }
      }
    }
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v43);
  }
  else
  {
    WdLogSingleEntry2(3LL, *(_QWORD *)Handle, v17);
    WdLogGlobalForLineNumber = 1213;
    v19 = (struct _KTHREAD ***)Object;
  }
  if ( v19 )
    ObfDereferenceObject(v19);
  if ( v5 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit, v35, v36);
  return (unsigned int)v18;
}
