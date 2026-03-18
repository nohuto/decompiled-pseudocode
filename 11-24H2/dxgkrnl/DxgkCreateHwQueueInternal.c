/*
 * XREFs of DxgkCreateHwQueueInternal @ 0x1402BAF98
 * Callers:
 *     DxgkCreateHwQueue @ 0x1402BB790 (DxgkCreateHwQueue.c)
 *     ?VmBusCreateHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402BC230 (-VmBusCreateHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14000E830 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140023750 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z @ 0x1402BA484 (-AllocateElements@-$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1402BB7A8 (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 */

__int64 __fastcall DxgkCreateHwQueueInternal(__int64 a1, char a2, __int64 a3)
{
  struct _D3DKMT_CREATEHWQUEUE *v4; // r12
  PVOID v5; // r15
  const void *v6; // rdx
  struct _D3DKMT_CREATEHWQUEUE *v7; // rsi
  __int64 pPrivateDriverData; // rcx
  unsigned int *p_PrivateDriverDataSize; // rax
  __int64 Elements; // rax
  size_t PrivateDriverDataSize; // r8
  char *v12; // rdx
  PVOID v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  struct _KTHREAD **Current; // r8
  DXGCONTEXT *v21; // r13
  struct DXGDEVICE *v22; // rbx
  __int64 v23; // r9
  int v24; // ebx
  struct DXGHWQUEUE *v25; // rdx
  __int64 v26; // rax
  size_t v27; // r8
  void *v28; // rcx
  ULONG64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 CurrentProcess; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  int v38; // [rsp+58h] [rbp-190h] BYREF
  __int64 v39; // [rsp+60h] [rbp-188h]
  char v40; // [rsp+68h] [rbp-180h]
  struct DXGCONTEXT *v41; // [rsp+70h] [rbp-178h] BYREF
  struct _D3DKMT_CREATEHWQUEUE *v42; // [rsp+78h] [rbp-170h]
  PVOID v43; // [rsp+80h] [rbp-168h]
  struct DXGHWQUEUE *v44; // [rsp+88h] [rbp-160h] BYREF
  _BYTE v45[16]; // [rsp+90h] [rbp-158h] BYREF
  _BYTE v46[16]; // [rsp+A0h] [rbp-148h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-138h]
  char *v48; // [rsp+B8h] [rbp-130h]
  PVOID v49; // [rsp+C0h] [rbp-128h]
  _OWORD Src[3]; // [rsp+C8h] [rbp-120h] BYREF
  PVOID P; // [rsp+F8h] [rbp-F0h] BYREF
  _BYTE v52[16]; // [rsp+100h] [rbp-E8h] BYREF
  int v53; // [rsp+110h] [rbp-D8h]
  _BYTE v54[160]; // [rsp+120h] [rbp-C8h] BYREF

  v4 = (struct _D3DKMT_CREATEHWQUEUE *)a1;
  v38 = -1;
  v39 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v40 = 1;
    v38 = 2153;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2153);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v38, 2153);
  memset(Src, 0, sizeof(Src));
  v42 = 0LL;
  P = 0LL;
  v53 = 0;
  v5 = 0LL;
  v43 = 0LL;
  if ( a2 )
  {
    v6 = v4;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v6 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(Src, v6, 0x30uLL);
    v7 = (struct _D3DKMT_CREATEHWQUEUE *)Src;
    v42 = (struct _D3DKMT_CREATEHWQUEUE *)Src;
  }
  else
  {
    v7 = v4;
    v42 = v4;
  }
  pPrivateDriverData = (__int64)v7->pPrivateDriverData;
  p_PrivateDriverDataSize = &v7->PrivateDriverDataSize;
  if ( !pPrivateDriverData )
  {
    if ( !*p_PrivateDriverDataSize )
      goto LABEL_9;
LABEL_16:
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 949;
    if ( P != v52 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v53 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v38);
    return 3221225485LL;
  }
  if ( !*p_PrivateDriverDataSize )
    goto LABEL_16;
