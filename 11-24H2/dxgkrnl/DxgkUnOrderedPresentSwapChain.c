/*
 * XREFs of DxgkUnOrderedPresentSwapChain @ 0x140202220
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140079400 (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pqqpqq_EtwWriteTransfer @ 0x14007975C (McTemplateK0pqqpqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z @ 0x1401FD2D8 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z.c)
 *     ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x1402008D4 (-UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x140379310 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x140394554 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 */

__int64 __fastcall DxgkUnOrderedPresentSwapChain(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // r8
  NTSTATUS v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _KTHREAD ***v11; // r14
  struct DXGSWAPCHAIN *v12; // rdi
  char v13; // r9
  int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  PVOID *Object; // [rsp+20h] [rbp-128h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-120h]
  int v24; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-F0h]
  char v26; // [rsp+60h] [rbp-E8h]
  PVOID v27; // [rsp+68h] [rbp-E0h] BYREF
  struct DXGDEVICE *v28; // [rsp+70h] [rbp-D8h] BYREF
  HANDLE Handle[2]; // [rsp+78h] [rbp-D0h] BYREF
  __int128 v30; // [rsp+88h] [rbp-C0h]
  __int128 v31; // [rsp+98h] [rbp-B0h]
  __int64 v32; // [rsp+A8h] [rbp-A0h]
  _BYTE v33[128]; // [rsp+B0h] [rbp-98h] BYREF

  v3 = (const void *)a1;
  v24 = -1;
  v25 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 2202;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2202);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 2202);
  *(_OWORD *)Handle = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Handle, v3, 0x38uLL);
  if ( !LODWORD(Handle[1]) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1084;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"UnOrderedPresent is not allowed for consumer",
      1084LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerExit, v5, v24);
    }
    return 3221225485LL;
  }
  v27 = 0LL;
  v7 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v27, 0LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry2(3LL, Handle[0], v7);
    WdLogGlobalForLineNumber = 1098;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v24);
    return v8;
  }
  v11 = (struct _KTHREAD ***)v27;
  v12 = *(struct DXGSWAPCHAIN **)v27;
  v28 = 0LL;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v33, v12, 1, 1);
  if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
    v13 = *((_DWORD *)v12 + 59) != 0;
  else
    v13 = 0;
  v14 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v33, &v28, 1, v13);
  if ( v14 < 0 )
    goto LABEL_23;
  if ( *((_DWORD *)v12 + 58) )
  {
    v14 = DXGSWAPCHAIN::UnOrderedPresent(*v11, (struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *)Handle);
LABEL_23:
    ObfDereferenceObject(v11);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000000LL) != 0 )
    {
      LODWORD(HandleInformation) = Handle[1];
      LODWORD(Object) = v14;
      McTemplateK0pqqpqq_EtwWriteTransfer(
        v16,
        v15,
        v17,
        v12,
        Object,
        HandleInformation,
        (_QWORD)v31,
        DWORD2(v31),
        HIDWORD(v31));
    }
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v33);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v24);
    return (unsigned int)v14;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 1132;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"DxgkUnOrderedPresentSwapChain is not allowed for sequential swapchains",
    1132LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v33);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v24);
  return 3221225659LL;
}
