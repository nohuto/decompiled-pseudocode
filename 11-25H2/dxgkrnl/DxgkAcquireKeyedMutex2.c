/*
 * XREFs of DxgkAcquireKeyedMutex2 @ 0x1402FE130
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1402FE4BC (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 */

__int64 __fastcall DxgkAcquireKeyedMutex2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  const void *v5; // rdx
  union _LARGE_INTEGER *v6; // r9
  const void *v7; // rdx
  int v8; // esi
  void *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // [rsp+50h] [rbp-58h] BYREF
  __int64 v16; // [rsp+58h] [rbp-50h]
  char v17; // [rsp+60h] [rbp-48h]
  unsigned int v18[4]; // [rsp+68h] [rbp-40h] BYREF
  __int128 Src; // [rsp+78h] [rbp-30h] BYREF
  void *v20[2]; // [rsp+88h] [rbp-20h]
  union _LARGE_INTEGER v21; // [rsp+B8h] [rbp+10h] BYREF

  v15 = -1;
  v16 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 2068;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2068);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 2068);
  if ( DXGPROCESS::GetCurrent(v4) )
  {
    *(_OWORD *)v18 = 0LL;
    Src = 0LL;
    *(_OWORD *)v20 = 0LL;
    v5 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v5 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v18, v5, 0x30uLL);
    v6 = 0LL;
    v21.QuadPart = 0LL;
    v7 = (const void *)Src;
    if ( (_QWORD)Src )
    {
      if ( (unsigned __int64)Src >= MmUserProbeAddress )
        v7 = (const void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(&v21, v7, 8uLL);
      v6 = &v21;
    }
    v8 = DXGKEYEDMUTEX::AcquireSync(
           v18[0],
           *(unsigned __int64 *)&v18[2],
           0,
           v6,
           (DXGKEYEDMUTEX *)((char *)&Src + 8),
           v20[0],
           (unsigned int)v20[1],
           0LL,
           1);
    if ( v8 >= 0 )
    {
      v9 = (void *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v9 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v9, (char *)&Src + 8, 8uLL);
    }
    if ( v8 < 0 )
    {
      WdLogSingleEntry2(2LL, v18[0], v8);
      WdLogGlobalForLineNumber = 3908;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"hDevice 0x%I64x failed to acquire hKeyedMutex 0x%I64x returning 0x%I64x",
        v18[0],
        v8,
        0LL,
        0LL,
        0LL);
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
    if ( v17 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v15);
    }
    return (unsigned int)v8;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 3838;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
    if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v15);
    return 3221225485LL;
  }
}
