/*
 * XREFs of DxgkRemoveSurfaceFromSwapChain @ 0x1401FB7F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140078ECC (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pqqpq_EtwWriteTransfer @ 0x14007912C (McTemplateK0pqqpq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z @ 0x1401F6988 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z.c)
 *     ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x1401F9F7C (-RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x14038CBB0 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x14039DE6C (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 */

__int64 __fastcall DxgkRemoveSurfaceFromSwapChain(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // r8
  NTSTATUS v7; // eax
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _KTHREAD ***v11; // r14
  struct DXGSWAPCHAIN *v12; // rsi
  char v13; // r9
  __int64 v14; // r8
  PVOID *Object; // [rsp+20h] [rbp-118h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-110h]
  int v17; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-E0h]
  char v19; // [rsp+60h] [rbp-D8h]
  PVOID v20; // [rsp+68h] [rbp-D0h] BYREF
  struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN Handle; // [rsp+70h] [rbp-C8h] BYREF
  struct DXGDEVICE *v22; // [rsp+90h] [rbp-A8h] BYREF
  _BYTE v23[128]; // [rsp+A0h] [rbp-98h] BYREF

  v3 = (const void *)a1;
  v17 = -1;
  v18 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2200;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2200);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2200);
  memset(&Handle, 0, sizeof(Handle));
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&Handle, v3, 0x20uLL);
  if ( Handle.bProducer )
  {
    v20 = 0LL;
    v7 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v20, 0LL);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v11 = (struct _KTHREAD ***)v20;
      v12 = *(struct DXGSWAPCHAIN **)v20;
      v22 = 0LL;
      DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v23, v12, 1, 1);
      if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
        v13 = *((_DWORD *)v12 + 59) != 0;
      else
        v13 = 0;
      v8 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v23, &v22, 1, v13);
      if ( v8 >= 0 )
        v8 = DXGSWAPCHAIN::RemoveSurface(*v11, &Handle);
      ObfDereferenceObject(v11);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000000LL) != 0 )
      {
        LODWORD(HandleInformation) = Handle.bProducer;
        LODWORD(Object) = v8;
        McTemplateK0pqqpq_EtwWriteTransfer(
          Handle.bProducer,
          &EventIndirectSwapChainRemoveSurface,
          v14,
          v12,
          Object,
          HandleInformation,
          Handle.hNtSurfaceHandle,
          Handle.BufferIdx);
      }
      DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v23);
    }
    else
    {
      WdLogSingleEntry2(3LL, Handle.hNtSwapChain, v7);
      WdLogGlobalForLineNumber = 1004;
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v17);
    return (unsigned int)v8;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 990;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"RemoveSurface is not allowed for consumer",
      990LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerExit, v5, v17);
    }
    return 3221225485LL;
  }
}
