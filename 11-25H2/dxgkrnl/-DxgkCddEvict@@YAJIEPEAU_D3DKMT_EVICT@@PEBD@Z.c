/*
 * XREFs of ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEBD@Z @ 0x14037B150
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400314B0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140038EBC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x14003BE0C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?AllocateElements@?$PagedPoolArray@I$03@@QEAAPEAII@Z @ 0x1401B1680 (-AllocateElements@-$PagedPoolArray@I$03@@QEAAPEAII@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEBD@Z @ 0x14037B94C (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEBD@Z.c)
 *     ??1?$PagedPoolArray@I$03@@QEAA@XZ @ 0x140386F5C (--1-$PagedPoolArray@I$03@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkCddEvict(__int64 a1, char a2, struct _D3DKMT_EVICT *a3, const char *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 CurrentProcess; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  struct DXGDEVICE *v19; // rbx
  __int64 v20; // r9
  int v21; // eax
  unsigned int v22; // esi
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int NumDifferentPhysicalAdapters; // eax
  const D3DKMT_HANDLE *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // r8
  D3DKMT_HANDLE v29; // esi
  unsigned int v30; // eax
  __int64 v31; // r8
  int v32; // ecx
  struct _EX_RUNDOWN_REF *v33; // rdx
  ULONG_PTR Count; // r8
  UINT v35; // edx
  __int64 i; // r8
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+58h] [rbp-A8h]
  char v42; // [rsp+60h] [rbp-A0h]
  _BYTE v43[8]; // [rsp+68h] [rbp-98h] BYREF
  struct _EX_RUNDOWN_REF *v44; // [rsp+70h] [rbp-90h] BYREF
  struct DXGDEVICE *v45; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v46[16]; // [rsp+80h] [rbp-80h] BYREF
  void *v47; // [rsp+90h] [rbp-70h] BYREF
  char v48; // [rsp+98h] [rbp-68h] BYREF
  UINT v49; // [rsp+A8h] [rbp-58h]
  _BYTE v50[160]; // [rsp+B0h] [rbp-50h] BYREF

  v40 = -1;
  v5 = (unsigned int)a1;
  v41 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v42 = 1;
    v40 = 3061;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, (__int64)a3, 3061);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v40, 3061);
  v47 = 0LL;
  v49 = 0;
  if ( !a2 )
  {
LABEL_4:
    v9 = DxgkEvictInternal(a3, 0, a4);
    if ( v47 != &v48 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v47);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( v42 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v40);
    }
    return v9;
  }
  Current = DXGPROCESS::GetCurrent(v8);
  v15 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v14);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 3585;
    v18 = PsGetCurrentProcess(v17);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v18,
      0LL,
      0LL,
      0LL);
    goto LABEL_44;
  }
  v45 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v43, v5, Current, &v45);
  v19 = v45;
  if ( !v45 )
  {
    WdLogSingleEntry3(2LL, -1073741811LL, v5, v15);
    WdLogGlobalForLineNumber = 3594;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
      -1073741811LL,
      v5,
      v15,
      0LL,
      0LL);
LABEL_43:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v43);
LABEL_44:
    PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(&v47);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v38, (__int64)&EventProfilerExit, v39, v40);
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v46, v45);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v50, (__int64)v19, 0, v20, 0);
  v21 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v50, 0LL);
  v22 = v21;
  if ( v21 < 0 )
  {
    WdLogSingleEntry3(4LL, v21, v19, v15);
    WdLogGlobalForLineNumber = 3610;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v46);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v43);
    PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(&v47);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v40);
    return v22;
  }
  NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)v19 + 2) + 16LL));
  PagedPoolArray<unsigned int,4>::AllocateElements((__int64 *)&v47, NumDifferentPhysicalAdapters);
  v26 = (const D3DKMT_HANDLE *)v47;
  if ( v47 )
  {
    v29 = *a3->AllocationList;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v15 + 248));
    v30 = (v29 >> 6) & 0xFFFFFF;
    if ( v30 < *(_DWORD *)(v15 + 296) )
    {
      v31 = *(_QWORD *)(v15 + 280);
      if ( ((v29 >> 25) & 0x60) == (*(_BYTE *)(v31 + 16LL * v30 + 8) & 0x60)
        && (*(_DWORD *)(v31 + 16LL * v30 + 8) & 0x2000) == 0 )
      {
        v32 = *(_DWORD *)(v31 + 16LL * v30 + 8) & 0x1F;
        if ( v32 )
        {
          if ( v32 == 5 )
          {
            v33 = *(struct _EX_RUNDOWN_REF **)(v31 + 16LL * v30);
            goto LABEL_33;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v33 = 0LL;
LABEL_33:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v44, v33);
    _InterlockedDecrement((volatile signed __int32 *)(v15 + 264));
    ExReleasePushLockSharedEx(v15 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( v44 )
    {
      Count = v44[5].Count;
      v35 = 0;
      if ( Count )
      {
        for ( i = *(_QWORD *)(Count + 24); i; i = *(_QWORD *)(i + 64) )
        {
          if ( v35 >= v49 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 3646;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Allocation index exceeds number of allocations in the array",
              3646LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_42;
          }
          v37 = v35++;
          v26[v37] = *(_DWORD *)(i + 16);
        }
        a3->AllocationList = v26;
        a3->NumAllocations = v35;
      }
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v44);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v46);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v43);
      goto LABEL_4;
    }
    WdLogSingleEntry2(3LL, *a3->AllocationList, -1073741811LL);
    WdLogGlobalForLineNumber = 3632;
LABEL_42:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v44);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v46);
    goto LABEL_43;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 3620;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Failed to allocation allocation array",
    3620LL,
    0LL,
    0LL,
    0LL,
    0LL);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v46);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v43);
  PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(&v47);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v40);
  return 3221225495LL;
}
