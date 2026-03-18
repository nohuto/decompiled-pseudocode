/*
 * XREFs of ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A7094
 * Callers:
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1403A6FDC (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140012E50 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400300D8 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140035BD0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x14004C604 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x140094408 (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@IIPEAUtagRECT@@3IPEBU5@IPEAE@Z @ 0x140227920 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x14022E4C8 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1402E3F08 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1402F8EB4 (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 *     ?Cleanup@BLTENTRY@@QEAAXE@Z @ 0x1402F9998 (-Cleanup@BLTENTRY@@QEAAXE@Z.c)
 *     ?RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z @ 0x140367770 (-RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1403A1500 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z.c)
 *     ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1403A5CBC (-InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1403F9C8C (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x14043016C (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 */

__int64 __fastcall BLTQUEUE::Present(
        BLTQUEUE *this,
        struct DXGDEVICE **a2,
        struct _D3DKMT_PRESENT *a3,
        struct _DXGKARG_PRESENT *a4,
        struct COREDEVICEACCESS *a5)
{
  struct _D3DKMT_PRESENT *v5; // rbx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // r8d
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 Current; // r15
  int v12; // ecx
  struct _EX_RUNDOWN_REF *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  const wchar_t *v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  const wchar_t *v20; // r9
  __int64 v21; // rdx
  struct _LIST_ENTRY *v22; // rax
  struct _LIST_ENTRY **v23; // r13
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  struct DXGADAPTER *Adapter; // rax
  int v30; // eax
  const struct _DXGKARG_PRESENT *v31; // r9
  struct DXGDEVICE *v32; // rdx
  __int64 v33; // rcx
  bool v34; // zf
  struct tagRECT *p_SrcRect; // rax
  struct tagRECT *v36; // rbx
  __int64 v37; // rax
  const wchar_t *v38; // r9
  struct _LIST_ENTRY *v39; // rcx
  __int64 v40; // rcx
  struct DXGPROCESS *v41; // rax
  struct _EX_RUNDOWN_REF *v42; // rbx
  D3DKMT_HANDLE hDestination; // edx
  struct _DXGKARG_PRESENT *v44; // rcx
  __int64 SubRectCnt; // rdx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  struct COREDEVICEACCESS *Timeout; // [rsp+20h] [rbp-F8h]
  void *v50; // [rsp+78h] [rbp-A0h] BYREF
  int v51; // [rsp+80h] [rbp-98h] BYREF
  __int64 v52; // [rsp+88h] [rbp-90h]
  char v53; // [rsp+90h] [rbp-88h]
  struct _EX_RUNDOWN_REF *v54; // [rsp+98h] [rbp-80h] BYREF
  struct DXGPROCESS *v55; // [rsp+A0h] [rbp-78h] BYREF
  _QWORD v56[3]; // [rsp+A8h] [rbp-70h] BYREF
  _BYTE v57[88]; // [rsp+C0h] [rbp-58h] BYREF
  BLTQUEUE *v58; // [rsp+120h] [rbp+8h] BYREF
  struct DXGCONTEXT *v59; // [rsp+128h] [rbp+10h]
  struct _D3DKMT_PRESENT *v60; // [rsp+130h] [rbp+18h]
  struct _DXGKARG_PRESENT *v61; // [rsp+138h] [rbp+20h]

