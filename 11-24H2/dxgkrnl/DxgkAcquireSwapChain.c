/*
 * XREFs of DxgkAcquireSwapChain @ 0x1404241F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140079400 (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z @ 0x1401FD2D8 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z.c)
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z @ 0x1401FD758 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x140379310 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x140394554 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 */

__int64 __fastcall DxgkAcquireSwapChain(struct DXGDEVICE *a1, __int64 a2, __int64 a3)
{
  char *v4; // r12
  void *v5; // rsi
  const void *v6; // rdx
  __int64 v7; // rax
  const wchar_t *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  NTSTATUS v16; // eax
  int v17; // edi
  DXGSWAPCHAIN **v18; // r14
  struct DXGSWAPCHAIN *v19; // r13
  char v20; // r9
  int v21; // eax
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  void *v25; // rcx
  void *v26; // rcx
  void *v27; // rcx
  size_t v28; // r8
  const void *v29; // rdx
  void *v30; // rcx
  void *v31; // rcx
  void *v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // [rsp+50h] [rbp-178h] BYREF
  __int64 v36; // [rsp+58h] [rbp-170h]
  char v37; // [rsp+60h] [rbp-168h]
  PVOID Object; // [rsp+68h] [rbp-160h] BYREF
  __int64 v39; // [rsp+70h] [rbp-158h]
  struct DXGDEVICE *v40[3]; // [rsp+78h] [rbp-150h] BYREF
  _BYTE Handle[128]; // [rsp+90h] [rbp-138h] BYREF
  _BYTE v42[128]; // [rsp+110h] [rbp-B8h] BYREF

  v40[1] = a1;
  v35 = -1;
  v36 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v37 = 1;
    v35 = 2111;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2111);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v35, 2111);
  memset(Handle, 0, sizeof(Handle));
  v4 = 0LL;
  v5 = 0LL;
  v39 = 0LL;
  v6 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v6 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Handle, v6, 0x80uLL);
  if ( *(_DWORD *)&Handle[8] && *(_DWORD *)&Handle[12] != *(_DWORD *)&Handle[24] )
  {
    WdLogSingleEntry0(2LL);
    v7 = 1181LL;
    v8 = L"Inconsistent bProducer value between acquire and release";
LABEL_15:
    WdLogGlobalForLineNumber = v7;
    goto LABEL_16;
  }
  if ( *(_DWORD *)&Handle[64] > 0x32u )
  {
    WdLogSingleEntry1(2LL, *(unsigned int *)&Handle[64]);
    WdLogGlobalForLineNumber = 1188;
    v7 = *(unsigned int *)&Handle[64];
    v8 = L"Caller specified 0x%I64x deferred list size, this is over the maximum";
LABEL_16:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v8, v7, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( v37 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v35);
    }
    return 3221225485LL;
  }
  if ( *(_DWORD *)&Handle[64] )
  {
    if ( !*(_QWORD *)&Handle[72] )
    {
      WdLogSingleEntry0(2LL);
      v7 = 1196LL;
      v8 = L"Caller specified non-zero free list size but failed to provide buffer";
      goto LABEL_15;
    }
    v12 = 4LL * *(unsigned int *)&Handle[64];
    if ( !is_mul_ok(*(unsigned int *)&Handle[64], 4uLL) )
      v12 = -1LL;
    v13 = operator new[](v12, 0x4B677844u, 256LL);
    v5 = (void *)v13;
    v39 = v13;
    if ( !v13 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1203;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to allocate deferred list",
        1203LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
      if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v35);
      return 3221225495LL;
    }
    v4 = *(char **)&Handle[72];
    *(_QWORD *)&Handle[72] = v13;
  }
  Object = 0LL;
  v16 = ObReferenceObjectByHandle(*(HANDLE *)Handle, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v17 = v16;
  if ( v16 >= 0 )
  {
    v18 = (DXGSWAPCHAIN **)Object;
    v19 = *(struct DXGSWAPCHAIN **)Object;
    v40[0] = 0LL;
    DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE(
      (DXGSWAPCHAINLOCKWITHDEVICE *)v42,
      v19,
      *(_DWORD *)&Handle[12] != 0,
      1);
    if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
      v20 = *((_DWORD *)v19 + 59) != 0;
    else
      v20 = 0;
    v17 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v42, v40, 1, v20);
    if ( v17 >= 0 )
    {
      if ( *((_DWORD *)v19 + 58) && *(_DWORD *)&Handle[12] )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1319;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"DxgkAcquireSwapChain is not allowed for non-sequential swapchain producer",
          1319LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v17 = -1073741637;
      }
      else
      {
        v21 = DXGSWAPCHAIN::AcquireBuffer(*v18, (struct _D3DKMT_ACQUIRESWAPCHAIN *)Handle, 0LL, 1);
        v17 = v21;
        if ( v21 >= 0 && v21 != 259 )
        {
          v22 = (char *)a1 + 80;
          if ( (unsigned __int64)a1 + 80 >= MmUserProbeAddress )
            v22 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v22, &Handle[80], 4uLL);
          v23 = (char *)a1 + 88;
          if ( (unsigned __int64)a1 + 88 >= MmUserProbeAddress )
            v23 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v23, &Handle[88], 8uLL);
          v24 = (char *)a1 + 96;
          if ( (unsigned __int64)a1 + 96 >= MmUserProbeAddress )
            v24 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v24, &Handle[96], 4uLL);
          v25 = (char *)a1 + 64;
          if ( (unsigned __int64)a1 + 64 >= MmUserProbeAddress )
            v25 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v25, &Handle[64], 4uLL);
          if ( *(_QWORD *)&Handle[32] )
          {
            v26 = (char *)a1 + 32;
            if ( (unsigned __int64)a1 + 32 >= MmUserProbeAddress )
              v26 = (void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v26, &Handle[32], 8uLL);
            v27 = (char *)a1 + 40;
            if ( (unsigned __int64)a1 + 40 >= MmUserProbeAddress )
              v27 = (void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v27, &Handle[40], 8uLL);
          }
          if ( *(_DWORD *)&Handle[64] )
          {
            v28 = 4LL * *(unsigned int *)&Handle[64];
            v29 = *(const void **)&Handle[72];
            if ( (unsigned __int64)&v4[v28] > MmUserProbeAddress || &v4[v28] <= v4 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v4, v29, v28);
          }
          if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline()
            && *(_QWORD *)&Handle[104] )
          {
            v30 = (char *)a1 + 104;
            if ( (unsigned __int64)a1 + 104 >= MmUserProbeAddress )
              v30 = (void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v30, &Handle[104], 8uLL);
            v31 = (char *)a1 + 112;
            if ( (unsigned __int64)a1 + 112 >= MmUserProbeAddress )
              v31 = (void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v31, &Handle[112], 8uLL);
            v32 = (char *)a1 + 120;
            if ( (unsigned __int64)a1 + 120 >= MmUserProbeAddress )
              v32 = (void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v32, &Handle[120], 8uLL);
          }
        }
      }
    }
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v42);
  }
  else
  {
    WdLogSingleEntry2(3LL, *(_QWORD *)Handle, v16);
    WdLogGlobalForLineNumber = 1223;
    v18 = (DXGSWAPCHAIN **)Object;
  }
  if ( v18 )
    ObfDereferenceObject(v18);
  if ( v5 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventProfilerExit, v34, v35);
  return (unsigned int)v17;
}
