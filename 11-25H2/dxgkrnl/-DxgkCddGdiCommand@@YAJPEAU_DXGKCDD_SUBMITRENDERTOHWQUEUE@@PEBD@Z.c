/*
 * XREFs of ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z @ 0x14035A2D0
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140218FB0 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1400138E0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14001DE10 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x14001E170 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140022F40 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1400262A0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400314B0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140038EBC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x14003BE0C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$03@@QEAAPEAPEAVDXGHWQUEUE@@I@Z @ 0x140301990 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$03@@QEAAPEAPEAVDXGHWQUEUE@@I@Z.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14032DC44 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14034562C (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x140346894 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x140346914 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x140360E8C (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x140394F30 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_RENDER@@@Z @ 0x140409C60 (-VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3.c)
 */

__int64 __fastcall DxgkCddGdiCommand(struct _DXGKCDD_SUBMITRENDERTOHWQUEUE *a1, char *a2, __int64 a3)
{
  struct _D3DKMT_RENDER *v4; // r15
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 CurrentProcess; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  bool v14; // zf
  unsigned int v15; // edi
  struct _KTHREAD **v16; // rbx
  unsigned int v17; // eax
  __int64 v18; // rdx
  int v19; // ecx
  __int64 v20; // rbx
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  unsigned int hDevice; // edx
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 *v26; // rdi
  unsigned int v27; // ebx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rax
  struct DXGDEVICE *v32; // rdx
  int v33; // eax
  unsigned int v34; // ebx
  __int64 v35; // rcx
  __int64 v36; // r8
  bool v37; // zf
  DXGADAPTER *v39; // rsi
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned int NumDifferentPhysicalAdapters; // eax
  unsigned int BroadcastContextCount; // eax
  __int64 v44; // rsi
  _BYTE *Pool2; // rax
  __int64 v46; // r9
  int v47; // ebx
  _QWORD *v48; // r11
  __int64 v49; // rax
  __int64 *v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r11
  _QWORD *v53; // rcx
  const wchar_t *v54; // r9
  __int64 v55; // r9
  int v56; // eax
  bool IsDxgmms2; // al
  __int64 v58; // r8
  __int64 v59; // r9
  bool v60; // r12
  struct _D3DDDI_ALLOCATIONLIST *pNewAllocationList; // rsi
  struct DXGALLOCATION **v62; // rbx
  unsigned int AllocationCount; // edx
  struct DXGALLOCATION **Elements; // rax
  int v65; // esi
  int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rcx
  __int64 v70; // r8
  char v71; // [rsp+50h] [rbp-B0h]
  int v72; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v73; // [rsp+60h] [rbp-A0h]
  char v74; // [rsp+68h] [rbp-98h]
  __int64 v75; // [rsp+70h] [rbp-90h] BYREF
  char v76; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h]
  _BYTE v78[32]; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v79; // [rsp+A8h] [rbp-58h]
  _BYTE v80[16]; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v81; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v82[32]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v83; // [rsp+E8h] [rbp-18h]
  _BYTE v84[16]; // [rsp+F0h] [rbp-10h] BYREF
  char *v85; // [rsp+100h] [rbp+0h] BYREF
  struct DXGCONTEXT *v86; // [rsp+108h] [rbp+8h] BYREF
  __int64 v87; // [rsp+110h] [rbp+10h]
  __int64 v88; // [rsp+118h] [rbp+18h]
  _QWORD *v89; // [rsp+120h] [rbp+20h]
  _BYTE v90[24]; // [rsp+128h] [rbp+28h] BYREF
  char v91[8]; // [rsp+140h] [rbp+40h] BYREF
  char *v92; // [rsp+148h] [rbp+48h]
  int v93; // [rsp+150h] [rbp+50h]
  _QWORD v94[7]; // [rsp+158h] [rbp+58h] BYREF
  PVOID v95; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v96[256]; // [rsp+198h] [rbp+98h] BYREF
  int v97; // [rsp+298h] [rbp+198h]
  _BYTE v98[160]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v99[160]; // [rsp+340h] [rbp+240h] BYREF

  v72 = -1;
  v85 = a2;
  v73 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v74 = 1;
    v72 = 3020;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 3020);
  }
  else
  {
    v74 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v72, 3020);
  v4 = (struct _D3DKMT_RENDER *)((char *)a1 + 8);
  Current = DXGPROCESS::GetCurrent(v5);
  v8 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v7);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 2818;
    v11 = PsGetCurrentProcess(v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v11,
      0LL,
      0LL,
      0LL);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v72);
    v14 = v74 == 0;
