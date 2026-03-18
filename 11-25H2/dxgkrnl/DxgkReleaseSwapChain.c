/*
 * XREFs of DxgkReleaseSwapChain @ 0x14038C5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z @ 0x14038CA6C (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z.c)
 */

__int64 __fastcall DxgkReleaseSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  char *v4; // r14
  void *v5; // rdi
  const void *v6; // rdx
  __int64 v7; // r9
  NTSTATUS v8; // eax
  int v9; // esi
  HANDLE hNtSwapChain; // r8
  PVOID v11; // r12
  void *v12; // rcx
  size_t v13; // r8
  PVOID pMetaData; // rdx
  void *v15; // rcx
  void *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 bProducer; // rax
  const wchar_t *v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // rax
  void *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  int HandleInformation; // [rsp+28h] [rbp-C0h]
  int v29; // [rsp+50h] [rbp-98h] BYREF
  __int64 v30; // [rsp+58h] [rbp-90h]
  char v31; // [rsp+60h] [rbp-88h]
  struct _D3DKMT_RELEASESWAPCHAIN Handle[3]; // [rsp+70h] [rbp-78h] BYREF
  PVOID Object; // [rsp+F8h] [rbp+10h] BYREF
  void *v34; // [rsp+100h] [rbp+18h]

  v29 = -1;
  v30 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 2112;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2112);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v29, 2112);
  memset(Handle, 0, 0x40uLL);
  v4 = 0LL;
  v5 = 0LL;
  v34 = 0LL;
  v6 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Handle, v6, 0x40uLL);
  if ( Handle[1].bProducer > 0x32u )
  {
    WdLogSingleEntry1(2LL, Handle[1].bProducer);
    WdLogGlobalForLineNumber = 1362;
    bProducer = Handle[1].bProducer;
    v21 = L"Caller specified 0x%I64x deferred list size, this is over the maximum";
    goto LABEL_32;
  }
  if ( !Handle[1].bProducer )
  {
LABEL_7:
    Object = 0LL;
    v8 = ObReferenceObjectByHandle(Handle[0].hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
    v9 = v8;
    if ( v8 < 0 )
    {
      WdLogSingleEntry2(3LL, Handle[0].hNtSwapChain, v8);
      WdLogGlobalForLineNumber = 1398;
    }
    else
    {
      hNtSwapChain = Handle[1].hNtSwapChain;
      Handle[1].hNtSwapChain = 0LL;
      v11 = Object;
      v9 = SwapChainReleaseInternal(*(struct DXGSWAPCHAIN **)Object, Handle, hNtSwapChain, 1, 0, HandleInformation);
      if ( v9 >= 0 )
      {
        v12 = (void *)(a1 + 48);
        if ( a1 + 48 >= MmUserProbeAddress )
          v12 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(v12, &Handle[1].bProducer, 4uLL);
        if ( Handle[0].pMetaData )
        {
          v15 = (void *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v15 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v15, &Handle[0].pMetaData, 8uLL);
          v16 = (void *)(a1 + 24);
          if ( a1 + 24 >= MmUserProbeAddress )
            v16 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v16, &Handle[0].DeferredFreeListSize, 8uLL);
        }
        if ( Handle[1].bProducer )
        {
          v13 = 4LL * Handle[1].bProducer;
          pMetaData = Handle[1].pMetaData;
          if ( (unsigned __int64)&v4[v13] > MmUserProbeAddress || &v4[v13] <= v4 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v4, pMetaData, v13);
        }
      }
      ObfDereferenceObject(v11);
    }
    if ( v5 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v29);
    }
    return (unsigned int)v9;
  }
  if ( !Handle[1].pMetaData )
  {
    WdLogSingleEntry0(2LL);
    bProducer = 1370LL;
    WdLogGlobalForLineNumber = 1370;
    v21 = L"Caller specified non-zero free list size but failed to provide buffer";
LABEL_32:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v21, bProducer, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v29);
    return 3221225485LL;
  }
  v24 = 4LL * Handle[1].bProducer;
  if ( !is_mul_ok(Handle[1].bProducer, 4uLL) )
    v24 = -1LL;
  v25 = (void *)operator new[](v24, 0x4B677844u, 256LL, v7);
  v5 = v25;
  v34 = v25;
  if ( v25 )
  {
    v4 = (char *)Handle[1].pMetaData;
    Handle[1].pMetaData = v25;
    goto LABEL_7;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 1377;
  DxgkLogInternalTriageEvent(0LL, 262145, 0xFFFFFFFFLL, L"Failed to allocate deferred list", 1377LL, 0LL, 0LL, 0LL, 0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v29);
  return 3221225495LL;
}
