/*
 * XREFs of ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030635C
 * Callers:
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1403062A4 (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140016050 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14002EC24 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140035DA0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x14004CB54 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@IIPEAUtagRECT@@3IPEBU5@IPEAE@Z @ 0x140221230 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x140227BDC (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ @ 0x140305710 (-AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ.c)
 *     ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1403059A8 (-InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z.c)
 *     ?ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ @ 0x140305DB0 (-ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ.c)
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x140306EE8 (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1403074A4 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z.c)
 *     ?RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z @ 0x140307590 (-RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x14030766C (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1403CFB5C (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1403E573C (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1403FFC9C (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall BLTQUEUE::Present(
        BLTQUEUE *this,
        struct DXGDEVICE **a2,
        struct _D3DKMT_PRESENT *a3,
        struct _DXGKARG_PRESENT *a4,
        struct COREDEVICEACCESS *a5)
{
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // r8d
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 Current; // r15
  int v12; // ecx
  struct _EX_RUNDOWN_REF *v13; // rdx
  struct BLTENTRY *v14; // r13
  unsigned int i; // eax
  struct DXGADAPTER *Adapter; // rax
  int v17; // eax
  const struct _DXGKARG_PRESENT *v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  struct _EX_RUNDOWN_REF *v24; // rbx
  D3DKMT_HANDLE hDestination; // edx
  struct _DXGKARG_PRESENT *v26; // rcx
  __int64 SubRectCnt; // rdx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  const wchar_t *v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r8
  struct DXGDEVICE *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  const wchar_t *v36; // r9
  int v37; // edx
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // r8
  bool v43; // zf
  RECT *p_SrcRect; // rax
  struct tagRECT *v45; // rbx
  __int64 v46; // rax
  const wchar_t *v47; // r9
  struct DXGDEVICE *v48; // rcx
  __int64 v49; // rcx
  struct DXGPROCESS *v50; // rax
  struct COREDEVICEACCESS *Timeout; // [rsp+20h] [rbp-F8h]
  void *v52; // [rsp+78h] [rbp-A0h] BYREF
  int v53; // [rsp+80h] [rbp-98h] BYREF
  __int64 v54; // [rsp+88h] [rbp-90h]
  char v55; // [rsp+90h] [rbp-88h]
  struct _EX_RUNDOWN_REF *v56; // [rsp+98h] [rbp-80h] BYREF
  struct DXGPROCESS *v57; // [rsp+A0h] [rbp-78h]
  _QWORD v58[2]; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v59; // [rsp+B8h] [rbp-60h] BYREF
  _BYTE v60[88]; // [rsp+C0h] [rbp-58h] BYREF
  BLTQUEUE *v61; // [rsp+120h] [rbp+8h] BYREF
  struct DXGCONTEXT *v62; // [rsp+128h] [rbp+10h]
  struct _D3DKMT_PRESENT *v63; // [rsp+130h] [rbp+18h]
  struct _DXGKARG_PRESENT *v64; // [rsp+138h] [rbp+20h]

  v64 = a4;
  v63 = a3;
  v62 = (struct DXGCONTEXT *)a2;
  v61 = this;
  v53 = -1;
  v54 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v55 = 1;
    v53 = 12000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 12000);
  }
  else
  {
    v55 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v53, 12000);
  if ( (*((_DWORD *)this + 250) & 1) == 0 )
    goto LABEL_75;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a3->Flags.Value;
  if ( (*(_BYTE *)&Value & 7) == 0 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
    if ( v55 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v53);
    }
    LODWORD(Current) = -1073741811;
    return (unsigned int)Current;
  }
  v12 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2[2] + 2) + 16LL) + 444LL);
  v13 = (struct _EX_RUNDOWN_REF *)((char *)a2 + 434);
  v56 = (struct _EX_RUNDOWN_REF *)((char *)a2 + 434);
  if ( (v12 & 0x10) == 0 )
  {
    if ( LOBYTE(v13->Count) )
      goto LABEL_58;
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 111) & 0x100) == 0 )
    {
      Current = -1073741811LL;
      WdLogSingleEntry2(2LL, -1073741811LL, this);
      WdLogGlobalForLineNumber = 1085;
      v29 = L"0x%I64x unsupported adapter is used for display only Present 0x%I64x.";
LABEL_46:
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v29, Current, (__int64)this, 0LL, 0LL, 0LL);
LABEL_47:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
      if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit, v31, v53);
      return (unsigned int)Current;
    }
    v56 = v13;
  }
  if ( !LOBYTE(v13->Count) )
    goto LABEL_16;
LABEL_58:
  if ( (*(_BYTE *)&Value & 4) != 0 )
  {
LABEL_16:
    if ( *((int *)this + 251) >= 0 )
    {
      v14 = 0LL;
      v57 = 0LL;
      if ( (*(_BYTE *)&Value & 0x20) != 0 )
      {
        *((_BYTE *)this + 607) = 1;
        if ( (int)BLTQUEUE::IssueCommand(this) < 0 )
        {
          WdLogSingleEntry2(2LL, -1073741130LL, this);
          WdLogGlobalForLineNumber = 1116;
          v36 = L"0x%I64x for FlipRestart from BLTQUEUE::Present 0x%I64x.";
          v37 = 0x40000;
LABEL_74:
          DxgkLogInternalTriageEvent(0LL, v37, 0xFFFFFFFFLL, v36, -1073741130LL, (__int64)this, 0LL, 0LL, 0LL);
          goto LABEL_75;
        }
      }
      for ( i = 0; ; i = (_DWORD)v52 + 1 )
      {
        LODWORD(v52) = i;
        if ( i >= 3 )
          break;
        v14 = BLTQUEUE::RemoveQueueHead(this, (struct _LIST_ENTRY *)((char *)this + 232));
        v57 = v14;
        if ( v14 )
          break;
        if ( (a3->Flags.Value & 0x10) != 0 )
        {
          WdLogSingleEntry2(4LL, -1071775486LL, this);
          WdLogGlobalForLineNumber = 1134;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
          if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v39, (__int64)&EventProfilerExit, v40, v53);
          return 3223191810LL;
        }
        *((_BYTE *)this + 606) = 1;
        v38 = BLTQUEUE::IssueCommand(this);
        Current = v38;
        if ( v38 < 0 )
        {
          WdLogSingleEntry2(2LL, v38, this);
          WdLogGlobalForLineNumber = 1149;
          v29 = L"0x%I64x for WaitEntry from BLTQUEUE::Present 0x%I64x.";
          goto LABEL_46;
        }
      }
      if ( !v14 )
      {
        WdLogSingleEntry2(1LL, -1073741130LL, this);
        WdLogGlobalForLineNumber = 1159;
        v36 = L"0x%I64x No BLT entry available for BLTQUEUE::Present 0x%I64x.";
        v37 = 262146;
        goto LABEL_74;
      }
      Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
      v17 = BLTENTRY::SetupPresentParameters(
              v14,
              this,
              (struct DXGCONTEXT *)a2,
              a3,
              v64,
              a5,
              BYTE1(*((_DWORD *)Adapter + 111)) & 1);
      Current = v17;
      if ( v17 < 0 )
      {
        WdLogSingleEntry2(2LL, v17, this);
        WdLogGlobalForLineNumber = 1173;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Error 0x%I64x to set up Present parameters 0x%I64x.",
          Current,
          (__int64)this,
          0LL,
          0LL,
          0LL);
        goto LABEL_27;
      }
      if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 111) & 0x100) != 0 )
      {
        KeWaitForSingleObject((char *)this + 2768, Executive, 0, 0, 0LL);
        if ( (v63->Flags.Value & 8) != 0 )
          LODWORD(Current) = 0;
        else
          LODWORD(Current) = BLTQUEUE::PreparePresentIndirect(this, (struct DXGCONTEXT *)a2, v63, v18, Timeout, v14);
        KeReleaseMutex((PRKMUTEX)((char *)this + 2768), 0);
        goto LABEL_27;
      }
      if ( !LOBYTE(v56->Count) )
      {
        v52 = 0LL;
        v56 = (struct _EX_RUNDOWN_REF *)a2[7];
        v24 = v56 + 1;
        v58[0] = v56 + 1;
        if ( LODWORD(v56->Count) == -791674878
          && ((v63->Flags.Value & 4) == 0 ? (hDestination = v63->hDestination) : (hDestination = v63->hSource),
              LODWORD(v24->Count) == hDestination) )
        {
          if ( (v63->Flags.Value & 4) != 0 )
          {
            memset(v24, 0, 0x48uLL);
            LODWORD(v24[1].Count) |= 4u;
          }
          else
          {
            v26 = v64;
            LODWORD(v56[2].Count) = v64->Flags.0;
            HIDWORD(v24[1].Ptr) = v26->Color;
            *(RECT *)&v24[4].Count = v26->DstRect;
            *(RECT *)&v24[2].Count = v26->SrcRect;
            SubRectCnt = v26->SubRectCnt;
            if ( (unsigned int)SubRectCnt > (unsigned int)(((unsigned __int64)*((unsigned int *)a2 + 12) - 80) >> 4) )
            {
              v59 = 16 * SubRectCnt;
              VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
              if ( (*(int (__fastcall **)(__int64, void **, _QWORD, __int64 *, int, int))VirtualMemoryInterface)(
                     -1LL,
                     &v52,
                     0LL,
                     &v59,
                     4096,
                     4) < 0 )
                goto LABEL_27;
              v26 = v64;
            }
            else
            {
              v52 = (char *)&v24[6].Ptr + 4;
            }
            memmove(v52, v26->pDstSubRects, 16LL * v26->SubRectCnt);
            LODWORD(v24[6].Count) = v64->SubRectCnt;
            v24->Count = (ULONG_PTR)v52;
          }
          LODWORD(v56->Count) = -791674877;
        }
        else
        {
          WdLogSingleEntry3(2LL, Current, a2, this);
          WdLogGlobalForLineNumber = 1367;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Invalid Present request 0x%I64x from 0x%I64x for 0x%I64x.",
            Current,
            (__int64)a2,
            (__int64)this,
            0LL,
            0LL);
          LODWORD(Current) = -1073741811;
        }
LABEL_27:
        if ( (int)Current >= 0 )
        {
          BLTQUEUE::InsertQueueTail(this, (char *)this + 216, v14, 0LL);
          *((LARGE_INTEGER *)this + 112) = KeQueryPerformanceCounter(0LL);
          KeSetEvent((PRKEVENT)this + 23, 0, 0);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
          if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v53);
          return 0LL;
        }
        if ( *((_QWORD *)v14 + 5) )
          BLTENTRY::ReleaseRenderingDoneEvent(v14, v19, v20);
        if ( *((_QWORD *)v14 + 6) )
          BLTENTRY::ReleasePresentDoneEvent(v14, 0);
        DXGALLOCATIONREFERENCE::AssignNull((struct _EX_RUNDOWN_REF **)v14 + 4);
        BLTQUEUE::InsertQueueHead((__int64)this, (__int64 *)this + 29, (__int64)v14);
        goto LABEL_47;
      }
      v32 = a2[2];
      v52 = *(void **)(*((_QWORD *)v32 + 2) + 16LL);
      LODWORD(Current) = BLTQUEUE::PrepareStagingBuffer(this, v32, a3->hSource, a5);
      if ( (int)Current < 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1211;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"PrepareStagingBuffer failed",
          1211LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_27;
      }
      v43 = (*(_DWORD *)&a3->Flags.0 & 0x80u) == 0;
      p_SrcRect = &a3->SrcRect;
      v45 = (struct tagRECT *)((char *)this + 2888);
      if ( !v43 )
        v45 = p_SrcRect;
      Current = (__int64)DXGPROCESS::GetCurrent(v33);
      v57 = (struct DXGPROCESS *)Current;
      DXGPROCESS::GetAllocationSafe(Current, (DXGALLOCATIONREFERENCE *)&v56, v63->hSource);
      LODWORD(Current) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                           (DXG_GUEST_VIRTUALGPU_VMBUS *)((char *)v52 + 4664),
                           (struct DXGPROCESS *)Current,
                           (struct DXGCONTEXT *)a2,
                           0LL,
                           HIDWORD(v56[2].Ptr),
                           *((_DWORD *)this + 709),
                           v45,
                           v45,
                           1u,
                           v45,
                           0,
                           0LL);
      if ( (int)Current >= 0 )
      {
        ++*((_QWORD *)this + 360);
        LODWORD(v61) = *((_DWORD *)a2 + 6);
        LODWORD(Current) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
                             (DXG_GUEST_VIRTUALGPU_VMBUS *)((char *)v52 + 4664),
                             v57,
                             1u,
                             (unsigned int *)this + 716,
                             0,
                             1u,
                             (unsigned int *)&v61,
                             (unsigned __int64 *)this + 360,
                             0LL,
                             0LL,
                             0,
                             0,
                             0LL);
        if ( (int)Current >= 0 )
        {
          v48 = a2[2];
          *((_QWORD *)v14 + 70) = *((_QWORD *)this + 360);
          *((_QWORD *)v14 + 71) = v48;
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v58, (BLTQUEUE *)((char *)this + 768), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v58);
          v50 = DXGPROCESS::GetCurrent(v49);
          DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v60, v50);
          if ( *(_DWORD *)(*(_QWORD *)this + 140LL) )
          {
            LODWORD(Current) = -1073741823;
          }
          else
          {
            *((_DWORD *)v14 + 22) = 4;
            *((_DWORD *)v14 + 18) = *((_DWORD *)this + 64);
            *((_DWORD *)v14 + 23) = *((_DWORD *)this + 711);
            *((_QWORD *)v14 + 10) = *((_QWORD *)this + 357);
          }
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v60);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v58);
          goto LABEL_90;
        }
        WdLogSingleEntry0(2LL);
        v46 = 1257LL;
        v47 = L"VmBusSendSignalSyncObject failed";
      }
      else
      {
        WdLogSingleEntry0(2LL);
        v46 = 1237LL;
        v47 = L"Blt failed";
      }
      WdLogGlobalForLineNumber = v46;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v47, v46, 0LL, 0LL, 0LL, 0LL);
LABEL_90:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v56);
      goto LABEL_27;
    }
LABEL_75:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
    if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v41, (__int64)&EventProfilerExit, v42, v53);
    return 3221226166LL;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
  if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit, v35, v53);
  return 3221225659LL;
}
