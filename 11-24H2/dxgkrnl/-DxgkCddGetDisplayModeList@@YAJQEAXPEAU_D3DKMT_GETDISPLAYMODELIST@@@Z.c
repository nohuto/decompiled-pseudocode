/*
 * XREFs of ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x14040E300
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1400395DC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003E5F0 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1401C8810 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1403B0334 (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddGetDisplayModeList(
        struct DXGADAPTER *this,
        struct _D3DKMT_GETDISPLAYMODELIST *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  D3DKMT_HANDLE hAdapter; // ebx
  __int64 CurrentProcess; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  int PairingAdapters; // eax
  unsigned int v16; // ebx
  struct DXGADAPTER *v17; // rsi
  int v18; // eax
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rcx
  D3DKMT_HANDLE v24; // ebx
  __int64 v25; // rax
  int DisplayModeList; // eax
  UINT v27; // ecx
  UINT ModeCount; // eax
  struct _D3DKMT_DISPLAYMODE *v29; // r8
  D3DKMT_DISPLAYMODE *pModeList; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  char v34; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v35[7]; // [rsp+51h] [rbp-AFh] BYREF
  int v36; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A0h]
  char v38; // [rsp+68h] [rbp-98h]
  struct _D3DKMT_DISPLAYMODE *v39; // [rsp+70h] [rbp-90h] BYREF
  struct DXGADAPTER *v40; // [rsp+78h] [rbp-88h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST Src; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v42; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v43[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-58h]
  int v45; // [rsp+B0h] [rbp-50h]
  _BYTE v46[144]; // [rsp+C0h] [rbp-40h] BYREF

  v36 = -1;
  v37 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v38 = 1;
    v36 = 3004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 3004);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v36, 3004);
  v35[0] = 0;
  memset(&Src, 0, sizeof(Src));
  if ( !this )
  {
    hAdapter = a2->hAdapter;
    CurrentProcess = PsGetCurrentProcess(v5);
    WdLogSingleEntry3(2LL, -1073741811LL, CurrentProcess, hAdapter);
    v8 = a2->hAdapter;
    WdLogGlobalForLineNumber = 1294;
    v10 = PsGetCurrentProcess(v9);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Status=0x%I64x EPROCESS=0x%I64x Invalid hAdapter (0x%I64x) specified",
      -1073741811LL,
      v10,
      v8,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( v38 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v36);
    }
    return 3221225485LL;
  }
  VidPnSourceId = a2->VidPnSourceId;
  v40 = 0LL;
  v42 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(this, VidPnSourceId, 0LL, 0LL, &v40, &v42, 0);
  v16 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry3(4LL, this, a2->VidPnSourceId, PairingAdapters);
    WdLogGlobalForLineNumber = 1318;
LABEL_35:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventProfilerExit, v33, v36);
    return v16;
  }
  v17 = v40;
  if ( !v40 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1322;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pDisplayAdapter != NULL", 1322LL, 0LL, 0LL, 0LL, 0LL);
  }
  DxgkWaitForMonitorEventDoneInternal(v17);
  v34 = 0;
  v18 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v34, 0);
  v19 = v18;
  if ( v18 >= 0 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v46, v17, 0LL);
    v44 = 0LL;
    v45 = 0;
    DXGADAPTER::ReleaseReference(v17);
    v22 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v46, 0LL);
    v19 = v22;
    if ( v22 >= 0 )
    {
      if ( !*((_QWORD *)v17 + 390) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1363;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pDisplayAdapter->IsDisplayAdapter()",
          1363LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      Src.VidPnSourceId = a2->VidPnSourceId;
      v39 = 0LL;
      DisplayModeList = DxgkpGetDisplayModeList(
                          (ADAPTER_DISPLAY **)v17,
                          (struct COREADAPTERACCESS *)v46,
                          (struct DXGAUTOPUSHLOCK *)v43,
                          0LL,
                          &Src,
                          (const struct _D3DKMT_DISPLAYMODE **)&v39,
                          v35);
      v16 = DisplayModeList;
      if ( DisplayModeList >= 0 )
      {
        v27 = (v39 != 0LL) + Src.ModeCount;
        if ( a2->pModeList )
        {
          ModeCount = a2->ModeCount;
          if ( ModeCount >= v27 )
          {
            memmove(a2->pModeList, Src.pModeList, 44LL * Src.ModeCount);
            v29 = v39;
            if ( v39 )
            {
              pModeList = a2->pModeList;
              v31 = Src.ModeCount;
              *(_OWORD *)&pModeList[v31].Width = *(_OWORD *)&v39->Width;
              *(_OWORD *)&pModeList[v31].RefreshRate.Numerator = *(_OWORD *)&v29->RefreshRate.Numerator;
              *(_QWORD *)&pModeList[v31].DisplayFixedOutput = *(_QWORD *)&v29->DisplayFixedOutput;
              *((_DWORD *)&pModeList[v31].Flags + 1) = *((_DWORD *)&v29->Flags + 1);
            }
          }
          else
          {
            WdLogSingleEntry2(3LL, ModeCount, v27);
            WdLogGlobalForLineNumber = 1395;
            v16 = -1073741789;
          }
        }
        else
        {
          a2->ModeCount = v27;
        }
        if ( v35[0] )
        {
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Src.pModeList);
          Src.pModeList = 0LL;
        }
      }
      else
      {
        WdLogSingleEntry2(7LL, a2->VidPnSourceId, DisplayModeList);
        WdLogGlobalForLineNumber = 1377;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v43);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v46);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v34);
      goto LABEL_35;
    }
    v24 = a2->hAdapter;
    v25 = PsGetCurrentProcess(v23);
    WdLogSingleEntry4(4LL, v19, v25, v24, v17);
    WdLogGlobalForLineNumber = 1356;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v43);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v46);
  }
  else
  {
    WdLogSingleEntry1(2LL, v18);
    WdLogGlobalForLineNumber = 1338;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to acquire session mode change shared lock (Status = 0x%I64x)",
      v19,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v34);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v36);
  return (unsigned int)v19;
}
