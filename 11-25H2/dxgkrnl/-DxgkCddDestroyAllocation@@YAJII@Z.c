/*
 * XREFs of ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1403334B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14001C1A0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140038EBC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x140333A6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     DxgkDestroyClientAllocation @ 0x140349ACC (DxgkDestroyClientAllocation.c)
 */

__int64 __fastcall DxgkCddDestroyAllocation(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  struct DXGDEVICE *v9; // rbx
  char *v10; // rdi
  const char *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // r8
  unsigned int v17; // edx
  __int64 v18; // rdi
  __int64 v19; // rbx
  unsigned int v20; // ecx
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  struct DXGDEVICE *v28; // rbx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  __int64 CurrentProcess; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  struct DXGDEVICE *v34; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v35; // [rsp+58h] [rbp-A8h] BYREF
  int v36; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+68h] [rbp-98h]
  char v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h] BYREF
  char v40; // [rsp+80h] [rbp-80h]
  _BYTE v41[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v42; // [rsp+90h] [rbp-70h]
  char v43; // [rsp+98h] [rbp-68h]
  _BYTE v44[32]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v45[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v46[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v47; // [rsp+D0h] [rbp-30h]
  __int64 v48; // [rsp+D8h] [rbp-28h]
  char v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+E8h] [rbp-18h]
  _BYTE v51[8]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+118h] [rbp+18h]
  char v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h]
  struct DXGDEVICE *v56; // [rsp+148h] [rbp+48h]
  char v57; // [rsp+150h] [rbp+50h]

  v3 = a2;
  v4 = (unsigned int)a1;
  v36 = -1;
  v37 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v38 = 1;
    v36 = 3018;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 3018);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v36, 3018);
  Current = DXGPROCESS::GetCurrent(v5);
  v8 = (__int64)Current;
  if ( Current )
  {
    v34 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v35, v4, Current, &v34);
    v9 = v34;
    if ( !v34 )
    {
      WdLogSingleEntry3(2LL, -1073741811LL, v4, v8);
      WdLogGlobalForLineNumber = 1219;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
        -1073741811LL,
        v4,
        v8,
        0LL,
        0LL);
LABEL_34:
      if ( v35 && _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
      goto LABEL_37;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v39, v34);
    v10 = (char *)v9 + 16;
    v43 = 0;
    v42 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v41);
    v12 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL);
    v48 = v12;
    v49 = 0;
    v50 = 0LL;
    if ( v12 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24));
      v9 = v34;
      v47 = -1LL;
    }
    v13 = *(_QWORD *)(*(_QWORD *)v10 + 16LL);
    v53 = v13;
    v54 = 0;
    v55 = 0LL;
    if ( v13 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v13 + 24));
      v9 = v34;
      v52 = -1LL;
    }
    v56 = v9;
    v57 = 0;
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v45, v11);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 16LL) + 200LL) == 4 )
      goto LABEL_24;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v44,
      (struct DXGPROCESS *)v8);
    v15 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
    if ( v15 < *(_DWORD *)(v8 + 296)
      && (v16 = *(_QWORD *)(v8 + 280),
          v17 = *(_DWORD *)(v16 + 16LL * v15 + 8),
          (unsigned int)v3 >> 30 == ((v17 >> 5) & 3))
      && (v17 & 0x2000) == 0
      && (v17 & 0x1F) != 0 )
    {
      v18 = v3;
      if ( (*(_BYTE *)(v16 + 16 * ((v3 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 5 )
      {
        v19 = *(_QWORD *)(v16 + 16 * ((v3 >> 6) & 0xFFFFFF));
        if ( v19 )
        {
          if ( v15 < *(_DWORD *)(v8 + 296) )
          {
            v20 = *(_DWORD *)(v16 + 16LL * v15 + 8);
            if ( (unsigned int)v3 >> 30 == ((v20 >> 5) & 3) && (v20 & 0x2000) == 0 && (v20 & 0x1F) != 0 )
              *(_DWORD *)(v16 + 16 * ((v3 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
          }
        }
        goto LABEL_21;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
    else
    {
      v18 = v3;
    }
    v19 = 0LL;
LABEL_21:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v44);
    if ( v19 )
    {
      v21 = *((unsigned int *)v34 + 152);
      if ( (_DWORD)v21 == 4 )
        DxgkDestroyClientAllocation(v21, v34, 0LL, 0LL, *(_QWORD *)(v19 + 40));
      else
        DXGDEVICE::DestroyAllocationInternal(
          v34,
          0,
          0LL,
          *(struct DXGRESOURCE **)(v19 + 40),
          (struct COREDEVICEACCESS *)v45,
          (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
LABEL_24:
      COREACCESS::~COREACCESS((COREACCESS *)v51, v14);
      COREACCESS::~COREACCESS((COREACCESS *)v46, v22);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v41);
      if ( v40 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v39 + 136));
        KeLeaveCriticalRegion();
      }
      if ( v35 && _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
      if ( v38 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v36);
      }
      return 0LL;
    }
    v28 = v34;
    WdLogSingleEntry3(2LL, *(_QWORD *)(*((_QWORD *)v34 + 2) + 16LL), v34, v18);
    WdLogGlobalForLineNumber = 1251;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid allocation is passed to DxgkCddDestroyAllocation. DXGADAPTER 0x%I64x DXGDEVICE 0x%I64x DXGALLOCATION 0x%I64x",
      *(_QWORD *)(*((_QWORD *)v28 + 2) + 16LL),
      (__int64)v28,
      v18,
      0LL,
      0LL);
    COREACCESS::~COREACCESS((COREACCESS *)v51, v29);
    COREACCESS::~COREACCESS((COREACCESS *)v46, v30);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v41);
    if ( v40 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v39 + 136));
      KeLeaveCriticalRegion();
    }
    goto LABEL_34;
  }
  CurrentProcess = PsGetCurrentProcess(v7);
  WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
  WdLogGlobalForLineNumber = 1210;
  v33 = PsGetCurrentProcess(v32);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"0x%I64x Unexpected process 0x%I64x",
    -1073741811LL,
    v33,
    0LL,
    0LL,
    0LL);
LABEL_37:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v36);
  return 3221225485LL;
}