LABEL_9:
  if ( !*p_PrivateDriverDataSize )
    goto LABEL_34;
  if ( !a2 )
  {
    v5 = v7->pPrivateDriverData;
    v43 = v5;
    goto LABEL_34;
  }
  Elements = PagedPoolZeroedArray<unsigned char,16>::AllocateElements((__int64 *)&P, *p_PrivateDriverDataSize);
  PrivateDriverDataSize = v7->PrivateDriverDataSize;
  if ( Elements )
  {
    v47 = v7->PrivateDriverDataSize;
    v12 = (char *)v7->pPrivateDriverData;
    v48 = v12;
    v13 = P;
    v49 = P;
    if ( &v12[PrivateDriverDataSize] < v12 || (unsigned __int64)&v12[PrivateDriverDataSize] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v13, v12, PrivateDriverDataSize);
    v5 = P;
    v43 = P;
LABEL_34:
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(pPrivateDriverData);
    if ( !Current )
    {
      CurrentProcess = PsGetCurrentProcess(v19);
      WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
      WdLogGlobalForLineNumber = 993;
      v36 = PsGetCurrentProcess(v35);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"unexpected process 0x%I64x, returning 0x%I64x",
        v36,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_60;
    }
    if ( (v7->Flags.Value & 8) != 0 && !g_OSTestSigningEnabled )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1000;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"NoKmdAccess can be used only with testsigning",
        1000LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_60:
      if ( P != v52 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v53 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
      if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventProfilerExit, v33, v38);
      return 3221225485LL;
    }
    v41 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v45, v7->hHwContext, Current, &v41, 0, 1);
    v21 = v41;
    if ( v41 )
    {
      if ( (*((_DWORD *)v41 + 98) & 0x10) != 0 )
      {
        v22 = (struct DXGDEVICE *)*((_QWORD *)v41 + 2);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v46, v22);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v54, (__int64)v22, 0, v23, 0);
        v24 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v54, 0LL);
        if ( v24 >= 0 )
        {
          v44 = 0LL;
          v24 = DXGCONTEXT::CreateHwQueue(v21, v7, v5, &v44);
          if ( v24 >= 0 )
          {
            v25 = v44;
            if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v44 + 2) + 16LL) + 16LL) + 16LL) + 209LL)
              && (v7->Flags.Value & 0x10) == 0 )
            {
              v7->hHwQueueProgressFence = *(_DWORD *)(*((_QWORD *)v44 + 6) + 40LL);
              v7->HwQueueProgressFenceCPUVirtualAddress = *(void **)(*((_QWORD *)v25 + 6) + 56LL);
              v7->HwQueueProgressFenceGPUVirtualAddress = *(_QWORD *)(*((_QWORD *)v25 + 6) + 48LL);
            }
            v7->hHwQueue = *((_DWORD *)v25 + 6);
            if ( a2 )
            {
              if ( (unsigned __int64)v4 >= MmUserProbeAddress )
                v4 = (struct _D3DKMT_CREATEHWQUEUE *)MmUserProbeAddress;
              RtlCopyVolatileMemory(v4, v7, 0x30uLL);
              v26 = v7->PrivateDriverDataSize;
              if ( (_DWORD)v26 )
              {
                v27 = (unsigned int)v26;
                v28 = v7->pPrivateDriverData;
                v29 = (ULONG64)v28 + v26;
                if ( v29 <= (unsigned __int64)v28 || v29 > MmUserProbeAddress )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v28, v5, v27);
              }
            }
          }
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v54);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v46);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v45);
        if ( P != v52 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v53 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
        if ( v40 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit, v31, v38);
        }
        return (unsigned int)v24;
      }
      WdLogSingleEntry1(2LL, v7->hHwContext);
      WdLogGlobalForLineNumber = 1018;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Cannot create HW queue on context (0x%x) that doesn't support hardware queues.",
        v7->hHwContext,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry2(2LL, v7->hHwContext, -1073741811LL);
      WdLogGlobalForLineNumber = 1010;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid hHwContext (0x%I64x) specified, returning 0x%I64x",
        v7->hHwContext,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v45);
    goto LABEL_60;
  }
  WdLogSingleEntry3(3LL, v7->hHwContext, PrivateDriverDataSize, -1073741801LL);
  WdLogGlobalForLineNumber = 963;
  if ( P != v52 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v53 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v38);
  return 3221225495LL;
}
