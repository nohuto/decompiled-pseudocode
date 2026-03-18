/*
 * XREFs of DxgkReleaseKeyedMutex2 @ 0x1402B2CE0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x140036FE4 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1400422B4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z @ 0x1402B2FF8 (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z.c)
 */

__int64 __fastcall DxgkReleaseKeyedMutex2(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // rbx
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rdi
  struct DXGKEYEDMUTEX *v6; // rdi
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  size_t Size; // [rsp+28h] [rbp-80h]
  int v15; // [rsp+50h] [rbp-58h] BYREF
  __int64 v16; // [rsp+58h] [rbp-50h]
  char v17; // [rsp+60h] [rbp-48h]
  unsigned int v18[4]; // [rsp+68h] [rbp-40h] BYREF
  void *Src[2]; // [rsp+78h] [rbp-30h]
  size_t v20; // [rsp+88h] [rbp-20h]
  struct DXGKEYEDMUTEX *v21; // [rsp+B8h] [rbp+10h] BYREF
  DXGKEYEDMUTEX *v22; // [rsp+C0h] [rbp+18h] BYREF

  v3 = (const void *)a1;
  v15 = -1;
  v16 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 2069;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2069);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 2069);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  if ( Current )
  {
    *(_OWORD *)v18 = 0LL;
    *(_OWORD *)Src = 0LL;
    v20 = 0LL;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v18, v3, 0x28uLL);
    v21 = 0LL;
    DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&v22, v18[0], Current, &v21);
    v6 = v21;
    if ( v21 )
    {
      LODWORD(Size) = v20;
      v7 = DXGKEYEDMUTEX::ReleaseSync(
             v21,
             v18[0],
             *(unsigned __int64 *)&v18[2],
             (unsigned __int64)Src[0],
             Src[1],
             Size,
             1);
      v8 = v7;
      if ( v7 < 0 )
      {
        WdLogSingleEntry3(2LL, v18[0], v6, v7);
        WdLogGlobalForLineNumber = 4044;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"hKeyedMutex = 0x%I64x failed to release pKeyedMutex 0x%I64x returning 0x%I64x",
          v18[0],
          (__int64)v6,
          v8,
          0LL,
          0LL);
      }
      if ( v22 )
        DXGKEYEDMUTEX::ReleaseReference(v22);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
      if ( v17 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v15);
      }
      return (unsigned int)v8;
    }
    WdLogSingleEntry2(3LL, v18[0], -1073741811LL);
    WdLogGlobalForLineNumber = 4026;
    if ( v22 )
      DXGKEYEDMUTEX::ReleaseReference(v22);
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 4001;
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
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v15);
  return 3221225485LL;
}