LABEL_89:
    if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v72);
    return 3221225485LL;
  }
  v15 = *(_DWORD *)a1;
  v16 = (struct _KTHREAD **)((char *)Current + 248);
  v92 = (char *)Current + 248;
  v93 = 0;
  if ( Current != (struct DXGPROCESS *)-248LL )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( v16[1] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1575;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1575LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v91);
  v17 = (v15 >> 6) & 0xFFFFFF;
  if ( v17 < *(_DWORD *)(v8 + 296) )
  {
    v18 = *(_QWORD *)(v8 + 280);
    if ( ((v15 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0x60)
      && (*(_DWORD *)(v18 + 16LL * v17 + 8) & 0x2000) == 0 )
    {
      v19 = *(_DWORD *)(v18 + 16LL * v17 + 8) & 0x1F;
      if ( v19 )
      {
        if ( v19 == 15 )
        {
          v20 = *(_QWORD *)(v18 + 16LL * v17);
          goto LABEL_19;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v20 = 0LL;
LABEL_19:
  v75 = v20;
  v76 = 0;
  if ( v20 )
  {
    _m_prefetchw((const void *)(v20 + 104));
    v21 = *(_QWORD *)(v20 + 104);
    do
    {
      if ( !v21 )
      {
        v20 = 0LL;
        v75 = 0LL;
        goto LABEL_24;
      }
      v22 = v21;
      v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 104), v21 + 1, v21);
    }
    while ( v22 != v21 );
    v20 = v75;
  }
LABEL_24:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v91);
  hDevice = v4->hDevice;
  v86 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v80, hDevice, (struct DXGPROCESS *)v8, &v86, 0, 1);
  v26 = (__int64 *)v86;
  if ( !v86 )
  {
    v27 = v4->hDevice;
    v28 = PsGetCurrentProcess(v24);
    WdLogSingleEntry3(2LL, -1073741811LL, v28, v27);
    v29 = v4->hDevice;
    WdLogGlobalForLineNumber = 2839;
    v31 = PsGetCurrentProcess(v30);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid context handle 0x%I64x 0x%I64x 0x%I64x",
      -1073741811LL,
      v31,
      v29,
      0LL,
      0LL);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v80);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v75);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v72);
    v14 = v74 == 0;
    goto LABEL_89;
  }
  v32 = (struct DXGDEVICE *)*((_QWORD *)v86 + 2);
  if ( *((_BYTE *)v86 + 434) )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v99, (__int64)v32, 0, v25, 0);
    v33 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v99, 0LL);
    v34 = v33;
    if ( v33 >= 0 )
    {
      v34 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCddGdiCommand(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(v26[2] + 16) + 16LL) + 4664LL),
              (struct DXGPROCESS *)v8,
              (struct DXGCONTEXT *)v26,
              v4);
    }
    else
    {
      WdLogSingleEntry3(4LL, v33, v26, v8);
      WdLogGlobalForLineNumber = 2850;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v99);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v80);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v75);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v72);
    v37 = v74 == 0;
