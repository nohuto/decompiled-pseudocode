/*
 * XREFs of NtDxgkGetAvailableTrackedWorkloadIndex @ 0x140204950
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140012080 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002DDD0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x140202A00 (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x140202D70 (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 *     ?GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAIPEAH@Z @ 0x14020321C (-GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAIPEAH.c)
 *     ?ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x140203D34 (-ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtDxgkGetAvailableTrackedWorkloadIndex(struct DXGDEVICE *a1)
{
  unsigned int *v2; // rax
  size_t v3; // r8
  const void *v5; // rdx
  struct DXGPROCESS *Current; // rax
  DXGTRACKEDWORKLOAD *v7; // rsi
  __int64 v8; // rdi
  struct DXGDEVICE *v9; // r14
  __int64 v10; // r9
  int v11; // eax
  struct COREDEVICEACCESS *v12; // r8
  unsigned __int64 *v13; // rax
  void *v14; // rcx
  void *v15; // rcx
  unsigned int Src; // [rsp+50h] [rbp-348h] BYREF
  int v17; // [rsp+54h] [rbp-344h] BYREF
  DXGTRACKEDWORKLOAD *v18; // [rsp+58h] [rbp-340h] BYREF
  struct DXGDEVICE *v19[2]; // [rsp+60h] [rbp-338h] BYREF
  DXGTRACKEDWORKLOAD *v20[2]; // [rsp+70h] [rbp-328h] BYREF
  _BYTE v21[16]; // [rsp+80h] [rbp-318h] BYREF
  _BYTE v22[32]; // [rsp+90h] [rbp-308h] BYREF
  unsigned int v23[136]; // [rsp+B0h] [rbp-2E8h] BYREF
  _BYTE v24[160]; // [rsp+2D0h] [rbp-C8h] BYREF

  v19[1] = a1;
  memset(v23, 0, 0x218uLL);
  v2 = (unsigned int *)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (unsigned int *)MmUserProbeAddress;
  v3 = *v2;
  if ( (unsigned int)v3 < 0x218 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 470;
    return 3221225485LL;
  }
  if ( (unsigned int)v3 > 0x218 )
    v3 = 536LL;
  v5 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v5 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v23, v5, v3);
  v19[0] = 0LL;
  v18 = 0LL;
  Current = DXGPROCESS::GetCurrent();
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE((DXGTRACKEDWORKLOADBYHANDLE *)v20, v23[1], Current, &v18, v19);
  v7 = v18;
  if ( v18 )
  {
    Src = 0;
    v17 = 0;
    v9 = v19[0];
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v21,
      v19[0]);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v22,
      *(struct DXGADAPTER **)(*((_QWORD *)v9 + 2) + 16LL),
      1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v24, (__int64)v9, 0, v10, 0);
    v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v24, 0LL);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v13 = (unsigned __int64 *)&v23[4];
      if ( *((_DWORD *)v7 + 21) )
        v13 = 0LL;
      LODWORD(v8) = DXGTRACKEDWORKLOAD::GetAvailableIndex(v7, v9, v12, *(__int64 *)&v23[2], v13, &Src, &v17);
      if ( (int)v8 >= 0 )
      {
        DXGTRACKEDWORKLOAD::ReportStats(v7);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v24);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v21);
        v14 = (char *)a1 + 528;
        if ( (unsigned __int64)a1 + 528 >= MmUserProbeAddress )
          v14 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(v14, &Src, 4uLL);
        v15 = (char *)a1 + 532;
        if ( (unsigned __int64)a1 + 532 >= MmUserProbeAddress )
          v15 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(v15, &v17, 4uLL);
        goto LABEL_11;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, v9, v11);
      WdLogGlobalForLineNumber = 511;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Device 0x%I64x: Failed to acquire device access, returning 0x%I64x",
        (__int64)v9,
        v8,
        0LL,
        0LL,
        0LL);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v24);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v21);
  }
  else
  {
    LODWORD(v8) = -1073741811;
  }
LABEL_11:
  DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v20);
  return (unsigned int)v8;
}
