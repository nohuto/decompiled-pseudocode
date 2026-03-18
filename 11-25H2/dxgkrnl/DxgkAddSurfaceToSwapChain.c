/*
 * XREFs of DxgkAddSurfaceToSwapChain @ 0x1401FA810
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
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z @ 0x1401F71E0 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x14038CBB0 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x14039DE6C (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 */

__int64 __fastcall DxgkAddSurfaceToSwapChain(struct DXGDEVICE *a1, __int64 a2, __int64 a3)
{
  const void *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  NTSTATUS v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGSWAPCHAIN **v12; // r14
  struct DXGDEVICE *v13; // rdi
  char v14; // r9
  int v15; // esi
  void *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  PVOID *Object; // [rsp+20h] [rbp-138h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-130h]
  int v25; // [rsp+50h] [rbp-108h] BYREF
  __int64 v26; // [rsp+58h] [rbp-100h]
  char v27; // [rsp+60h] [rbp-F8h]
  PVOID v28; // [rsp+68h] [rbp-F0h] BYREF
  HANDLE Handle[2]; // [rsp+70h] [rbp-E8h] BYREF
  __int128 Src; // [rsp+80h] [rbp-D8h] BYREF
  struct DXGDEVICE *v31[4]; // [rsp+90h] [rbp-C8h] BYREF
  _BYTE v32[128]; // [rsp+B0h] [rbp-A8h] BYREF

  v31[1] = a1;
  v25 = -1;
  v26 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 2200;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2200);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 2200);
  *(_OWORD *)Handle = 0LL;
  Src = 0LL;
  v4 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v4 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Handle, v4, 0x20uLL);
  if ( !LODWORD(Handle[1]) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 884;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"DxgkAddSurfaceToSwapChain is not allowed for consumer",
      884LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit, v6, v25);
    }
    return 3221225485LL;
  }
  v28 = 0LL;
  v8 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v28, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(3LL, Handle[0], v8);
    WdLogGlobalForLineNumber = 898;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v25);
    return v9;
  }
  v12 = (DXGSWAPCHAIN **)v28;
  v13 = *(struct DXGDEVICE **)v28;
  v31[2] = v13;
  v31[0] = 0LL;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE(
    (DXGSWAPCHAINLOCKWITHDEVICE *)v32,
    v13,
    LODWORD(Handle[1]) != 0,
    1);
  if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
    v14 = *((_DWORD *)v13 + 59) != 0;
  else
    v14 = 0;
  v15 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v32, v31, 1, v14);
  if ( v15 < 0 )
    goto LABEL_30;
  if ( *((_DWORD *)v13 + 58) )
  {
    v15 = DXGSWAPCHAIN::AddSurface(
            *v12,
            (unsigned __int64)v31[0],
            (int)Handle[1],
            (void *)Src,
            (unsigned int *)&Src + 2);
    if ( v15 >= 0 )
    {
      v16 = (char *)a1 + 24;
      if ( (unsigned __int64)a1 + 24 >= MmUserProbeAddress )
        v16 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v16, (char *)&Src + 8, 4uLL);
    }
LABEL_30:
    ObfDereferenceObject(v12);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000000LL) != 0 )
    {
      LODWORD(HandleInformation) = Handle[1];
      LODWORD(Object) = v15;
      McTemplateK0pqqpq_EtwWriteTransfer(
        v19,
        &EventIndirectSwapChainAddSurface,
        v20,
        v13,
        Object,
        HandleInformation,
        (_QWORD)Src,
        DWORD2(Src));
    }
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v32);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v25);
    return (unsigned int)v15;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 946;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"DxgkAddSurfaceToSwapChain is not allowed for sequential swapchains",
    946LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v32);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v25);
  return 3221225659LL;
}