  v61 = a4;
  v60 = a3;
  v59 = (struct DXGCONTEXT *)a2;
  v58 = this;
  v5 = a3;
  v51 = -1;
  v52 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v53 = 1;
    v51 = 12000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 12000);
  }
  else
  {
    v53 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v51, 12000);
  if ( (*((_DWORD *)this + 268) & 1) == 0 )
    goto LABEL_45;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v5->Flags.Value;
  if ( (*(_BYTE *)&Value & 7) == 0 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
    if ( v53 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v51);
    }
    LODWORD(Current) = -1073741811;
    return (unsigned int)Current;
  }
  v12 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2[2] + 2) + 16LL) + 444LL);
  v13 = (struct _EX_RUNDOWN_REF *)((char *)a2 + 434);
  v54 = (struct _EX_RUNDOWN_REF *)((char *)a2 + 434);
  if ( (v12 & 0x10) != 0 )
  {
LABEL_15:
    if ( !LOBYTE(v13->Count) )
      goto LABEL_27;
    goto LABEL_16;
  }
  if ( !LOBYTE(v13->Count) )
  {
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 111) & 0x100) == 0 )
    {
      Current = -1073741811LL;
      WdLogSingleEntry2(2LL, -1073741811LL, this);
      WdLogGlobalForLineNumber = 1098;
      v17 = L"0x%I64x unsupported adapter is used for display only Present 0x%I64x.";
LABEL_22:
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v17, Current, (__int64)this, 0LL, 0LL, 0LL);
LABEL_23:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
      if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v51);
      return (unsigned int)Current;
    }
    v54 = v13;
    goto LABEL_15;
  }
LABEL_16:
  if ( (*(_BYTE *)&Value & 4) == 0 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
    if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v51);
    return 3221225659LL;
  }
