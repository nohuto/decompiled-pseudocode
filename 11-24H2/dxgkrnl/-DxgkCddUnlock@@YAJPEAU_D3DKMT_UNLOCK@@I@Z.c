/*
 * XREFs of ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1402A9490
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14000CBC0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14000EE70 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140038CCC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1402A8BD4 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkCddUnlock(struct _D3DKMT_UNLOCK *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 CurrentProcess; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  D3DKMT_HANDLE hDevice; // edx
  struct DXGDEVICE *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGADAPTER *v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  unsigned __int64 v23; // rdx
  __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // [rsp+28h] [rbp-D8h]
  struct DXGDEVICE *v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h]
  char v32; // [rsp+68h] [rbp-98h]
  struct DXGDEVICE *v33; // [rsp+70h] [rbp-90h] BYREF
  __int64 v34; // [rsp+78h] [rbp-88h] BYREF
  char v35; // [rsp+80h] [rbp-80h]
  _BYTE v36[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v37[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v38[64]; // [rsp+D8h] [rbp-28h] BYREF
  struct DXGDEVICE *v39; // [rsp+118h] [rbp+18h]
  char v40; // [rsp+120h] [rbp+20h]

  v30 = -1;
  v31 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v32 = 1;
    v30 = 3007;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 3007);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 3007);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  v7 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v6);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 1523;
    v10 = PsGetCurrentProcess(v9);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v10,
      0LL,
      0LL,
      0LL);
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v30);
    }
    return 3221225485LL;
  }
  hDevice = a1->hDevice;
  v33 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v29, hDevice, Current, &v33);
  v12 = v33;
  if ( !v33 )
  {
    WdLogSingleEntry3(2LL, -1073741811LL, a1->hDevice, v7);
    v28 = a1->hDevice;
    WdLogGlobalForLineNumber = 1533;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
      -1073741811LL,
      v28,
      v7,
      0LL,
      0LL);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v29);
    goto LABEL_9;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v34, v33);
  COREACCESS::COREACCESS((COREACCESS *)v37, *(struct DXGADAPTER *const *)(*((_QWORD *)v12 + 2) + 16LL));
  v16 = (struct DXGADAPTER *)*((_QWORD *)v12 + 237);
  if ( !v16 )
    v16 = *(struct DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL);
  COREACCESS::COREACCESS((COREACCESS *)v38, v16);
  v39 = v12;
  v17 = *((_QWORD *)v12 + 237);
  if ( v17 == *(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) || (v40 = 1, !v17) )
    v40 = 0;
  if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v36, 0LL) >= 0 )
  {
    v22 = DXGDEVICE::Unlock(v12, a1, 0);
    v24 = v22;
    if ( v22 < 0 )
    {
      WdLogSingleEntry3(2LL, v22, v12, v7);
      WdLogGlobalForLineNumber = 1557;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"0x%I64x DxgkCddUnlock failed 0x%I64x 0x%I64x",
        v24,
        (__int64)v12,
        v7,
        0LL,
        0LL);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v38, v23);
    COREACCESS::~COREACCESS((COREACCESS *)v37, v25);
    if ( v35 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v34 + 136));
      KeLeaveCriticalRegion();
    }
    if ( v29 && _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v29 + 2), v29);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v30);
    return (unsigned int)v24;
  }
  else
  {
    COREACCESS::~COREACCESS((COREACCESS *)v38, v18);
    COREACCESS::~COREACCESS((COREACCESS *)v37, v19);
    if ( v35 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v34 + 136));
      KeLeaveCriticalRegion();
    }
    if ( v29 && _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v29 + 2), v29);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v30);
    return 0LL;
  }
}
