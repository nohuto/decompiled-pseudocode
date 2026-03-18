/*
 * XREFs of ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1403D7BA0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14000F4A0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x14003181C (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x140059DF4 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x140067400 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetDoDCddShadowSection@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z @ 0x1401992BC (-GetDoDCddShadowSection@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1403EF7C8 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 */

__int64 __fastcall DxgkCddEnable(
        __int64 a1,
        int a2,
        const struct _CDDDXGK_INTERFACE *a3,
        unsigned int a4,
        const struct _D3DKMT_DISPLAYMODE *a5,
        void **a6,
        unsigned __int64 *a7,
        unsigned int *a8)
{
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 CurrentProcess; // rax
  unsigned int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  bool v24; // zf
  volatile signed __int32 *v25; // rdi
  unsigned int v26; // eax
  __int64 v27; // r8
  int v28; // edx
  __int64 v29; // rbx
  __int64 v30; // r9
  int v31; // eax
  __int64 v32; // rdi
  _QWORD *v33; // r14
  ADAPTER_DISPLAY *v34; // rcx
  void *DoDCddShadowSection; // rax
  unsigned __int64 v36; // rcx
  unsigned int CddShadowPitch; // eax
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+58h] [rbp-A8h]
  char v42; // [rsp+60h] [rbp-A0h]
  unsigned int v43[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v44; // [rsp+70h] [rbp-90h]
  struct _CDDDXGK_INTERFACE *v45; // [rsp+78h] [rbp-88h]
  _BYTE v46[160]; // [rsp+80h] [rbp-80h] BYREF

  v40 = -1;
  *(_QWORD *)v43 = a6;
  v44 = a8;
  v45 = a3;
  v10 = (unsigned int)a1;
  v41 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v42 = 1;
    v40 = 3002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, (__int64)a3, 3002);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v40, 3002);
  if ( (a2 & 0x40000000) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 451;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(OLD_MODE_CHANGE & Win32kCommand) == 0",
      451LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( v42 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v40);
    }
    return 3221225659LL;
  }
  Current = DXGPROCESS::GetCurrent(v11);
  v17 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v16);
    v19 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 460;
    v21 = PsGetCurrentProcess(v20);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v21,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    v24 = v42 == 0;
    goto LABEL_22;
  }
  v25 = (volatile signed __int32 *)((char *)Current + 248);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v26 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
  if ( v26 < *(_DWORD *)(v17 + 296)
    && (v27 = *(_QWORD *)(v17 + 280), (((unsigned int)v10 >> 25) & 0x60) == (*(_BYTE *)(v27 + 16LL * v26 + 8) & 0x60))
    && (*(_DWORD *)(v27 + 16LL * v26 + 8) & 0x2000) == 0
    && (v28 = *(_DWORD *)(v27 + 16LL * v26 + 8) & 0x1F) != 0 )
  {
    if ( v28 == 3 )
    {
      v29 = *(_QWORD *)(v27 + 16LL * v26);
    }
    else
    {
      WdLogSingleEntry0(2LL);
      v29 = 0LL;
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v29 = 0LL;
  }
  _InterlockedDecrement(v25 + 4);
  ExReleasePushLockSharedEx(v25, 0LL);
  KeLeaveCriticalRegion();
  if ( !v29 )
  {
    v19 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v10, v17);
    WdLogGlobalForLineNumber = 469;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
      -1073741811LL,
      v10,
      v17,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    v24 = v42 == 0;
    goto LABEL_22;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v46, v29, 1, v30, 0);
  v31 = COREDEVICEACCESS::AcquireExclusive((__int64)v46, 2u);
  v19 = v31;
  if ( v31 < 0 )
  {
    WdLogSingleEntry3(4LL, v31, v29, v17);
    WdLogGlobalForLineNumber = 480;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v46);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    v24 = v42 == 0;
LABEL_22:
    if ( !v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v40);
    return v19;
  }
  v32 = *(_QWORD *)(v29 + 1896);
  if ( !v32 || !*(_QWORD *)(v32 + 3120) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 487;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(pDisplayAdapter != NULL) && (pDisplayAdapter->IsDisplayAdapter())",
      487LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_QWORD *)(v29 + 1896) != *(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL) )
  {
    v33 = *(_QWORD **)v43;
    if ( !**(_QWORD **)v43 && (*(_BYTE *)(v29 + 1917) & 1) == 0 )
    {
      if ( !a7 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 505;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"(ppDoDShadowSession != NULL) && (pDoDShadowSize != NULL)",
          505LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( ADAPTER_DISPLAY::IsIdenticalMode(*(ADAPTER_DISPLAY **)(v32 + 3120), a4) )
      {
        v34 = *(ADAPTER_DISPLAY **)(v32 + 3120);
        v43[0] = 0;
        DoDCddShadowSection = ADAPTER_DISPLAY::GetDoDCddShadowSection(v34, a4, v43);
        v36 = v43[0];
        if ( *a7 > v43[0] )
        {
          if ( DoDCddShadowSection )
            ObfDereferenceObject(DoDCddShadowSection);
        }
        else
        {
          *v33 = DoDCddShadowSection;
          *a7 = v36;
        }
      }
    }
  }
  CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v32 + 3120), a4);
  *v44 = CddShadowPitch;
  ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v32 + 3120), a4, 1u);
  ADAPTER_DISPLAY::SetCddInterface(*(ADAPTER_DISPLAY **)(v32 + 3120), a4, v45);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v46);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v38, (__int64)&EventProfilerExit, v39, v40);
  return 0LL;
}