LABEL_31:
    if ( !v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventProfilerExit, v36, v72);
    return v34;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v84, v32);
  v87 = v26[2];
  v39 = *(DXGADAPTER **)(*(_QWORD *)(v87 + 16) + 16LL);
  if ( !DXGADAPTER::ReplicateGdiContent(v39)
    || (*(_DWORD *)&v4->Flags & 0x40) != 0
    || (NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v39),
        NumDifferentPhysicalAdapters <= 1) )
  {
    v71 = 0;
  }
  else
  {
    v71 = 1;
    v4->BroadcastContextCount = NumDifferentPhysicalAdapters - 1;
  }
  BroadcastContextCount = v4->BroadcastContextCount;
  v44 = BroadcastContextCount + 1;
  if ( BroadcastContextCount > 0x40 )
  {
    WdLogSingleEntry2(3LL, v26, -1073741811LL);
    WdLogGlobalForLineNumber = 2887;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v84);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v80);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v75);
    goto LABEL_7;
  }
  P = 0LL;
  v79 = 0;
  if ( (unsigned int)v44 <= 4 )
  {
    Pool2 = v78;
    P = v78;
    if ( (_DWORD)v44 )
    {
      memset(v78, 0, 8LL * (unsigned int)v44);
      Pool2 = P;
    }
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v44 < 8 )
    {
LABEL_49:
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2894;
      if ( P != v78 && P )
        ExFreePoolWithTag(P, 0);
LABEL_144:
      P = 0LL;
      v79 = 0;
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v84);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v80);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v75);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v72);
      if ( v74 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v69, (__int64)&EventProfilerExit, v70, v72);
      return 3221225495LL;
    }
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8 * v44, 1265072196LL, v41);
    P = Pool2;
  }
  v79 = v44;
  if ( !Pool2 )
    goto LABEL_49;
  v81 = 0LL;
  v83 = 0;
  PagedPoolZeroedArray<DXGHWQUEUE *,4>::AllocateElements((__int64 *)&v81, v44, v40, v41);
  if ( !v81 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2901;
LABEL_55:
    if ( v81 != v82 && v81 )
      ExFreePoolWithTag(v81, 0);
    v83 = 0;
    v81 = 0LL;
    if ( P != v78 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_144;
  }
  *(_QWORD *)P = v26;
  if ( v20 )
    *(_QWORD *)v81 = v20;
  if ( v71 )
  {
    v47 = 0;
    v48 = P;
    v46 = 0LL;
    v49 = v87 + 496;
    v89 = P;
    v88 = v87 + 496;
    v50 = *(__int64 **)(v87 + 496);
    while ( v50 != (__int64 *)v49 && v50 )
    {
      v51 = *((unsigned int *)v50 + 97);
      if ( (unsigned int)v51 >= (unsigned int)v44 )
      {
        WdLogSingleEntry1(2LL, v26);
        v54 = L"0x%I64x fails as context physical adapter index is invalid";
        WdLogGlobalForLineNumber = 2933;
        goto LABEL_82;
      }
      if ( ((1 << v51) & v47) != 0 )
      {
        WdLogSingleEntry1(2LL, v26);
        v54 = L"0x%I64x fails as context for the same physical adapter is specified";
        WdLogGlobalForLineNumber = 2940;
        goto LABEL_82;
      }
      v47 |= 1 << v51;
      v48[v51] = v50;
      if ( (v50[49] & 0x10) != 0 )
      {
        v52 = 0LL;
        if ( (__int64 *)v50[50] != v50 + 50 )
          v52 = v50[50];
        if ( (unsigned int)v51 >= v83 )
          v53 = v81;
        else
          v53 = (char *)v81 + 8 * v51;
        *v53 = v52;
        v48 = v89;
      }
      v50 = (__int64 *)*v50;
      v46 = (unsigned int)(v46 + 1);
      v49 = v88;
    }
    if ( (_DWORD)v46 == (_DWORD)v44 )
      goto LABEL_93;
    WdLogSingleEntry1(2LL, v26);
    v54 = L"0x%I64x fails as to few contexts are in the device";
    WdLogGlobalForLineNumber = 2963;
LABEL_82:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v54, (__int64)v26, 0LL, 0LL, 0LL, 0LL);
    if ( v81 != v82 && v81 )
      ExFreePoolWithTag(v81, 0);
    v81 = 0LL;
    v83 = 0;
    if ( P != v78 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v79 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v84);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v80);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v75);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v72);
    v14 = v74 == 0;
    goto LABEL_89;
  }
