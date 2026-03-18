/*
 * XREFs of DxgkTrimProcessCommitment @ 0x1403ED910
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x140038420 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x140296CF8 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x140296D14 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x140298BC0 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14029AE64 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DxgkTrimProcessCommitment(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v4; // rax
  size_t v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r8
  const void *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGPROCESS *Process; // rax
  struct DXGGLOBAL *Global; // rax
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+28h] [rbp-D0h]
  char v22; // [rsp+30h] [rbp-C8h]
  unsigned int v23; // [rsp+38h] [rbp-C0h]
  void *v24[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v25; // [rsp+50h] [rbp-A8h]
  __int64 v26; // [rsp+60h] [rbp-98h]
  struct DXGPROCESS *v27; // [rsp+68h] [rbp-90h] BYREF
  int v28; // [rsp+70h] [rbp-88h]
  int v29; // [rsp+74h] [rbp-84h]
  __int64 v30; // [rsp+78h] [rbp-80h]
  __int64 v31; // [rsp+80h] [rbp-78h]
  _BYTE v32[80]; // [rsp+90h] [rbp-68h] BYREF

  v20 = -1;
  v21 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2210;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2210);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 2210);
  *(_OWORD *)v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v4 = (unsigned int *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (unsigned int *)MmUserProbeAddress;
  v23 = *v4;
  v5 = v23;
  if ( v23 >= 0x28 )
  {
    if ( v23 > 0x28 )
      v5 = 40LL;
    v23 = v5;
    v9 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v24, v9, v5);
    if ( (v25 & 0xFFFFFFFC) != 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1033;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
      if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v20);
      return 3221225485LL;
    }
    else
    {
      DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v32, v24[1], 0x2000);
      v12 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v32, 1);
      if ( v12 >= 0 )
      {
        Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v32);
        v29 = 0;
        v31 = 0LL;
        v27 = Process;
        v28 = v25;
        v30 = *((_QWORD *)&v25 + 1);
        Global = DXGGLOBAL::GetGlobal();
        DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)Global,
          (__int64 (__fastcall *)(_QWORD *, __int64))DxgkTrimProcessCommitmentAdapterCallback,
          (__int64)&v27,
          2);
        v17 = (_QWORD *)(a1 + 32);
        if ( a1 + 32 >= MmUserProbeAddress )
          v17 = (_QWORD *)MmUserProbeAddress;
        *v17 = v31;
        DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v32);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
        if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v20);
        return 0LL;
      }
      else
      {
        WdLogSingleEntry1(3LL, v24[1]);
        WdLogGlobalForLineNumber = 1046;
        DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v32);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
        if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v20);
        return (unsigned int)v12;
      }
    }
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1011;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit, v7, v20);
    }
    return 3221225485LL;
  }
}
