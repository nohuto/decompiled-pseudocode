/*
 * XREFs of NtDxgkGetProcessList @ 0x1401AE570
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003907C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?QueryProcessAdapterInfo@ADAPTER_RENDER@@QEAAJPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@PEAIK@Z @ 0x14019D4BC (-QueryProcessAdapterInfo@ADAPTER_RENDER@@QEAAJPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@PEAIK@Z.c)
 */

__int64 __fastcall NtDxgkGetProcessList(ULONG64 a1, __int64 a2, __int64 a3)
{
  const void *v4; // rdx
  __int64 v5; // r9
  LONG HighPart; // ebx
  PVOID Pool2; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v11; // ebx
  struct DXGADAPTER *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  int ProcessAdapterInfo; // eax
  unsigned int v18; // edi
  unsigned int i; // edx
  void *v20; // rcx
  _DWORD *v21; // rcx
  size_t v22; // r8
  void *v23; // rdx
  void *v24; // rcx
  struct _LUID v25[2]; // [rsp+50h] [rbp-298h] BYREF
  void *Src; // [rsp+60h] [rbp-288h]
  int v27; // [rsp+68h] [rbp-280h] BYREF
  __int64 v28; // [rsp+70h] [rbp-278h]
  char v29; // [rsp+78h] [rbp-270h]
  struct DXGADAPTER *v30[2]; // [rsp+80h] [rbp-268h] BYREF
  int v31; // [rsp+90h] [rbp-258h]
  void *v32; // [rsp+98h] [rbp-250h]
  PVOID v33; // [rsp+A0h] [rbp-248h]
  _BYTE v34[24]; // [rsp+A8h] [rbp-240h] BYREF
  PVOID P; // [rsp+C0h] [rbp-228h]
  _BYTE v36[512]; // [rsp+C8h] [rbp-220h] BYREF
  LONG v37; // [rsp+2C8h] [rbp-20h]

  v27 = -1;
  v28 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 2203;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2203);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 2203);
  *(_OWORD *)&v25[0].LowPart = 0LL;
  Src = 0LL;
  v32 = 0LL;
  v30[0] = 0LL;
  P = 0LL;
  v37 = 0;
  v4 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v25, v4, 0x18uLL);
  if ( !Src )
    goto LABEL_23;
  HighPart = v25[1].HighPart;
  if ( !v25[1].HighPart )
    goto LABEL_23;
  v32 = Src;
  if ( v25[1].HighPart <= 0x40u )
  {
    P = v36;
    memset(v36, 0, 8LL * (unsigned int)v25[1].HighPart);
    Pool2 = P;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v25[1].HighPart < 8 )
    {
      Pool2 = 0LL;
      goto LABEL_15;
    }
    Pool2 = (PVOID)ExAllocatePool2(256LL, 8LL * (unsigned int)v25[1].HighPart, 1265072196LL, v5);
    P = Pool2;
  }
  v37 = HighPart;
LABEL_15:
  v33 = Pool2;
  Src = Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry1(2LL, -1073741801LL);
    WdLogGlobalForLineNumber = 13178;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Out of memory allocating D3DKMT_GETPROCESSLIST_PER_PROCESS, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v36 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v37 = 0;
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v30, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit, v9, v27);
    }
    return 3221225495LL;
  }
LABEL_23:
  if ( v25[1].LowPart != 1024 )
  {
    v11 = -1073741811;
    WdLogSingleEntry2(2LL, v25[1].LowPart, -1073741811LL);
    WdLogGlobalForLineNumber = 13195;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid DesiredAccess:0x%I64x specified, returning 0x%I64x",
      v25[1].LowPart,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_27;
  }
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v30, v25);
  v12 = v30[0];
  if ( !v30[0] )
  {
    v11 = -1073741811;
    WdLogSingleEntry3(2LL, v25[0].HighPart, v25[0].LowPart, -1073741811LL);
    WdLogGlobalForLineNumber = 13204;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid Adapter (0x%I64x-0x%I64x) specified, returning 0x%I64x",
      v25[0].HighPart,
      v25[0].LowPart,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_27;
  }
  if ( !*((_QWORD *)v30[0] + 391) )
  {
    v11 = -1073741637;
    WdLogSingleEntry3(3LL, v25[0].HighPart, v25[0].LowPart, -1073741637LL);
    WdLogGlobalForLineNumber = 13212;
LABEL_27:
    if ( P != v36 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v37 = 0;
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v30, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v27);
    return v11;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v34, v30[0], 1);
  if ( *((_DWORD *)v12 + 50) == 1 )
  {
    ProcessAdapterInfo = ADAPTER_RENDER::QueryProcessAdapterInfo(
                           *((ADAPTER_RENDER **)v30[0] + 391),
                           (void **)Src,
                           (unsigned int *)&v25[1].HighPart,
                           v25[1].LowPart);
    v11 = ProcessAdapterInfo;
    v31 = ProcessAdapterInfo;
    if ( !ProcessAdapterInfo || ProcessAdapterInfo == -1073741789 )
    {
      v21 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v21 = (_DWORD *)MmUserProbeAddress;
      *v21 = v25[1].HighPart;
      if ( ProcessAdapterInfo >= 0 && v25[1].HighPart )
      {
        v22 = 8LL * (unsigned int)v25[1].HighPart;
        v23 = Src;
        v24 = v32;
        if ( (unsigned __int64)v32 + v22 > MmUserProbeAddress || (char *)v32 + v22 <= v32 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v24, v23, v22);
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, ProcessAdapterInfo);
      WdLogGlobalForLineNumber = 13237;
      v18 = 0;
      for ( i = v25[1].HighPart; v18 < i; ++v18 )
      {
        v20 = (void *)*((_QWORD *)Src + v18);
        if ( v20 )
        {
          ZwClose(v20);
          i = v25[1].HighPart;
        }
      }
    }
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
    goto LABEL_27;
  }
  WdLogSingleEntry3(2LL, v25[0].HighPart, v25[0].LowPart, -1073741811LL);
  WdLogGlobalForLineNumber = 13224;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Adapter (0x%I64x-0x%I64x) is not active, returning 0x%I64x",
    v25[0].HighPart,
    v25[0].LowPart,
    -1073741811LL,
    0LL,
    0LL);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
  if ( P != v36 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v37 = 0;
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v30, 0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v27);
  return 3221226166LL;
}
