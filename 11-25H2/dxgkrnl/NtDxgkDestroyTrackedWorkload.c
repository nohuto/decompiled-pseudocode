/*
 * XREFs of NtDxgkDestroyTrackedWorkload @ 0x1401FDE20
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ @ 0x14007939C (-Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x1401FC2F0 (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x1401FC660 (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtDxgkDestroyTrackedWorkload(DXGTRACKEDWORKLOAD *a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rdi
  unsigned int v4; // esi
  unsigned int *v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DXGPROCESS *Current; // rdi
  __int64 v11; // r9
  const char *v12; // rdx
  unsigned int v13; // r9d
  unsigned int v14; // r14d
  __int64 v15; // r11
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r8
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // r8
  DXGTRACKEDWORKLOAD *v23; // [rsp+50h] [rbp-128h] BYREF
  unsigned int v24[2]; // [rsp+58h] [rbp-120h] BYREF
  int v25; // [rsp+60h] [rbp-118h] BYREF
  __int64 v26; // [rsp+68h] [rbp-110h]
  char v27; // [rsp+70h] [rbp-108h]
  struct DXGDEVICE *v28; // [rsp+78h] [rbp-100h] BYREF
  DXGTRACKEDWORKLOAD *v29[2]; // [rsp+80h] [rbp-F8h] BYREF
  _BYTE v30[16]; // [rsp+90h] [rbp-E8h] BYREF
  _BYTE v31[32]; // [rsp+A0h] [rbp-D8h] BYREF
  _BYTE v32[160]; // [rsp+C0h] [rbp-B8h] BYREF

  v3 = (unsigned int *)a1;
  v23 = a1;
  v4 = 0;
  v25 = -1;
  v26 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 2207;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2207);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 2207);
  *(_QWORD *)v24 = 0LL;
  v5 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v5 = (unsigned int *)MmUserProbeAddress;
  v6 = *v5;
  if ( *v5 < 8 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 375;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit, v8, v25);
    }
    return 3221225485LL;
  }
  if ( v6 > 8 )
    v6 = 8;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v24, v3, v6);
  v28 = 0LL;
  v23 = 0LL;
  Current = DXGPROCESS::GetCurrent();
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE((DXGTRACKEDWORKLOADBYHANDLE *)v29, v24[1], Current, &v23, &v28);
  if ( !v23 )
  {
    v4 = -1073741811;
    WdLogSingleEntry1(3LL, v24[1]);
    WdLogGlobalForLineNumber = 404;
LABEL_18:
    DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v29);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v25);
    return v4;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30, v28);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v32, (__int64)v28, 2, v11, 0);
  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v32, v12);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v31, Current);
  v13 = (v24[1] >> 6) & 0xFFFFFF;
  v14 = *((_DWORD *)Current + 74);
  if ( v13 < v14
    && (v15 = *((_QWORD *)Current + 35), ((v24[1] >> 25) & 0x60) == (*(_BYTE *)(v15 + 16LL * v13 + 8) & 0x60))
    && (*(_DWORD *)(v15 + 16LL * v13 + 8) & 0x2000) == 0
    && (*(_DWORD *)(v15 + 16LL * v13 + 8) & 0x1F) == 0x13 )
  {
    v16 = *(_QWORD *)(v15 + 16LL * v13);
  }
  else
  {
    v16 = 0LL;
  }
  if ( v16 )
  {
    if ( v13 < v14 )
    {
      v19 = *((_QWORD *)Current + 35);
      v20 = *(_DWORD *)(v19 + 16LL * v13 + 8);
      if ( ((v24[1] >> 25) & 0x60) == (*(_BYTE *)(v19 + 16LL * v13 + 8) & 0x60)
        && (v20 & 0x2000) == 0
        && (v20 & 0x1F) != 0 )
      {
        *(_DWORD *)(v19 + 16LL * ((v24[1] >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v31);
    if ( DXGTRACKEDWORKLOAD::Release(v23) != 1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 436;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"ref == 1", 436LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
    goto LABEL_18;
  }
  WdLogSingleEntry1(3LL, v24[1]);
  WdLogGlobalForLineNumber = 424;
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v31);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
  DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v29);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v25);
  return 0LL;
}
