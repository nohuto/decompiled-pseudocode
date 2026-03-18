/*
 * XREFs of ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1402854C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x140283874 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1402846E8 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1402850A0 (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x140287094 (DxgkAcquireSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x140288C10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 */

__int64 __fastcall DxgkCddGetDisplayModeList(struct DXGADAPTER *a1, struct _D3DKMT_GETDISPLAYMODELIST *a2, __int64 a3)
{
  __int64 v5; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  int PairingAdapters; // eax
  unsigned int v8; // ebx
  struct DXGADAPTER *v9; // rsi
  int v10; // eax
  __int64 v11; // r15
  bool v12; // r14
  int v13; // eax
  __int64 v14; // rcx
  int DisplayModeList; // eax
  UINT v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _D3DKMT_DISPLAYMODE *v20; // r8
  D3DKMT_DISPLAYMODE *pModeList; // rcx
  __int64 ModeCount; // rdx
  bool v23; // zf
  D3DKMT_HANDLE hAdapter; // ebx
  __int64 CurrentProcess; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  D3DKMT_HANDLE v28; // ebx
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned __int8 v35[8]; // [rsp+50h] [rbp-B0h] BYREF
  int v36; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A0h]
  char v38; // [rsp+68h] [rbp-98h]
  struct _D3DKMT_DISPLAYMODE *v39; // [rsp+70h] [rbp-90h] BYREF
  struct DXGADAPTER *v40; // [rsp+78h] [rbp-88h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST Src; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v42; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v43[144]; // [rsp+A0h] [rbp-60h] BYREF

  v36 = -1;
  v37 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v38 = 1;
    v36 = 3004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 3004);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v36, 3004);
  v35[0] = 0;
  memset(&Src, 0, sizeof(Src));
  if ( a1 )
  {
    VidPnSourceId = a2->VidPnSourceId;
    v40 = 0LL;
    v42 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(a1, VidPnSourceId, 0LL, 0LL, &v40, &v42, 0);
    v8 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      WdLogSingleEntry3(4LL, a1, a2->VidPnSourceId, PairingAdapters);
      WdLogGlobalForLineNumber = 1318;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
      if ( !v38 )
        return v8;
      v23 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
LABEL_27:
      if ( !v23 )
        McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v36);
      return v8;
    }
    v9 = v40;
    if ( !v40 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1322;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pDisplayAdapter != NULL", 1322LL, 0LL, 0LL, 0LL, 0LL);
    }
    DxgkWaitForMonitorEventDoneInternal(v9);
    v10 = DxgkAcquireSessionModeChangeLock(0LL);
    v11 = v10;
    v12 = v10 >= 0;
    if ( v10 < 0 )
    {
      WdLogSingleEntry1(2LL, v10);
      WdLogGlobalForLineNumber = 1338;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to acquire session mode change shared lock (Status = 0x%I64x)",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v43, v9, 0LL);
      DXGADAPTER::ReleaseReference(v9);
      v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v43, 0LL);
      v11 = v13;
      if ( v13 >= 0 )
      {
        if ( !*((_QWORD *)v9 + 390) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1362;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"pDisplayAdapter->IsDisplayAdapter()",
            1362LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        Src.VidPnSourceId = a2->VidPnSourceId;
        v39 = 0LL;
        DisplayModeList = DxgkpGetDisplayModeList(
                            (ADAPTER_DISPLAY **)v9,
                            (struct COREADAPTERACCESS *)v43,
                            0,
                            &Src,
                            (const struct _D3DKMT_DISPLAYMODE **)&v39,
                            v35);
        v8 = DisplayModeList;
        if ( DisplayModeList < 0 )
        {
          WdLogSingleEntry2(7LL, a2->VidPnSourceId, DisplayModeList);
          WdLogGlobalForLineNumber = 1375;
        }
        else
        {
          v16 = (v39 != 0LL) + Src.ModeCount;
          if ( a2->pModeList )
          {
            if ( a2->ModeCount < v16 )
            {
              WdLogSingleEntry2(3LL, a2->ModeCount, v16);
              WdLogGlobalForLineNumber = 1393;
              v8 = -1073741789;
            }
            else
            {
              memmove(a2->pModeList, Src.pModeList, 44LL * Src.ModeCount);
              v20 = v39;
              if ( v39 )
              {
                pModeList = a2->pModeList;
                ModeCount = Src.ModeCount;
                *(_OWORD *)&pModeList[ModeCount].Width = *(_OWORD *)&v39->Width;
                *(_OWORD *)&pModeList[ModeCount].RefreshRate.Numerator = *(_OWORD *)&v20->RefreshRate.Numerator;
                *(_QWORD *)&pModeList[ModeCount].DisplayFixedOutput = *(_QWORD *)&v20->DisplayFixedOutput;
                *((_DWORD *)&pModeList[ModeCount].Flags + 1) = *((_DWORD *)&v20->Flags + 1);
              }
            }
          }
          else
          {
            a2->ModeCount = v16;
          }
          if ( v35[0] )
          {
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Src.pModeList);
            Src.pModeList = 0LL;
          }
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
        if ( v12 )
          DxgkReleaseSessionModeChangeLock();
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
        if ( !v38 )
          return v8;
        v23 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
        goto LABEL_27;
      }
      hAdapter = a2->hAdapter;
      CurrentProcess = PsGetCurrentProcess(v14);
      WdLogSingleEntry4(4LL, v11, CurrentProcess, hAdapter, v9);
      WdLogGlobalForLineNumber = 1355;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
    }
    if ( v12 )
      DxgkReleaseSessionModeChangeLock();
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v36);
    return (unsigned int)v11;
  }
  else
  {
    v28 = a2->hAdapter;
    v29 = PsGetCurrentProcess(v5);
    WdLogSingleEntry3(2LL, -1073741811LL, v29, v28);
    v30 = a2->hAdapter;
    WdLogGlobalForLineNumber = 1294;
    v32 = PsGetCurrentProcess(v31);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Status=0x%I64x EPROCESS=0x%I64x Invalid hAdapter (0x%I64x) specified",
      -1073741811LL,
      v32,
      v30,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventProfilerExit, v34, v36);
    return 3221225485LL;
  }
}
