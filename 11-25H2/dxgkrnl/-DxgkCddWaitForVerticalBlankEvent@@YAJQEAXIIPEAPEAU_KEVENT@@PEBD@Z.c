/*
 * XREFs of ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEBD@Z @ 0x14032A180
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140014AA8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140014B30 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14001D9E0 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14001F190 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002D3C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTER@@EI@Z @ 0x140052A6C (-VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTE.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028FF40 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x14032AC44 (-EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkCddWaitForVerticalBlankEvent(
        DXGADAPTER *this,
        unsigned int a2,
        __int64 a3,
        struct _KEVENT **a4,
        char *a5)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r8
  DXGADAPTER *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  char v13; // r12
  char v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  bool v18; // zf
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v22; // rcx
  signed __int32 v23; // edx
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int v27; // edi
  __int64 v28; // r8
  __int64 v29; // rsi
  int v30; // r14d
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  bool v34; // zf
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r8
  const wchar_t *v38; // r9
  int v39; // eax
  KPROCESSOR_MODE WaitMode[8]; // [rsp+20h] [rbp-E0h]
  KPROCESSOR_MODE WaitModea[8]; // [rsp+20h] [rbp-E0h]
  BOOLEAN Alertable[8]; // [rsp+28h] [rbp-D8h]
  BOOLEAN Alertablea[8]; // [rsp+28h] [rbp-D8h]
  int v44; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+58h] [rbp-A8h]
  char v46; // [rsp+60h] [rbp-A0h]
  void *Src; // [rsp+68h] [rbp-98h]
  union _LARGE_INTEGER Timeout; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v49[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v50[16]; // [rsp+88h] [rbp-78h] BYREF
  DXGADAPTER *v51; // [rsp+98h] [rbp-68h]
  _BYTE v52[16]; // [rsp+C8h] [rbp-38h] BYREF
  DXGADAPTER *v53; // [rsp+D8h] [rbp-28h]
  char v54; // [rsp+E0h] [rbp-20h]
  __int64 v55; // [rsp+E8h] [rbp-18h]
  PVOID Object[64]; // [rsp+110h] [rbp+10h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+310h] [rbp+210h] BYREF

  v44 = -1;
  Src = a4;
  v6 = (unsigned int)a3;
  v7 = a2;
  v45 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v46 = 1;
    v44 = 3015;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 3015);
  }
  else
  {
    v46 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v44, 3015);
  if ( !this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8811;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"i_pAdapter != NULL", 8811LL, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = *((_QWORD *)this + 390);
  if ( !v8 )
  {
    v19 = -1073741637LL;
    WdLogSingleEntry2(4LL, this, -1073741637LL);
    WdLogGlobalForLineNumber = 8837;
    v20 = v7;
LABEL_23:
    WdLogSingleEntry3(2LL, this, v20, v19);
    WdLogGlobalForLineNumber = 2559;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to get bound render adapter from Adapter 0x%I64x VidPn source ID 0x%I64x in DxgkCddWaitForVerticalBlankEven"
       "t (ntStatus = 0x%I64x).",
      (__int64)this,
      v20,
      v19,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    v18 = v46 == 0;
LABEL_24:
    if ( !v18 )
    {
      v34 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
      goto LABEL_62;
    }
    return 3221226537LL;
  }
  if ( (unsigned int)v7 >= *(_DWORD *)(v8 + 96) )
  {
    v19 = -1073741811LL;
    v20 = v7;
    WdLogSingleEntry2(2LL, v7, -1073741811LL);
    WdLogGlobalForLineNumber = 8824;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
      v7,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_23;
  }
  if ( this )
    _InterlockedAdd64((volatile signed __int64 *)this + 3, 1uLL);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v49, this, 0LL);
  DXGADAPTER::ReleaseReference(this);
  if ( v54 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v52, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7603;
  }
  v10 = v53;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v53 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v53 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventBlockThread, v12, 72);
      KeWaitForSingleObject((char *)v53 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v53, 0LL);
    v10 = v53;
  }
  v55 = 0LL;
  v54 = 1;
  if ( *((_DWORD *)v10 + 50) != 1 )
    goto LABEL_66;
  if ( v51 != v53 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v50, a5);
    if ( *((_DWORD *)v51 + 50) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v50);
LABEL_66:
      COREACCESS::Release((COREACCESS *)v52);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v49);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
      if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventProfilerExit, v36, v44);
      return 3221226166LL;
    }
  }
  v49[1] = 1;
  if ( !*((_QWORD *)this + 390) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2578;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pDisplayAdapter->IsDisplayAdapter()",
      2578LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v13 = 0;
  v14 = 0;
  if ( !*((_QWORD *)this + 390) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10513;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsDisplayAdapter()", 10513LL, 0LL, 0LL, 0LL, 0LL);
  }
  v15 = *((_QWORD *)this + 390);
  if ( !v15 )
    goto LABEL_21;
  if ( (unsigned int)v7 >= *(_DWORD *)(v15 + 96) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6425;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"VidPnSourceId < m_NumVidPnSources",
      6425LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*(_BYTE *)(*(_QWORD *)(v15 + 128) + 3984 * v7 + 760) )
  {
LABEL_21:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v49);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    v18 = v46 == 0;
    goto LABEL_24;
  }
  if ( *((_QWORD *)this + 391) )
  {
    v22 = (*((_DWORD *)this + 744) & 0x10) != 0 ? (unsigned int)v7 : 0;
    if ( (unsigned int)v22 < 0x10 )
    {
      v23 = _InterlockedIncrement((volatile signed __int32 *)this + v22 + 788);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      {
        *(_DWORD *)Alertable = v23;
        *(_DWORD *)WaitMode = v22;
        McTemplateK0pqq_EtwWriteTransfer(
          v22,
          (__int64)&VSyncWaiterChange,
          v9,
          this,
          *(_QWORD *)WaitMode,
          *(_QWORD *)Alertable);
      }
    }
    v13 = 1;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 391) + 736LL)
                                                                       + 8LL)
                                                           + 552LL))(
           *(_QWORD *)(*((_QWORD *)this + 391) + 744LL),
           (unsigned int)v7) )
    {
      goto LABEL_37;
    }
    if ( (int)VIDSCH_EXPORT::VidSchControlVSyncAdapter(
                *(_QWORD *)(*((_QWORD *)this + 391) + 736LL),
                *(_QWORD *)(*((_QWORD *)this + 391) + 744LL),
                1LL,
                1,
                v7) >= 0 )
    {
      v14 = 1;
      goto LABEL_37;
    }
    DXGADAPTER::DecrementVSyncWaiter(this, v7, v37);
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2623;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"DxgkCddWaitForVerticalBlankEvent failed to enable VSync",
      2623LL,
      0LL,
      0LL,
      0LL,
      0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v49);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( v46 )
    {
      v34 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
LABEL_62:
      if ( !v34 )
        McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v44);
      return 3221226537LL;
    }
    return 3221226537LL;
  }
  v33 = *(_QWORD *)(*((_QWORD *)this + 390) + 456LL);
  if ( v33 )
    BLTQUEUE::EnableVSyncEventSignaling((BLTQUEUE *)(*(_QWORD *)(v33 + 8) + 2968 * v7));
LABEL_37:
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)v49);
  Timeout.QuadPart = -800000LL;
  v24 = *((_QWORD *)this + 390);
  v25 = *(_QWORD *)(v24 + 16);
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v25 + 184)
    || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v25 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7485;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!IsCoreResourceSharedOwner()", 7485LL, 0LL, 0LL, 0LL, 0LL);
  }
  memset(Object, 0, sizeof(Object));
  if ( !(_DWORD)v6 )
    goto LABEL_40;
  if ( Src )
  {
    if ( (unsigned int)v6 < 0x3F )
    {
      memmove(Object, Src, 8 * v6);
LABEL_40:
      Object[v6] = *(PVOID *)(*(_QWORD *)(v24 + 128) + 3984 * v7 + 904);
      if ( (unsigned int)(v6 + 1) > 0x40 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 7515;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"Count <= _countof(Objects)", 7515LL, 0LL, 0LL, 0LL, 0LL);
      }
      v27 = KeWaitForMultipleObjects(v6 + 1, Object, WaitAny, Executive, 0, 0, &Timeout, &WaitBlockArray);
      goto LABEL_43;
    }
    v27 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v38 = L"Invalid number of wait objects in ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent, returning 0x%I64x";
    WdLogGlobalForLineNumber = 7502;
  }
  else
  {
    v27 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v38 = L"Invalid object array in ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent, returning 0x%I64x";
    WdLogGlobalForLineNumber = 7495;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v38, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
LABEL_43:
  if ( v13 )
  {
    if ( !*((_QWORD *)this + 391) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2659;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pDisplayAdapter->IsRenderAdapter()",
        2659LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v29 = (*((_DWORD *)this + 744) & 0x10) != 0 ? (unsigned int)v7 : 0;
    if ( (unsigned int)v29 < 0x10 )
    {
      v30 = _InterlockedDecrement((volatile signed __int32 *)this + v29 + 788);
      if ( v30 < 0 )
      {
        WdLogSingleEntry5(0LL, 275LL, 37LL, this, *((unsigned int *)this + v29 + 788), 0LL);
        WdLogGlobalForLineNumber = 2754;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      {
        *(_DWORD *)Alertablea = v30;
        *(_DWORD *)WaitModea = v29;
        McTemplateK0pqq_EtwWriteTransfer(
          v26,
          (__int64)&VSyncWaiterChange,
          v28,
          this,
          *(_QWORD *)WaitModea,
          *(_QWORD *)Alertablea);
      }
    }
  }
  if ( v14 )
  {
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v49, 0LL) < 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2686;
    }
    else
    {
      v39 = VIDSCH_EXPORT::VidSchControlVSyncAdapter(
              *(_QWORD *)(*((_QWORD *)this + 391) + 736LL),
              *(_QWORD *)(*((_QWORD *)this + 391) + 744LL),
              1LL,
              0,
              v7);
      if ( v39 < 0 )
      {
        WdLogSingleEntry1(3LL, v39);
        WdLogGlobalForLineNumber = 2681;
      }
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v49);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
  if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerExit, v32, v44);
  return v27;
}