LABEL_93:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v94,
    P,
    v79,
    v46,
    1);
  if ( !v94[0] )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2974;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v94);
    if ( v81 != v82 && v81 )
      ExFreePoolWithTag(v81, 0);
    v81 = 0LL;
    v83 = 0;
    if ( P != v78 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_144;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v90,
    *(struct DXGADAPTER **)(*(_QWORD *)(v87 + 16) + 16LL),
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v98, v26[2], 0, v55, 0);
  v56 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v98, v85);
  v34 = v56;
  if ( v56 < 0 )
  {
    WdLogSingleEntry3(4LL, v56, v26, v8);
    WdLogGlobalForLineNumber = 2987;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v98);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v90);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v94);
    if ( v81 != v82 && v81 )
      ExFreePoolWithTag(v81, 0);
    v81 = 0LL;
    v83 = 0;
    if ( P != v78 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v79 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v84);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v80);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v75);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v72);
    v37 = v74 == 0;
    goto LABEL_31;
  }
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v26[2] + 16) + 16LL));
  v60 = IsDxgmms2;
  if ( (*(_DWORD *)&v4->Flags & 0x20) != 0 )
    pNewAllocationList = v4->pNewAllocationList;
  else
    pNewAllocationList = (struct _D3DDDI_ALLOCATIONLIST *)v26[11];
  v95 = 0LL;
  v62 = 0LL;
  v97 = 0;
  AllocationCount = v4->AllocationCount;
  LODWORD(v85) = AllocationCount;
  if ( IsDxgmms2 )
  {
    Elements = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                          (__int64 *)&v95,
                                          AllocationCount,
                                          v58,
                                          v59);
    v62 = Elements;
    if ( !Elements )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 3014;
      if ( v95 != v96 && v95 )
        ExFreePoolWithTag(v95, 0);
      v95 = 0LL;
      v97 = 0;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v98);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v90);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v94);
      goto LABEL_55;
    }
    v65 = DxgkReferenceAllocationList((unsigned int *)&v85, pNewAllocationList, Elements, 0LL);
    if ( v65 < 0 )
      goto LABEL_116;
  }
  v66 = v71
      ? DXGCONTEXT::RenderKmLda(
          v4,
          (struct COREDEVICEACCESS *)v98,
          (struct DXGCONTEXT **)P,
          v62,
          (struct DXGHWQUEUE **)v81)
      : DXGCONTEXT::Render(
          (DXGCONTEXT *)v26,
          (__int64)v4,
          (struct COREDEVICEACCESS *)v98,
          (struct DXGADAPTERSTOPRESETLOCKSHARED *)v90,
          (struct DXGCONTEXT **)P,
          v62,
          (struct DXGHWQUEUE **)v81);
  v65 = v66;
  if ( v60 )
LABEL_116:
    DxgkUnreferenceAllocationList((unsigned int)v85, v62);
  if ( v65 < 0 )
  {
    if ( v65 == -1073741811 || v65 == -1073741592 )
    {
      WdLogSingleEntry3(2LL, v65, v26, v8);
      WdLogGlobalForLineNumber = 3050;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"0x%I64x RenderKm failed 0x%I64x 0x%I64x",
        v65,
        (__int64)v26,
        v8,
        0LL,
        0LL);
    }
    else if ( v65 == -1071775482 )
    {
      WdLogSingleEntry3(4LL, -1071775482LL, v26, v8);
      WdLogGlobalForLineNumber = 3056;
    }
    else if ( v65 != -1071774910 )
    {
      WdLogSingleEntry3(4LL, v65, v26, v8);
      WdLogGlobalForLineNumber = 3062;
    }
  }
  if ( v95 != v96 && v95 )
    ExFreePoolWithTag(v95, 0);
  v95 = 0LL;
  v97 = 0;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v98);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v90);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v94);
  if ( v81 != v82 && v81 )
    ExFreePoolWithTag(v81, 0);
  v81 = 0LL;
  v83 = 0;
  if ( P != v78 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v79 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v84);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v80);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v75);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v72);
  if ( v74 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v67, (__int64)&EventProfilerExit, v68, v72);
  return (unsigned int)v65;
}
