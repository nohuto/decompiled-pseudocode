/*
 * XREFs of NtDxgkResetTrackedWorkloadStatistics @ 0x1401FE8C0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140031508 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x140034ED4 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x1401FC2F0 (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x1401FC660 (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 *     ?ResetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1401FD70C (-ResetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtDxgkResetTrackedWorkloadStatistics(struct DXGDEVICE *a1)
{
  const void *v1; // rdx
  unsigned int *v2; // rax
  size_t v3; // r8
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v6; // rbx
  __int64 v7; // rdi
  struct DXGDEVICE *v8; // rsi
  __int64 v9; // r9
  int v10; // eax
  struct DXGDEVICE *v11; // rdx
  struct DXGDEVICE *v12; // [rsp+50h] [rbp-F8h] BYREF
  unsigned int v13[2]; // [rsp+58h] [rbp-F0h] BYREF
  struct DXGTRACKEDWORKLOAD *v14; // [rsp+60h] [rbp-E8h] BYREF
  DXGTRACKEDWORKLOAD *v15[2]; // [rsp+68h] [rbp-E0h] BYREF
  _BYTE v16[24]; // [rsp+78h] [rbp-D0h] BYREF
  _BYTE v17[160]; // [rsp+90h] [rbp-B8h] BYREF

  v1 = a1;
  v12 = a1;
  *(_QWORD *)v13 = 0LL;
  v2 = (unsigned int *)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (unsigned int *)MmUserProbeAddress;
  v3 = *v2;
  if ( (unsigned int)v3 >= 8 )
  {
    if ( (unsigned int)v3 > 8 )
      v3 = 8LL;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v1 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v13, v1, v3);
    v12 = 0LL;
    v14 = 0LL;
    Current = DXGPROCESS::GetCurrent();
    DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
      (DXGTRACKEDWORKLOADBYHANDLE *)v15,
      v13[1],
      Current,
      &v14,
      &v12);
    v6 = (struct _KTHREAD **)v14;
    if ( v14 )
    {
      v8 = v12;
      DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v16, v12);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v17, (__int64)v8, 0, v9, 0);
      v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v17, 0LL);
      v7 = v10;
      if ( v10 >= 0 )
      {
        LODWORD(v7) = DXGTRACKEDWORKLOAD::ResetTrackedWorkloadUserStatistics(v6, v11);
      }
      else
      {
        WdLogSingleEntry2(2LL, v8, v10);
        WdLogGlobalForLineNumber = 848;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Device 0x%I64x: Failed to acquire device access, returning 0x%I64x",
          (__int64)v8,
          v7,
          0LL,
          0LL,
          0LL);
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v17);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v16);
    }
    else
    {
      LODWORD(v7) = -1073741811;
    }
    DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v15);
    return (unsigned int)v7;
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 810;
    return 3221225485LL;
  }
}