LABEL_27:
  if ( *((int *)this + 269) < 0 )
  {
LABEL_45:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
    if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, v26, v51);
    return 3221226166LL;
  }
  if ( (*(_BYTE *)&Value & 0x20) != 0 )
  {
    if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
    {
      KeWaitForSingleObject((char *)this + 600, Executive, 0, 0, 0LL);
      *((_DWORD *)this + 169) |= 0x80u;
      KeReleaseMutex((PRKMUTEX)((char *)this + 600), 0);
      v5 = v60;
    }
    else
    {
      *((_BYTE *)this + 663) = 1;
    }
    if ( (int)BLTQUEUE::IssueCommand(this) < 0 )
    {
      WdLogSingleEntry2(2LL, -1073741130LL, this);
      WdLogGlobalForLineNumber = 1137;
      v20 = L"0x%I64x for FlipRestart from BLTQUEUE::Present 0x%I64x.";
      v21 = 0x40000LL;
LABEL_44:
      DxgkLogInternalTriageEvent(0LL, v21, 0xFFFFFFFFLL, v20, -1073741130LL, (__int64)this, 0LL, 0LL, 0LL);
      goto LABEL_45;
    }
  }
  LODWORD(v50) = 0;
  v22 = (struct _LIST_ENTRY *)((char *)this + 232);
  do
  {
    v23 = BLTQUEUE::RemoveQueueHead(this, v22);
    v56[0] = v23;
    if ( v23 )
      break;
    if ( (v5->Flags.Value & 0x10) != 0 )
    {
      WdLogSingleEntry2(4LL, -1071775486LL, this);
      WdLogGlobalForLineNumber = 1155;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
      if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v51);
      return 3223191810LL;
    }
    if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
    {
      KeWaitForSingleObject((char *)this + 600, Executive, 0, 0, 0LL);
      *((_DWORD *)this + 169) |= 0x40u;
      KeReleaseMutex((PRKMUTEX)((char *)this + 600), 0);
      v5 = v60;
    }
    else
    {
      *((_BYTE *)this + 662) = 1;
    }
    v24 = BLTQUEUE::IssueCommand(this);
    Current = v24;
    if ( v24 < 0 )
    {
      WdLogSingleEntry2(2LL, v24, this);
      WdLogGlobalForLineNumber = 1178;
      v17 = L"0x%I64x for WaitEntry from BLTQUEUE::Present 0x%I64x.";
      goto LABEL_22;
    }
    LODWORD(v50) = (_DWORD)v50 + 1;
    v22 = (struct _LIST_ENTRY *)((char *)this + 232);
  }
  while ( (unsigned int)v50 < 3 );
  if ( !v23 )
  {
    WdLogSingleEntry2(1LL, -1073741130LL, this);
    WdLogGlobalForLineNumber = 1188;
    v20 = L"0x%I64x No BLT entry available for BLTQUEUE::Present 0x%I64x.";
    v21 = 262146LL;
    goto LABEL_44;
  }
  Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
  v30 = BLTENTRY::SetupPresentParameters(
          (BLTENTRY *)v23,
          this,
          (struct DXGCONTEXT *)a2,
          v5,
          v61,
          a5,
          BYTE1(*((_DWORD *)Adapter + 111)) & 1);
  Current = v30;
  if ( v30 < 0 )
  {
    WdLogSingleEntry2(2LL, v30, this);
    WdLogGlobalForLineNumber = 1202;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Error 0x%I64x to set up Present parameters 0x%I64x.",
      Current,
      (__int64)this,
      0LL,
      0LL,
      0LL);
    goto LABEL_91;
  }
  if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 111) & 0x100) != 0 )
  {
    KeWaitForSingleObject((char *)this + 2840, Executive, 0, 0, 0LL);
    if ( (v60->Flags.Value & 8) != 0 )
      LODWORD(Current) = 0;
    else
      LODWORD(Current) = BLTQUEUE::PreparePresentIndirect(
                           this,
                           (struct DXGCONTEXT *)a2,
                           v60,
                           v31,
                           Timeout,
                           (struct BLTENTRY *)v23);
    KeReleaseMutex((PRKMUTEX)((char *)this + 2840), 0);
    goto LABEL_91;
  }
  if ( !LOBYTE(v54->Count) )
  {
    v50 = 0LL;
    v54 = (struct _EX_RUNDOWN_REF *)a2[7];
    v42 = v54 + 1;
    v56[2] = v54 + 1;
    if ( LODWORD(v54->Count) != -791674878
      || ((v60->Flags.Value & 4) == 0 ? (hDestination = v60->hDestination) : (hDestination = v60->hSource),
          LODWORD(v42->Count) != hDestination) )
    {
      WdLogSingleEntry3(2LL, Current, a2, this);
      WdLogGlobalForLineNumber = 1396;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid Present request 0x%I64x from 0x%I64x for 0x%I64x.",
        Current,
        (__int64)a2,
        (__int64)this,
        0LL,
        0LL);
      LODWORD(Current) = -1073741811;
      goto LABEL_91;
    }
    if ( (v60->Flags.Value & 4) != 0 )
    {
      memset(v42, 0, 0x48uLL);
      LODWORD(v42[1].Count) |= 4u;
    }
    else
    {
      v44 = v61;
      LODWORD(v54[2].Count) = v61->Flags.0;
      HIDWORD(v42[1].Ptr) = v44->Color;
      *(RECT *)&v42[4].Count = v44->DstRect;
      *(RECT *)&v42[2].Count = v44->SrcRect;
      SubRectCnt = v44->SubRectCnt;
      if ( (unsigned int)SubRectCnt > (unsigned int)(((unsigned __int64)*((unsigned int *)a2 + 12) - 80) >> 4) )
      {
        v55 = (struct DXGPROCESS *)(16 * SubRectCnt);
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        if ( (*(int (__fastcall **)(__int64, void **, _QWORD, struct DXGPROCESS **, int, int))VirtualMemoryInterface)(
               -1LL,
               &v50,
               0LL,
               &v55,
               4096,
               4) < 0 )
          goto LABEL_91;
        v44 = v61;
      }
      else
      {
        v50 = (char *)&v42[6].Ptr + 4;
      }
      memmove(v50, v44->pDstSubRects, 16LL * v44->SubRectCnt);
      LODWORD(v42[6].Count) = v61->SubRectCnt;
      v42->Count = (ULONG_PTR)v50;
    }
    LODWORD(v54->Count) = -791674877;
    goto LABEL_91;
  }
  v32 = a2[2];
  v50 = *(void **)(*((_QWORD *)v32 + 2) + 16LL);
  LODWORD(Current) = BLTQUEUE::PrepareStagingBuffer(this, v32, v5->hSource, a5);
  if ( (int)Current >= 0 )
  {
    v34 = (*(_DWORD *)&v5->Flags.0 & 0x80u) == 0;
    p_SrcRect = &v5->SrcRect;
    v36 = (struct tagRECT *)((char *)this + 2960);
    if ( !v34 )
      v36 = p_SrcRect;
    Current = (__int64)DXGPROCESS::GetCurrent(v33);
    v55 = (struct DXGPROCESS *)Current;
    DXGPROCESS::GetAllocationSafe(Current, (DXGALLOCATIONREFERENCE *)&v54, v60->hSource);
    LODWORD(Current) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                         (DXG_GUEST_VIRTUALGPU_VMBUS *)((char *)v50 + 4664),
                         (struct DXGPROCESS *)Current,
                         (struct DXGCONTEXT *)a2,
                         0LL,
                         HIDWORD(v54[2].Ptr),
                         *((_DWORD *)this + 727),
                         v36,
                         v36,
                         1u,
                         v36,
                         0,
                         0LL);
    if ( (int)Current >= 0 )
    {
      ++*((_QWORD *)this + 369);
      LODWORD(v58) = *((_DWORD *)a2 + 6);
      LODWORD(Current) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
                           (DXG_GUEST_VIRTUALGPU_VMBUS *)((char *)v50 + 4664),
                           v55,
                           1u,
                           (unsigned int *)this + 734,
                           0,
                           1u,
                           (unsigned int *)&v58,
                           (unsigned __int64 *)this + 369,
                           0LL,
                           0LL,
                           0,
                           0,
                           0LL);
      if ( (int)Current >= 0 )
      {
        v39 = (struct _LIST_ENTRY *)a2[2];
        v23[70] = (struct _LIST_ENTRY *)*((_QWORD *)this + 369);
        v23[71] = v39;
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v56, (BLTQUEUE *)((char *)this + 832), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v56);
        v41 = DXGPROCESS::GetCurrent(v40);
        DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v57, v41);
        if ( *(_DWORD *)(*(_QWORD *)this + 140LL) )
        {
          LODWORD(Current) = -1073741823;
        }
        else
        {
          *((_DWORD *)v23 + 22) = 4;
          *((_DWORD *)v23 + 18) = *((_DWORD *)this + 64);
          *((_DWORD *)v23 + 23) = *((_DWORD *)this + 729);
          v23[10] = (struct _LIST_ENTRY *)*((_QWORD *)this + 366);
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v57);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v56);
        goto LABEL_76;
      }
      WdLogSingleEntry0(2LL);
      v37 = 1286LL;
      v38 = L"VmBusSendSignalSyncObject failed";
    }
    else
    {
      WdLogSingleEntry0(2LL);
      v37 = 1266LL;
      v38 = L"Blt failed";
    }
    WdLogGlobalForLineNumber = v37;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v38, v37, 0LL, 0LL, 0LL, 0LL);
LABEL_76:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v54);
    goto LABEL_91;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 1240;
  DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"PrepareStagingBuffer failed", 1240LL, 0LL, 0LL, 0LL, 0LL);
LABEL_91:
  if ( (int)Current < 0 )
  {
    BLTENTRY::Cleanup((BLTENTRY *)v23, 1);
    BLTQUEUE::InsertQueueHead((__int64)this, (__int64 *)this + 29, (__int64)v23);
    goto LABEL_23;
  }
  BLTQUEUE::InsertQueueTail((__int64)this, (__int64)this + 216, (__int64)v23);
  *((LARGE_INTEGER *)this + 121) = KeQueryPerformanceCounter(0LL);
  KeSetEvent((PRKEVENT)this + 23, 0, 0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
  if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v47, (__int64)&EventProfilerExit, v48, v51);
  return 0LL;
}
