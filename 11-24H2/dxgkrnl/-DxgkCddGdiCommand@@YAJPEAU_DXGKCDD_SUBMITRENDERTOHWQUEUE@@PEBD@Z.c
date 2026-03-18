/*
 * XREFs of ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z @ 0x14034DF70
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021F500 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14000E830 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x14000EB90 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140011820 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x140022A50 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140023750 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x140026BF0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400313D0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140038CCC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x14003B7CC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$03@@QEAAPEAPEAVDXGHWQUEUE@@I@Z @ 0x1402B8614 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$03@@QEAAPEAPEAVDXGHWQUEUE@@I@Z.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1403337AC (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1403349F4 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x140334A74 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x140355CBC (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x140388E50 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_RENDER@@@Z @ 0x1404023F0 (-VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14042303C (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
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
  unsigned int v15; // ebx
  unsigned int v16; // eax
  __int64 v17; // r8
  int v18; // ecx
  __int64 v19; // rbx
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  unsigned int hDevice; // edx
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 *v25; // rdi
  unsigned int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rax
  struct DXGDEVICE *v31; // rdx
  int v32; // eax
  unsigned int v33; // ebx
  __int64 v34; // rcx
  __int64 v35; // r8
  bool v36; // zf
  DXGADAPTER *v38; // rsi
  unsigned int NumDifferentPhysicalAdapters; // eax
  unsigned int BroadcastContextCount; // eax
  __int64 v41; // rsi
  _BYTE *Pool2; // rax
  __int64 v43; // r9
  int v44; // ebx
  _QWORD *v45; // r11
  __int64 v46; // rax
  __int64 *v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r11
  _QWORD *v50; // rcx
  const wchar_t *v51; // r9
  __int64 v52; // r9
  int v53; // eax
  bool IsDxgmms2; // al
  bool v55; // r12
  struct _D3DDDI_ALLOCATIONLIST *pNewAllocationList; // rsi
  struct DXGALLOCATION **v57; // rbx
  unsigned int AllocationCount; // edx
  struct DXGALLOCATION **Elements; // rax
  int v60; // esi
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rcx
  __int64 v65; // r8
  char v66; // [rsp+50h] [rbp-B0h]
  int v67; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v68; // [rsp+60h] [rbp-A0h]
  char v69; // [rsp+68h] [rbp-98h]
  __int64 v70; // [rsp+70h] [rbp-90h] BYREF
  char v71; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h]
  _BYTE v73[32]; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v74; // [rsp+A8h] [rbp-58h]
  _BYTE v75[16]; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v76; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v77[32]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v78; // [rsp+E8h] [rbp-18h]
  _BYTE v79[16]; // [rsp+F0h] [rbp-10h] BYREF
  char *v80; // [rsp+100h] [rbp+0h] BYREF
  struct DXGCONTEXT *v81; // [rsp+108h] [rbp+8h] BYREF
  __int64 v82; // [rsp+110h] [rbp+10h]
  __int64 v83; // [rsp+118h] [rbp+18h]
  _QWORD *v84; // [rsp+120h] [rbp+20h]
  _BYTE v85[24]; // [rsp+128h] [rbp+28h] BYREF
  char v86[8]; // [rsp+140h] [rbp+40h] BYREF
  char *v87; // [rsp+148h] [rbp+48h]
  int v88; // [rsp+150h] [rbp+50h]
  _QWORD v89[7]; // [rsp+158h] [rbp+58h] BYREF
  PVOID v90; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v91[256]; // [rsp+198h] [rbp+98h] BYREF
  int v92; // [rsp+298h] [rbp+198h]
  _BYTE v93[160]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v94[160]; // [rsp+340h] [rbp+240h] BYREF

  v67 = -1;
  v80 = a2;
  v68 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v69 = 1;
    v67 = 3020;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 3020);
  }
  else
  {
    v69 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v67, 3020);
  v4 = (struct _D3DKMT_RENDER *)((char *)a1 + 8);
  Current = DXGPROCESS::GetCurrent(v5);
  v8 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v7);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 2827;
    v11 = PsGetCurrentProcess(v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v11,
      0LL,
      0LL,
      0LL);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
    v14 = v69 == 0;
LABEL_89:
    if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v67);
    return 3221225485LL;
  }
  v15 = *(_DWORD *)a1;
  v87 = (char *)Current + 248;
  v88 = 0;
  if ( Current != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)Current + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1512LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v86);
  v16 = (v15 >> 6) & 0xFFFFFF;
  if ( v16 >= *(_DWORD *)(v8 + 296) )
    goto LABEL_17;
  v17 = *(_QWORD *)(v8 + 280);
  if ( ((v15 >> 25) & 0x60) != (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0x60) )
    goto LABEL_17;
  if ( (*(_DWORD *)(v17 + 16LL * v16 + 8) & 0x2000) != 0 )
    goto LABEL_17;
  v18 = *(_DWORD *)(v17 + 16LL * v16 + 8) & 0x1F;
  if ( !v18 )
    goto LABEL_17;
  if ( v18 != 15 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_17:
    v19 = 0LL;
    goto LABEL_18;
  }
  v19 = *(_QWORD *)(v17 + 16LL * v16);
LABEL_18:
  v70 = v19;
  v71 = 0;
  if ( v19 )
  {
    _m_prefetchw((const void *)(v19 + 104));
    v20 = *(_QWORD *)(v19 + 104);
    do
    {
      if ( !v20 )
      {
        v19 = 0LL;
        v70 = 0LL;
        goto LABEL_24;
      }
      v21 = v20;
      v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 104), v20 + 1, v20);
    }
    while ( v21 != v20 );
    v19 = v70;
  }
LABEL_24:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v86);
  hDevice = v4->hDevice;
  v81 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v75, hDevice, (struct _KTHREAD **)v8, &v81, 0, 1);
  v25 = (__int64 *)v81;
  if ( !v81 )
  {
    v26 = v4->hDevice;
    v27 = PsGetCurrentProcess(v23);
    WdLogSingleEntry3(2LL, -1073741811LL, v27, v26);
    v28 = v4->hDevice;
    WdLogGlobalForLineNumber = 2848;
    v30 = PsGetCurrentProcess(v29);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid context handle 0x%I64x 0x%I64x 0x%I64x",
      -1073741811LL,
      v30,
      v28,
      0LL,
      0LL);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v75);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v70);
    goto LABEL_7;
  }
  v31 = (struct DXGDEVICE *)*((_QWORD *)v81 + 2);
  if ( *((_BYTE *)v81 + 434) )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v94, (__int64)v31, 0, v24, 0);
    v32 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v94, 0LL);
    v33 = v32;
    if ( v32 >= 0 )
    {
      v33 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCddGdiCommand(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(v25[2] + 16) + 16LL) + 4664LL),
              (struct DXGPROCESS *)v8,
              (struct DXGCONTEXT *)v25,
              v4);
    }
    else
    {
      WdLogSingleEntry3(4LL, v32, v25, v8);
      WdLogGlobalForLineNumber = 2859;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v94);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v75);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v70);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
    v36 = v69 == 0;
LABEL_31:
    if ( !v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit, v35, v67);
    return v33;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v79, v31);
  v82 = v25[2];
  v38 = *(DXGADAPTER **)(*(_QWORD *)(v82 + 16) + 16LL);
  if ( !DXGADAPTER::ReplicateGdiContent(v38)
    || (*(_DWORD *)&v4->Flags & 0x40) != 0
    || (NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v38),
        NumDifferentPhysicalAdapters <= 1) )
  {
    v66 = 0;
  }
  else
  {
    v66 = 1;
    v4->BroadcastContextCount = NumDifferentPhysicalAdapters - 1;
  }
  BroadcastContextCount = v4->BroadcastContextCount;
  v41 = BroadcastContextCount + 1;
  if ( BroadcastContextCount > 0x40 )
  {
    WdLogSingleEntry2(3LL, v25, -1073741811LL);
    WdLogGlobalForLineNumber = 2896;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v79);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v75);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v70);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
    v14 = v69 == 0;
    goto LABEL_89;
  }
  P = 0LL;
  v74 = 0;
  if ( (unsigned int)v41 <= 4 )
  {
    Pool2 = v73;
    P = v73;
    if ( (_DWORD)v41 )
    {
      memset(v73, 0, 8LL * (unsigned int)v41);
      Pool2 = P;
    }
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v41 < 8 )
    {
LABEL_49:
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2903;
      if ( P != v73 && P )
        ExFreePoolWithTag(P, 0);
LABEL_144:
      P = 0LL;
      v74 = 0;
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v79);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v75);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v70);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
      if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v64, (__int64)&EventProfilerExit, v65, v67);
      return 3221225495LL;
    }
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8 * v41, 1265072196LL);
    P = Pool2;
  }
  v74 = v41;
  if ( !Pool2 )
    goto LABEL_49;
  v76 = 0LL;
  v78 = 0;
  PagedPoolZeroedArray<DXGHWQUEUE *,4>::AllocateElements((__int64 *)&v76, v41);
  if ( !v76 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2910;
LABEL_55:
    if ( v76 != v77 && v76 )
      ExFreePoolWithTag(v76, 0);
    v78 = 0;
    v76 = 0LL;
    if ( P != v73 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_144;
  }
  *(_QWORD *)P = v25;
  if ( v19 )
    *(_QWORD *)v76 = v19;
  if ( v66 )
  {
    v44 = 0;
    v45 = P;
    v43 = 0LL;
    v46 = v82 + 496;
    v84 = P;
    v83 = v82 + 496;
    v47 = *(__int64 **)(v82 + 496);
    while ( v47 != (__int64 *)v46 && v47 )
    {
      v48 = *((unsigned int *)v47 + 97);
      if ( (unsigned int)v48 >= (unsigned int)v41 )
      {
        WdLogSingleEntry1(2LL, v25);
        v51 = L"0x%I64x fails as context physical adapter index is invalid";
        WdLogGlobalForLineNumber = 2942;
        goto LABEL_82;
      }
      if ( ((1 << v48) & v44) != 0 )
      {
        WdLogSingleEntry1(2LL, v25);
        v51 = L"0x%I64x fails as context for the same physical adapter is specified";
        WdLogGlobalForLineNumber = 2949;
        goto LABEL_82;
      }
      v44 |= 1 << v48;
      v45[v48] = v47;
      if ( (v47[49] & 0x10) != 0 )
      {
        v49 = 0LL;
        if ( (__int64 *)v47[50] != v47 + 50 )
          v49 = v47[50];
        if ( (unsigned int)v48 >= v78 )
          v50 = v76;
        else
          v50 = (char *)v76 + 8 * v48;
        *v50 = v49;
        v45 = v84;
      }
      v47 = (__int64 *)*v47;
      v43 = (unsigned int)(v43 + 1);
      v46 = v83;
    }
    if ( (_DWORD)v43 == (_DWORD)v41 )
      goto LABEL_93;
    WdLogSingleEntry1(2LL, v25);
    v51 = L"0x%I64x fails as to few contexts are in the device";
    WdLogGlobalForLineNumber = 2972;
LABEL_82:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v51, (__int64)v25, 0LL, 0LL, 0LL, 0LL);
    if ( v76 != v77 && v76 )
      ExFreePoolWithTag(v76, 0);
    v76 = 0LL;
    v78 = 0;
    if ( P != v73 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v74 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v79);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v75);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v70);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
    v14 = v69 == 0;
    goto LABEL_89;
  }
LABEL_93:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v89,
    P,
    v74,
    v43,
    1);
  if ( !v89[0] )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2983;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v89);
    if ( v76 != v77 && v76 )
      ExFreePoolWithTag(v76, 0);
    v76 = 0LL;
    v78 = 0;
    if ( P != v73 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_144;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v85,
    *(struct DXGADAPTER **)(*(_QWORD *)(v82 + 16) + 16LL),
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v93, v25[2], 0, v52, 0);
  v53 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v93, v80);
  v33 = v53;
  if ( v53 < 0 )
  {
    WdLogSingleEntry3(4LL, v53, v25, v8);
    WdLogGlobalForLineNumber = 2996;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v93);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v85);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v89);
    if ( v76 != v77 && v76 )
      ExFreePoolWithTag(v76, 0);
    v76 = 0LL;
    v78 = 0;
    if ( P != v73 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v74 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v79);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v75);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v70);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
    v36 = v69 == 0;
    goto LABEL_31;
  }
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v25[2] + 16) + 16LL));
  v55 = IsDxgmms2;
  if ( (*(_DWORD *)&v4->Flags & 0x20) != 0 )
    pNewAllocationList = v4->pNewAllocationList;
  else
    pNewAllocationList = (struct _D3DDDI_ALLOCATIONLIST *)v25[11];
  v90 = 0LL;
  v57 = 0LL;
  v92 = 0;
  AllocationCount = v4->AllocationCount;
  LODWORD(v80) = AllocationCount;
  if ( IsDxgmms2 )
  {
    Elements = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                          (__int64 *)&v90,
                                          AllocationCount);
    v57 = Elements;
    if ( !Elements )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 3023;
      if ( v90 != v91 && v90 )
        ExFreePoolWithTag(v90, 0);
      v90 = 0LL;
      v92 = 0;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v93);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v85);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v89);
      goto LABEL_55;
    }
    v60 = DxgkReferenceAllocationList((unsigned int *)&v80, pNewAllocationList, Elements, 0LL);
    if ( v60 < 0 )
      goto LABEL_116;
  }
  v61 = v66
      ? DXGCONTEXT::RenderKmLda(
          v4,
          (struct COREDEVICEACCESS *)v93,
          (struct DXGCONTEXT **)P,
          v57,
          (struct DXGHWQUEUE **)v76)
      : DXGCONTEXT::Render(
          (DXGCONTEXT *)v25,
          (__int64)v4,
          (struct COREDEVICEACCESS *)v93,
          (struct DXGADAPTERSTOPRESETLOCKSHARED *)v85,
          (struct DXGCONTEXT **)P,
          v57,
          (struct DXGHWQUEUE **)v76);
  v60 = v61;
  if ( v55 )
LABEL_116:
    DxgkUnreferenceAllocationList((unsigned int)v80, v57);
  if ( v60 < 0 )
  {
    if ( v60 == -1073741811 || v60 == -1073741592 )
    {
      WdLogSingleEntry3(2LL, v60, v25, v8);
      WdLogGlobalForLineNumber = 3059;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"0x%I64x RenderKm failed 0x%I64x 0x%I64x",
        v60,
        (__int64)v25,
        v8,
        0LL,
        0LL);
    }
    else if ( v60 == -1071775482 )
    {
      WdLogSingleEntry3(4LL, -1071775482LL, v25, v8);
      WdLogGlobalForLineNumber = 3065;
    }
    else if ( v60 != -1071774910 )
    {
      WdLogSingleEntry3(4LL, v60, v25, v8);
      WdLogGlobalForLineNumber = 3071;
    }
  }
  if ( v90 != v91 && v90 )
    ExFreePoolWithTag(v90, 0);
  v90 = 0LL;
  v92 = 0;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v93);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v85);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v89);
  if ( v76 != v77 && v76 )
    ExFreePoolWithTag(v76, 0);
  v76 = 0LL;
  v78 = 0;
  if ( P != v73 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v74 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v79);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v75);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v70);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
  if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v62, (__int64)&EventProfilerExit, v63, v67);
  return (unsigned int)v60;
}
