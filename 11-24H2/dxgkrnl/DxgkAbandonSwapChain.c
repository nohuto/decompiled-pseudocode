/*
 * XREFs of DxgkAbandonSwapChain @ 0x140200CF0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z @ 0x14018AA9C (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z.c)
 */

__int64 __fastcall DxgkAbandonSwapChain(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // rbx
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  PVOID v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]
  char v15; // [rsp+40h] [rbp-18h]
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  v3 = (const void *)a1;
  v13 = -1;
  v14 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v15 = 1;
    v13 = 2113;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2113);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v13, 2113);
  Handle = 0LL;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&Handle, v3, 8uLL);
  Object = 0LL;
  v4 = ObReferenceObjectByHandle(Handle, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v9 = Object;
    v10 = SwapChainAbandonInternal(*(struct DXGSWAPCHAIN **)Object);
    ObfDereferenceObject(v9);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
    if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v13);
    return v10;
  }
  else
  {
    WdLogSingleEntry2(3LL, Handle, v4);
    WdLogGlobalForLineNumber = 1663;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
    if ( v15 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit, v7, v13);
    }
    return v5;
  }
}
