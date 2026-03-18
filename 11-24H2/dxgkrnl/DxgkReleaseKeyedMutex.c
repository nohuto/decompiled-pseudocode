/*
 * XREFs of DxgkReleaseKeyedMutex @ 0x1401F5C00
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x140036FE4 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ??1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ @ 0x140042294 (--1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z @ 0x1402B2FF8 (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z.c)
 */

__int64 __fastcall DxgkReleaseKeyedMutex(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // rbx
  struct _KTHREAD **Current; // rdi
  struct DXGKEYEDMUTEX *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  size_t Size; // [rsp+28h] [rbp-80h]
  int v14; // [rsp+50h] [rbp-58h] BYREF
  __int64 v15; // [rsp+58h] [rbp-50h]
  char v16; // [rsp+60h] [rbp-48h]
  struct DXGKEYEDMUTEX *v17; // [rsp+68h] [rbp-40h] BYREF
  DXGKEYEDMUTEX *v18; // [rsp+70h] [rbp-38h] BYREF
  unsigned int v19[4]; // [rsp+78h] [rbp-30h] BYREF
  unsigned __int64 v20; // [rsp+88h] [rbp-20h]

  v3 = (const void *)a1;
  v14 = -1;
  v15 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v16 = 1;
    v14 = 2055;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2055);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 2055);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 3940;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_11:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
    if ( v16 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit, v7, v14);
    }
    return 3221225485LL;
  }
  *(_OWORD *)v19 = 0LL;
  v20 = 0LL;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v19, v3, 0x18uLL);
  v17 = 0LL;
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&v18, v19[0], Current, &v17);
  v5 = v17;
  if ( !v17 )
  {
    WdLogSingleEntry2(3LL, v19[0], -1073741811LL);
    WdLogGlobalForLineNumber = 3965;
    DXGKEYEDMUTEXBYHANDLE::~DXGKEYEDMUTEXBYHANDLE(&v18);
    goto LABEL_11;
  }
  LODWORD(Size) = 0;
  v9 = DXGKEYEDMUTEX::ReleaseSync(v17, v19[0], *(unsigned __int64 *)&v19[2], v20, 0LL, Size, 1);
  v10 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry3(2LL, v19[0], v5, v9);
    WdLogGlobalForLineNumber = 3983;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"hKeyedMutex = 0x%I64x failed to release pKeyedMutex 0x%I64x returning 0x%I64x",
      v19[0],
      (__int64)v5,
      v10,
      0LL,
      0LL);
  }
  DXGKEYEDMUTEXBYHANDLE::~DXGKEYEDMUTEXBYHANDLE(&v18);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v14);
  return (unsigned int)v10;
}
