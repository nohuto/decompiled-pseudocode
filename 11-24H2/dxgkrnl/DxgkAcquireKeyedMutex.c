/*
 * XREFs of DxgkAcquireKeyedMutex @ 0x1401F5120
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1402B513C (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 */

__int64 __fastcall DxgkAcquireKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  const void *v7; // rdx
  union _LARGE_INTEGER *v8; // r9
  const void *v9; // rdx
  int v10; // esi
  void *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // [rsp+50h] [rbp-48h] BYREF
  __int64 v15; // [rsp+58h] [rbp-40h]
  char v16; // [rsp+60h] [rbp-38h]
  unsigned int v17[4]; // [rsp+68h] [rbp-30h] BYREF
  __int128 Src; // [rsp+78h] [rbp-20h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+10h] BYREF

  v14 = -1;
  v15 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v16 = 1;
    v14 = 2054;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2054);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 2054);
  if ( DXGPROCESS::GetCurrent() )
  {
    *(_OWORD *)v17 = 0LL;
    Src = 0LL;
    v7 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v7 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v17, v7, 0x20uLL);
    v8 = 0LL;
    v19 = 0LL;
    v9 = (const void *)Src;
    if ( (_QWORD)Src )
    {
      if ( (unsigned __int64)Src >= MmUserProbeAddress )
        v9 = (const void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(&v19, v9, 8uLL);
      v8 = (union _LARGE_INTEGER *)&v19;
    }
    v10 = DXGKEYEDMUTEX::AcquireSync(
            v17[0],
            *(unsigned __int64 *)&v17[2],
            0,
            v8,
            (DXGKEYEDMUTEX *)((char *)&Src + 8),
            0LL,
            0,
            0LL,
            1);
    if ( v10 >= 0 )
    {
      v11 = (void *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v11 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v11, (char *)&Src + 8, 8uLL);
    }
    if ( v10 < 0 )
    {
      WdLogSingleEntry2(2LL, v17[0], v10);
      WdLogGlobalForLineNumber = 3825;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"hDevice 0x%I64x failed to acquire hKeyedMutex 0x%I64x returning 0x%I64x",
        v17[0],
        v10,
        0LL,
        0LL,
        0LL);
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
    if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v14);
    return (unsigned int)v10;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 3755;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
    if ( v16 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerExit, v5, v14);
    }
    return 3221225485LL;
  }
}
