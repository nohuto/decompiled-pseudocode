/*
 * XREFs of NtDxgkGetTrackedWorkloadStatistics @ 0x140204CA0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140031428 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x140034E08 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x140202A00 (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x140202D70 (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 *     ?GetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKEDWORKLOADSTATISTICS@@@Z @ 0x140203334 (-GetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKED.c)
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x140203478 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 *     ?ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x140203D34 (-ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtDxgkGetTrackedWorkloadStatistics(struct DXGDEVICE *a1)
{
  unsigned int *v2; // rax
  size_t v3; // r8
  const void *v5; // rdx
  struct DXGPROCESS *Current; // rax
  DXGTRACKEDWORKLOAD *v7; // rbx
  __int64 v8; // rdi
  struct DXGDEVICE *v9; // r14
  __int64 v10; // r9
  int v11; // eax
  struct COREDEVICEACCESS *v12; // r8
  unsigned __int64 *v13; // rax
  struct DXGDEVICE *v14; // rdx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  struct DXGDEVICE *v18; // [rsp+50h] [rbp-348h] BYREF
  DXGTRACKEDWORKLOAD *v19[2]; // [rsp+58h] [rbp-340h] BYREF
  DXGTRACKEDWORKLOAD *v20; // [rsp+68h] [rbp-330h] BYREF
  _BYTE v21[16]; // [rsp+70h] [rbp-328h] BYREF
  _BYTE v22[592]; // [rsp+80h] [rbp-318h] BYREF
  _BYTE v23[160]; // [rsp+2D0h] [rbp-C8h] BYREF

  v18 = a1;
  memset(v22, 0, sizeof(v22));
  v2 = (unsigned int *)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (unsigned int *)MmUserProbeAddress;
  v3 = *v2;
  if ( (unsigned int)v3 >= 0x250 )
  {
    if ( (unsigned int)v3 > 0x250 )
      v3 = 592LL;
    v5 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v5 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v22, v5, v3);
    v18 = 0LL;
    v20 = 0LL;
    Current = DXGPROCESS::GetCurrent();
    DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
      (DXGTRACKEDWORKLOADBYHANDLE *)v19,
      *(unsigned int *)&v22[4],
      Current,
      &v20,
      &v18);
    v7 = v20;
    if ( v20 )
    {
      v9 = v18;
      DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v21, v18);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v23, (__int64)v9, 0, v10, 0);
      v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v23, 0LL);
      v8 = v11;
      if ( v11 >= 0 )
      {
        v13 = (unsigned __int64 *)&v22[16];
        if ( *((_DWORD *)v7 + 21) )
          v13 = 0LL;
        LODWORD(v8) = DXGTRACKEDWORKLOAD::ProcessActiveInstancePairs(v7, v9, v12, *(unsigned __int64 *)&v22[8], v13);
        if ( (int)v8 >= 0 )
        {
          LODWORD(v8) = DXGTRACKEDWORKLOAD::GetTrackedWorkloadUserStatistics(
                          v7,
                          v14,
                          (struct _D3DKMT_GETTRACKEDWORKLOADSTATISTICS *)v22);
          if ( (int)v8 >= 0 )
          {
            DXGTRACKEDWORKLOAD::ReportStats(v7);
            v15 = (char *)a1 + 536;
            if ( (unsigned __int64)a1 + 536 >= MmUserProbeAddress )
              v15 = (void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v15, &v22[536], 0x28uLL);
            v16 = (char *)a1 + 576;
            if ( (unsigned __int64)a1 + 576 >= MmUserProbeAddress )
              v16 = (void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v16, &v22[576], 8uLL);
            v17 = (char *)a1 + 584;
            if ( (unsigned __int64)a1 + 584 >= MmUserProbeAddress )
              v17 = (void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v17, &v22[584], 4uLL);
          }
        }
      }
      else
      {
        WdLogSingleEntry2(2LL, v9, v11);
        WdLogGlobalForLineNumber = 744;
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
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v23);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v21);
    }
    else
    {
      LODWORD(v8) = -1073741811;
    }
    DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v19);
    return (unsigned int)v8;
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 706;
    return 3221225485LL;
  }
}
