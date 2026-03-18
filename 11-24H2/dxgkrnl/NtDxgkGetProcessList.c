/*
 * XREFs of NtDxgkGetProcessList @ 0x1401B0A20
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x140038E8C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?QueryProcessAdapterInfo@ADAPTER_RENDER@@QEAAJPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@PEAIK@Z @ 0x14019F90C (-QueryProcessAdapterInfo@ADAPTER_RENDER@@QEAAJPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@PEAIK@Z.c)
 */

__int64 __fastcall NtDxgkGetProcessList(ULONG64 a1, __int64 a2, __int64 a3)
{
  const void *v4; // rdx
  LONG HighPart; // ebx
  PVOID Pool2; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v10; // ebx
  struct DXGADAPTER *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  int ProcessAdapterInfo; // eax
  unsigned int v17; // edi
  unsigned int i; // edx
  void *v19; // rcx
  _DWORD *v20; // rcx
  size_t v21; // r8
  void *v22; // rdx
  void *v23; // rcx
  struct _LUID v24[2]; // [rsp+50h] [rbp-298h] BYREF
  void *Src; // [rsp+60h] [rbp-288h]
  int v26; // [rsp+68h] [rbp-280h] BYREF
  __int64 v27; // [rsp+70h] [rbp-278h]
  char v28; // [rsp+78h] [rbp-270h]
  struct DXGADAPTER *v29[2]; // [rsp+80h] [rbp-268h] BYREF
  int v30; // [rsp+90h] [rbp-258h]
  void *v31; // [rsp+98h] [rbp-250h]
  PVOID v32; // [rsp+A0h] [rbp-248h]
  _BYTE v33[24]; // [rsp+A8h] [rbp-240h] BYREF
  PVOID P; // [rsp+C0h] [rbp-228h]
  _BYTE v35[512]; // [rsp+C8h] [rbp-220h] BYREF
  LONG v36; // [rsp+2C8h] [rbp-20h]

  v26 = -1;
  v27 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 2203;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2203);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 2203);
  *(_OWORD *)&v24[0].LowPart = 0LL;
  Src = 0LL;
  v31 = 0LL;
  v29[0] = 0LL;
  P = 0LL;
  v36 = 0;
  v4 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v24, v4, 0x18uLL);
  if ( !Src )
    goto LABEL_23;
  HighPart = v24[1].HighPart;
  if ( !v24[1].HighPart )
    goto LABEL_23;
  v31 = Src;
  if ( v24[1].HighPart <= 0x40u )
  {
    P = v35;
    memset(v35, 0, 8LL * (unsigned int)v24[1].HighPart);
    Pool2 = P;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v24[1].HighPart < 8 )
    {
      Pool2 = 0LL;
      goto LABEL_15;
    }
    Pool2 = (PVOID)ExAllocatePool2(256LL, 8LL * (unsigned int)v24[1].HighPart, 1265072196LL);
    P = Pool2;
  }
  v36 = HighPart;
LABEL_15:
  v32 = Pool2;
  Src = Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry1(2LL, -1073741801LL);
    WdLogGlobalForLineNumber = 13239;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Out of memory allocating D3DKMT_GETPROCESSLIST_PER_PROCESS, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v35 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v36 = 0;
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v29, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit, v8, v26);
    }
    return 3221225495LL;
  }
LABEL_23:
  if ( v24[1].LowPart != 1024 )
  {
    v10 = -1073741811;
    WdLogSingleEntry2(2LL, v24[1].LowPart, -1073741811LL);
    WdLogGlobalForLineNumber = 13256;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid DesiredAccess:0x%I64x specified, returning 0x%I64x",
      v24[1].LowPart,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_27;
  }
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v29, v24);
  v11 = v29[0];
  if ( !v29[0] )
  {
    v10 = -1073741811;
    WdLogSingleEntry3(2LL, v24[0].HighPart, v24[0].LowPart, -1073741811LL);
    WdLogGlobalForLineNumber = 13265;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid Adapter (0x%I64x-0x%I64x) specified, returning 0x%I64x",
      v24[0].HighPart,
      v24[0].LowPart,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_27;
  }
  if ( !*((_QWORD *)v29[0] + 391) )
  {
    v10 = -1073741637;
    WdLogSingleEntry3(3LL, v24[0].HighPart, v24[0].LowPart, -1073741637LL);
    WdLogGlobalForLineNumber = 13273;
LABEL_27:
    if ( P != v35 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v36 = 0;
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v29, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v26);
    return v10;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v33, v29[0], 1);
  if ( *((_DWORD *)v11 + 50) == 1 )
  {
    ProcessAdapterInfo = ADAPTER_RENDER::QueryProcessAdapterInfo(
                           *((ADAPTER_RENDER **)v29[0] + 391),
                           (void **)Src,
                           (unsigned int *)&v24[1].HighPart,
                           v24[1].LowPart);
    v10 = ProcessAdapterInfo;
    v30 = ProcessAdapterInfo;
    if ( !ProcessAdapterInfo || ProcessAdapterInfo == -1073741789 )
    {
      v20 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v20 = (_DWORD *)MmUserProbeAddress;
      *v20 = v24[1].HighPart;
      if ( ProcessAdapterInfo >= 0 && v24[1].HighPart )
      {
        v21 = 8LL * (unsigned int)v24[1].HighPart;
        v22 = Src;
        v23 = v31;
        if ( (unsigned __int64)v31 + v21 > MmUserProbeAddress || (char *)v31 + v21 <= v31 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v23, v22, v21);
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, ProcessAdapterInfo);
      WdLogGlobalForLineNumber = 13298;
      v17 = 0;
      for ( i = v24[1].HighPart; v17 < i; ++v17 )
      {
        v19 = (void *)*((_QWORD *)Src + v17);
        if ( v19 )
        {
          ZwClose(v19);
          i = v24[1].HighPart;
        }
      }
    }
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
    goto LABEL_27;
  }
  WdLogSingleEntry3(2LL, v24[0].HighPart, v24[0].LowPart, -1073741811LL);
  WdLogGlobalForLineNumber = 13285;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Adapter (0x%I64x-0x%I64x) is not active, returning 0x%I64x",
    v24[0].HighPart,
    v24[0].LowPart,
    -1073741811LL,
    0LL,
    0LL);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
  if ( P != v35 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v36 = 0;
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v29, 0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v26);
  return 3221226166LL;
}
