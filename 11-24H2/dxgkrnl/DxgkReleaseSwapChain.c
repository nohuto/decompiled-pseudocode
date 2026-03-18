/*
 * XREFs of DxgkReleaseSwapChain @ 0x140378D00
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z @ 0x1403791CC (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z.c)
 */

__int64 __fastcall DxgkReleaseSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  char *v4; // r14
  void *v5; // rdi
  const void *v6; // rdx
  NTSTATUS v7; // eax
  int v8; // esi
  HANDLE hNtSwapChain; // r8
  PVOID v10; // r12
  void *v11; // rcx
  size_t v12; // r8
  PVOID pMetaData; // rdx
  void *v14; // rcx
  void *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 bProducer; // rax
  const wchar_t *v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  void *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  int HandleInformation; // [rsp+28h] [rbp-C0h]
  int v28; // [rsp+50h] [rbp-98h] BYREF
  __int64 v29; // [rsp+58h] [rbp-90h]
  char v30; // [rsp+60h] [rbp-88h]
  struct _D3DKMT_RELEASESWAPCHAIN Handle[3]; // [rsp+70h] [rbp-78h] BYREF
  PVOID Object; // [rsp+F8h] [rbp+10h] BYREF
  void *v33; // [rsp+100h] [rbp+18h]

  v28 = -1;
  v29 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2112;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2112);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 2112);
  memset(Handle, 0, 0x40uLL);
  v4 = 0LL;
  v5 = 0LL;
  v33 = 0LL;
  v6 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Handle, v6, 0x40uLL);
  if ( Handle[1].bProducer > 0x32u )
  {
    WdLogSingleEntry1(2LL, Handle[1].bProducer);
    WdLogGlobalForLineNumber = 1372;
    bProducer = Handle[1].bProducer;
    v20 = L"Caller specified 0x%I64x deferred list size, this is over the maximum";
    goto LABEL_32;
  }
  if ( !Handle[1].bProducer )
  {
LABEL_7:
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(Handle[0].hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
    v8 = v7;
    if ( v7 < 0 )
    {
      WdLogSingleEntry2(3LL, Handle[0].hNtSwapChain, v7);
      WdLogGlobalForLineNumber = 1408;
    }
    else
    {
      hNtSwapChain = Handle[1].hNtSwapChain;
      Handle[1].hNtSwapChain = 0LL;
      v10 = Object;
      v8 = SwapChainReleaseInternal(*(struct DXGSWAPCHAIN **)Object, Handle, hNtSwapChain, 1, 0, HandleInformation);
      if ( v8 >= 0 )
      {
        v11 = (void *)(a1 + 48);
        if ( a1 + 48 >= MmUserProbeAddress )
          v11 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(v11, &Handle[1].bProducer, 4uLL);
        if ( Handle[0].pMetaData )
        {
          v14 = (void *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v14 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v14, &Handle[0].pMetaData, 8uLL);
          v15 = (void *)(a1 + 24);
          if ( a1 + 24 >= MmUserProbeAddress )
            v15 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v15, &Handle[0].DeferredFreeListSize, 8uLL);
        }
        if ( Handle[1].bProducer )
        {
          v12 = 4LL * Handle[1].bProducer;
          pMetaData = Handle[1].pMetaData;
          if ( (unsigned __int64)&v4[v12] > MmUserProbeAddress || &v4[v12] <= v4 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v4, pMetaData, v12);
        }
      }
      ObfDereferenceObject(v10);
    }
    if ( v5 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v28);
    }
    return (unsigned int)v8;
  }
  if ( !Handle[1].pMetaData )
  {
    WdLogSingleEntry0(2LL);
    bProducer = 1380LL;
    WdLogGlobalForLineNumber = 1380;
    v20 = L"Caller specified non-zero free list size but failed to provide buffer";
LABEL_32:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v20, bProducer, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v28);
    return 3221225485LL;
  }
  v23 = 4LL * Handle[1].bProducer;
  if ( !is_mul_ok(Handle[1].bProducer, 4uLL) )
    v23 = -1LL;
  v24 = (void *)operator new[](v23, 0x4B677844u, 256LL);
  v5 = v24;
  v33 = v24;
  if ( v24 )
  {
    v4 = (char *)Handle[1].pMetaData;
    Handle[1].pMetaData = v24;
    goto LABEL_7;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 1387;
  DxgkLogInternalTriageEvent(
    0LL,
    262145LL,
    0xFFFFFFFFLL,
    L"Failed to allocate deferred list",
    1387LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, v26, v28);
  return 3221225495LL;
}
