/*
 * XREFs of NtDxgkUpdateTrackedWorkload @ 0x1401FEAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140015280 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x140029BB0 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002D660 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x1401FC2F0 (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x1401FC660 (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1401FCD68 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 *     ?ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x1401FD624 (-ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ.c)
 *     ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD@@_K@Z @ 0x1401FD8B4 (-UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkGetDeviceStateInternal @ 0x1402A4C80 (DxgkGetDeviceStateInternal.c)
 */

__int64 __fastcall NtDxgkUpdateTrackedWorkload(struct DXGDEVICE *a1)
{
  unsigned int *v2; // rax
  size_t v3; // r8
  const void *v5; // rdx
  struct DXGPROCESS *Current; // rax
  DXGTRACKEDWORKLOAD *v7; // rbx
  __int64 v8; // rdi
  struct DXGDEVICE *v9; // rsi
  __int64 v10; // r9
  int v11; // eax
  struct COREDEVICEACCESS *v12; // r8
  unsigned __int64 *v13; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // r15
  int DeviceStateInternal; // eax
  struct DXGDEVICE *v17; // rdx
  int v18; // eax
  void *v19; // rcx
  DXGTRACKEDWORKLOAD *v20[2]; // [rsp+50h] [rbp-468h] BYREF
  int Src; // [rsp+60h] [rbp-458h] BYREF
  _BYTE v22[16]; // [rsp+68h] [rbp-450h] BYREF
  DXGTRACKEDWORKLOAD *v23; // [rsp+78h] [rbp-440h] BYREF
  struct DXGDEVICE *v24[2]; // [rsp+80h] [rbp-438h] BYREF
  struct DXGDEVICE *v25; // [rsp+90h] [rbp-428h] BYREF
  int v26; // [rsp+98h] [rbp-420h]
  _BYTE v27[24]; // [rsp+A0h] [rbp-418h] BYREF
  _OWORD v28[2]; // [rsp+B8h] [rbp-400h] BYREF
  __int128 v29; // [rsp+D8h] [rbp-3E0h]
  __int64 v30; // [rsp+E8h] [rbp-3D0h]
  _BYTE v31[600]; // [rsp+F0h] [rbp-3C8h] BYREF
  _BYTE v32[160]; // [rsp+350h] [rbp-168h] BYREF
  _BYTE v33[160]; // [rsp+3F0h] [rbp-C8h] BYREF

  v24[1] = a1;
  memset(v31, 0, sizeof(v31));
  v2 = (unsigned int *)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (unsigned int *)MmUserProbeAddress;
  v3 = *v2;
  if ( (unsigned int)v3 < 0x258 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 568;
    return 3221225485LL;
  }
  if ( (unsigned int)v3 > 0x258 )
    v3 = 600LL;
  v5 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v5 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v31, v5, v3);
  v24[0] = 0LL;
  v23 = 0LL;
  Current = DXGPROCESS::GetCurrent();
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
    (DXGTRACKEDWORKLOADBYHANDLE *)v20,
    *(unsigned int *)&v31[4],
    Current,
    &v23,
    v24);
  v7 = v23;
  if ( v23 )
  {
    v9 = v24[0];
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v22,
      v24[0]);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v27,
      *(struct DXGADAPTER **)(*((_QWORD *)v9 + 2) + 16LL),
      1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v32, (__int64)v9, 0, v10, 0);
    v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v32, 0LL);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v13 = (unsigned __int64 *)&v31[80];
      if ( *((_DWORD *)v7 + 21) )
        v13 = 0LL;
      LODWORD(v8) = DXGTRACKEDWORKLOAD::ProcessActiveInstancePairs(v7, v9, v12, *(unsigned __int64 *)&v31[48], v13);
      if ( (int)v8 < 0 )
        goto LABEL_14;
      v15 = 0LL;
      if ( *((_DWORD *)v7 + 286) == 1 )
      {
        memset(v28, 0, sizeof(v28));
        v29 = 0LL;
        v30 = 0LL;
        LODWORD(v28[0]) = *((_DWORD *)v9 + 117);
        DWORD1(v28[0]) = 4;
        DeviceStateInternal = DxgkGetDeviceStateInternal(v28, 0LL);
        LODWORD(v8) = DeviceStateInternal;
        if ( DeviceStateInternal < 0 )
        {
          WdLogSingleEntry1(3LL, DeviceStateInternal);
          WdLogGlobalForLineNumber = 631;
          goto LABEL_14;
        }
        v15 = (unsigned int)(v29 + 1);
      }
      v25 = v9;
      v26 = 0;
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v33, (__int64)v9, 0, v14, 0);
      if ( *((_DWORD *)v7 + 286) == 1
        && (DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v25),
            v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v33, 0LL),
            v8 = v18,
            v18 < 0) )
      {
        WdLogSingleEntry2(2LL, v9, v18);
        WdLogGlobalForLineNumber = 648;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Device 0x%I64x: Failed to acquire device access, returning 0x%I64x",
          (__int64)v9,
          v8,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        LODWORD(v8) = DXGTRACKEDWORKLOAD::UpdateTrackedWorkload(
                        v7,
                        v17,
                        (const struct _D3DKMT_UPDATETRACKEDWORKLOAD *)v31,
                        v15);
        if ( (int)v8 >= 0 )
        {
          DXGTRACKEDWORKLOAD::ReportStats(v7);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v25);
          Src = 1;
          v19 = (char *)a1 + 592;
          if ( (unsigned __int64)a1 + 592 >= MmUserProbeAddress )
            v19 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v19, &Src, 4uLL);
          goto LABEL_14;
        }
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v25);
    }
    else
    {
      WdLogSingleEntry2(2LL, v9, v11);
      WdLogGlobalForLineNumber = 606;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Device 0x%I64x: Failed to acquire device access, returning 0x%I64x",
        (__int64)v9,
        v8,
        0LL,
        0LL,
        0LL);
    }
LABEL_14:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v22);
    goto LABEL_11;
  }
  LODWORD(v8) = -1073741811;
LABEL_11:
  DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v20);
  return (unsigned int)v8;
}
