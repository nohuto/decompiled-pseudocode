/*
 * XREFs of DxgkGetSetSwapChainMetadata @ 0x1402E41E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1402E441C (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

__int64 __fastcall DxgkGetSetSwapChainMetadata(ULONG64 a1, __int64 a2, __int64 a3)
{
  const void *v4; // rdx
  NTSTATUS v5; // eax
  int SetMetaDataInternal; // edi
  PVOID v7; // r14
  void *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+38h] [rbp-40h]
  char v14; // [rsp+40h] [rbp-38h]
  struct _D3DKMT_GETSETSWAPCHAINMETADATA Handle; // [rsp+48h] [rbp-30h] BYREF
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  v12 = -1;
  v13 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v14 = 1;
    v12 = 2121;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2121);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v12, 2121);
  memset(&Handle, 0, sizeof(Handle));
  v4 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&Handle, v4, 0x28uLL);
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  SetMetaDataInternal = v5;
  if ( v5 < 0 )
  {
    WdLogSingleEntry2(3LL, Handle.hNtSwapChain, v5);
    WdLogGlobalForLineNumber = 1496;
  }
  else
  {
    v7 = Object;
    SetMetaDataInternal = SwapChainGetSetMetaDataInternal(*(struct DXGSWAPCHAIN **)Object, &Handle, 0, 1);
    if ( SetMetaDataInternal >= 0 )
    {
      v8 = (void *)(a1 + 32);
      if ( a1 + 32 >= MmUserProbeAddress )
        v8 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v8, &Handle.DataCopied, 4uLL);
    }
    ObfDereferenceObject(v7);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
  if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v12);
  return (unsigned int)SetMetaDataInternal;
}
