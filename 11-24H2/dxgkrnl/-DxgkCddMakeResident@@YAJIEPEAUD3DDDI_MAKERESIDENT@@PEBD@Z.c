/*
 * XREFs of ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEBD@Z @ 0x14040ECA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400313D0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140038CCC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x14003B7CC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     Feature_4078915896__private_IsEnabledDeviceUsageNoInline @ 0x14006B7A8 (Feature_4078915896__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?AllocateElements@?$PagedPoolArray@I$03@@QEAAPEAII@Z @ 0x1401B3C30 (-AllocateElements@-$PagedPoolArray@I$03@@QEAAPEAII@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z @ 0x1402A7570 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z.c)
 *     ??1?$PagedPoolArray@I$03@@QEAA@XZ @ 0x140371968 (--1-$PagedPoolArray@I$03@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkCddMakeResident(__int64 a1, char a2, struct D3DDDI_MAKERESIDENT *a3, const char *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 CurrentProcess; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  struct DXGDEVICE *v15; // rbx
  __int64 v16; // r9
  int v17; // eax
  unsigned int v18; // esi
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int NumDifferentPhysicalAdapters; // eax
  const D3DKMT_HANDLE *v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // r8
  D3DKMT_HANDLE v26; // ebx
  unsigned int v27; // eax
  __int64 v28; // r8
  int v29; // ecx
  struct _EX_RUNDOWN_REF *v30; // rdx
  ULONG_PTR Count; // rdi
  UINT v32; // ebx
  __int64 i; // rdx
  __int64 v34; // rcx
  unsigned int ResidentInternal; // ebx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+58h] [rbp-A8h]
  char v42; // [rsp+60h] [rbp-A0h]
  _BYTE v43[8]; // [rsp+68h] [rbp-98h] BYREF
  struct _EX_RUNDOWN_REF *v44; // [rsp+70h] [rbp-90h] BYREF
  struct DXGDEVICE *v45; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v46[16]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v47[16]; // [rsp+90h] [rbp-70h] BYREF
  void *v48[3]; // [rsp+A0h] [rbp-60h] BYREF
  UINT v49; // [rsp+B8h] [rbp-48h]
  _BYTE v50[160]; // [rsp+C0h] [rbp-40h] BYREF

  v40 = -1;
  v5 = (unsigned int)a1;
  v41 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v42 = 1;
    v40 = 3060;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, (__int64)a3, 3060);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v40, 3060);
  v48[0] = 0LL;
  v49 = 0;
  if ( !a2 )
    goto LABEL_39;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v8);
  v11 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v10);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 3486;
    v14 = PsGetCurrentProcess(v13);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v14,
      0LL,
      0LL,
      0LL);
LABEL_46:
    PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(v48);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( v42 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v38, (__int64)&EventProfilerExit, v39, v40);
    }
    return 3221225485LL;
  }
  v45 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v43, v5, Current, &v45);
  v15 = v45;
  if ( !v45 )
  {
    WdLogSingleEntry3(2LL, -1073741811LL, v5, v11);
    WdLogGlobalForLineNumber = 3499;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
      -1073741811LL,
      v5,
      v11,
      0LL,
      0LL);
LABEL_45:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v43);
    goto LABEL_46;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v46, v45);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v50, (__int64)v15, 0, v16, 0);
  v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v50, 0LL);
  v18 = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry3(4LL, v17, v15, v11);
    WdLogGlobalForLineNumber = 3515;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v46);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v43);
    PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(v48);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v40);
    return v18;
  }
  NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL));
  PagedPoolArray<unsigned int,4>::AllocateElements((__int64 *)v48, NumDifferentPhysicalAdapters);
  v23 = (const D3DKMT_HANDLE *)v48[0];
  if ( !v48[0] )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3525;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to allocation allocation array",
      3525LL,
      0LL,
      0LL,
      0LL,
      0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v46);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v43);
    PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(v48);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v40);
    return 3221225495LL;
  }
  v26 = *a3->AllocationList;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 248));
  v27 = (v26 >> 6) & 0xFFFFFF;
  if ( v27 < *(_DWORD *)(v11 + 296) )
  {
    v28 = *(_QWORD *)(v11 + 280);
    if ( ((v26 >> 25) & 0x60) == (*(_BYTE *)(v28 + 16LL * v27 + 8) & 0x60)
      && (*(_DWORD *)(v28 + 16LL * v27 + 8) & 0x2000) == 0 )
    {
      v29 = *(_DWORD *)(v28 + 16LL * v27 + 8) & 0x1F;
      if ( v29 )
      {
        if ( v29 == 5 )
        {
          v30 = *(struct _EX_RUNDOWN_REF **)(v28 + 16LL * v27);
          goto LABEL_27;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v30 = 0LL;
LABEL_27:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v44, v30);
  _InterlockedDecrement((volatile signed __int32 *)(v11 + 264));
  ExReleasePushLockSharedEx(v11 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v44 )
  {
    WdLogSingleEntry2(3LL, *a3->AllocationList, -1073741811LL);
    WdLogGlobalForLineNumber = 3537;
LABEL_44:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v44);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v46);
    goto LABEL_45;
  }
  Count = v44[5].Count;
  v32 = 0;
  if ( Count )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v47, (struct DXGFASTMUTEX *const)(Count + 80), 0);
    if ( (unsigned int)Feature_4078915896__private_IsEnabledDeviceUsageNoInline() )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v47);
    for ( i = *(_QWORD *)(Count + 24); ; i = *(_QWORD *)(i + 64) )
    {
      if ( !i )
      {
        a3->AllocationList = v23;
        a3->NumAllocations = v32;
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v47);
        goto LABEL_38;
      }
      if ( v32 >= v49 )
        break;
      v34 = v32++;
      v23[v34] = *(_DWORD *)(i + 16);
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3557;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Allocation index exceeds number of allocations in the array",
      3557LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v47);
    goto LABEL_44;
  }
LABEL_38:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v44);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v46);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v43);
LABEL_39:
  ResidentInternal = DxgkMakeResidentInternal(a3, 0, a4);
  PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(v48);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v36, (__int64)&EventProfilerExit, v37, v40);
  return ResidentInternal;
}
