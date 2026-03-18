/*
 * XREFs of DxgkSetProcessSchedulingPriorityBand @ 0x1401E9770
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x140038794 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z @ 0x1401E7FFC (-SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x14028A734 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x14028A750 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x14030A940 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1403D4508 (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 */

__int64 __fastcall DxgkSetProcessSchedulingPriorityBand(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbx
  struct DXGPROCESS *Current; // rax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int *v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGPROCESS *Process; // rax
  int v17; // eax
  int v18; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+28h] [rbp-A0h]
  char v20; // [rsp+30h] [rbp-98h]
  unsigned int v21; // [rsp+38h] [rbp-90h]
  void *v22[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v23; // [rsp+50h] [rbp-78h]
  _BYTE v24[80]; // [rsp+60h] [rbp-68h] BYREF

  v3 = (unsigned int *)a1;
  v18 = -1;
  v19 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v20 = 1;
    v18 = 2140;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2140);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 2140);
  if ( !CheckTokenForResourceManagerAccess() )
  {
    Current = DXGPROCESS::GetCurrent();
    v5 = -1073741790;
    WdLogSingleEntry2(3LL, Current, -1073741790LL);
    WdLogGlobalForLineNumber = 4612;
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( v20 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit, v7, v18);
    }
    return v5;
  }
  if ( !*((_DWORD *)DXGGLOBAL::GetGlobal() + 408) )
  {
    v5 = -1073741823;
    WdLogSingleEntry1(3LL, -1073741823LL);
    WdLogGlobalForLineNumber = 4618;
    goto LABEL_7;
  }
  *(_OWORD *)v22 = 0LL;
  v23 = 0LL;
  v9 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v9 = (unsigned int *)MmUserProbeAddress;
  v21 = *v9;
  v10 = v21;
  if ( v21 < 0x18 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 4642;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v18);
    return 3221225485LL;
  }
  if ( v21 > 0x18 )
    v10 = 24;
  v21 = v10;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v22, v3, v10);
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v24, v22[1], 0x2000u);
  v13 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v24, 0);
  v5 = v13;
  if ( v13 < 0 )
  {
    WdLogSingleEntry2(3LL, v22[1], v13);
    WdLogGlobalForLineNumber = 4670;
LABEL_26:
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v24);
    goto LABEL_7;
  }
  if ( (unsigned int)v23 <= 1 )
  {
    if ( !HIDWORD(v22[0]) )
    {
      Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v24);
      v17 = DXGPROCESS::SetProcessSchedulingPriorityBand((__int64)Process, v23);
      v5 = v17;
      if ( v17 < 0 )
      {
        WdLogSingleEntry1(3LL, v17);
        WdLogGlobalForLineNumber = 4699;
      }
      goto LABEL_26;
    }
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 4687;
  }
  else
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 4681;
  }
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v24);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v18);
  return 3221225485LL;
}
