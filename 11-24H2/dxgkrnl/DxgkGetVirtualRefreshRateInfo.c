/*
 * XREFs of DxgkGetVirtualRefreshRateInfo @ 0x140291AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003E5F0 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x140293650 (DxgkAcquireSessionModeChangeLock.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x140296878 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x140298418 (DxgkReleaseSessionModeChangeLock.c)
 */

__int64 __fastcall DxgkGetVirtualRefreshRateInfo(struct _LUID a1, unsigned int a2, _DWORD *a3)
{
  __int64 v4; // r15
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v7; // rdi
  __int64 v8; // rax
  int v10; // eax
  __int64 v11; // r14
  int v12; // ebx
  __int64 v13; // r13
  __int64 v14; // r14
  _DWORD **v15; // r13
  __int64 v16; // r13
  __int64 v17; // rcx
  __int64 v18; // rdx
  char *v19; // rcx
  __int64 HighPart; // rdi
  unsigned int v21; // esi
  DXGADAPTER *v22; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v24; // [rsp+60h] [rbp-20h] BYREF
  DXGADAPTER *v25; // [rsp+68h] [rbp-18h]
  char v26; // [rsp+70h] [rbp-10h]
  struct _LUID v27; // [rsp+B0h] [rbp+30h] BYREF

  v27 = a1;
  v4 = a2;
  Global = DXGGLOBAL::GetGlobal();
  v22 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v23);
  v7 = v22;
  if ( !v22 )
  {
    WdLogSingleEntry2(3LL, a1.LowPart, v27.HighPart);
    WdLogGlobalForLineNumber = 5689;
    HighPart = v27.HighPart;
    v21 = -1073741811;
    WdLogSingleEntry3(2LL, v27.HighPart, a1.LowPart, -1073741811LL);
    WdLogGlobalForLineNumber = 7860;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkGetVirtualRefreshRateInfo function, returning 0x%I64x.",
      HighPart,
      a1.LowPart,
      -1073741811LL,
      0LL,
      0LL);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v22, 0LL);
    return v21;
  }
  v8 = *((_QWORD *)v22 + 390);
  if ( !v8 )
  {
    v21 = -1073741811;
    WdLogSingleEntry2(2LL, v22, -1073741811LL);
    WdLogGlobalForLineNumber = 7869;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Caller specified adapter 0x%I64x is not a display adapter in DxgkGetVirtualRefreshRateInfo function, returning 0x%I64x.",
      (__int64)v22,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_5:
    DXGADAPTER::ReleaseReference(v7);
    return v21;
  }
  if ( (unsigned int)v4 >= *(_DWORD *)(v8 + 96) )
  {
    v21 = -1073741811;
    WdLogSingleEntry3(2LL, v22, v4, -1073741811LL);
    WdLogGlobalForLineNumber = 7882;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Adapter 0x%I64x does not have caller specified VidPn source Id 0x%I64x in DxgkGetVirtualRefreshRateInfo function, "
       "returning 0x%I64x.",
      (__int64)v22,
      v4,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_5;
  }
  v10 = DxgkAcquireSessionModeChangeLock(0LL);
  v11 = v10;
  v12 = 1;
  LOBYTE(v27.LowPart) = v10 >= 0;
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(2LL, v10);
    WdLogGlobalForLineNumber = 7895;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v27);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v22, 0LL);
    return (unsigned int)v11;
  }
  v25 = v22;
  v26 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v24);
  if ( *((_DWORD *)v22 + 50) != 1 )
  {
    v7 = v22;
    v21 = -1073741130;
    WdLogSingleEntry2(3LL, v22, -1073741130LL);
    WdLogGlobalForLineNumber = 7908;
    goto LABEL_26;
  }
  _mm_lfence();
  v7 = v22;
  v13 = *((_QWORD *)v22 + 390);
  if ( (unsigned int)v4 >= *(_DWORD *)(v13 + 96) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 80;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"VidPnSourceId < m_NumVidPnSources",
      80LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v14 = 4024 * v4;
  v15 = *(_DWORD ***)(*(_QWORD *)(v13 + 128) + 4024 * v4 + 48);
  if ( !v15 || **v15 != (unsigned int)PsGetCurrentProcessSessionId() )
  {
    v21 = -1073741811;
    WdLogSingleEntry3(3LL, v4, v22, -1073741811LL);
    WdLogGlobalForLineNumber = 7922;
LABEL_26:
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v24);
    if ( LOBYTE(v27.LowPart) )
      DxgkReleaseSessionModeChangeLock();
    goto LABEL_5;
  }
  v16 = *((_QWORD *)v22 + 390);
  if ( (unsigned int)v4 >= *(_DWORD *)(v16 + 96) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5851;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"VidPnSourceId < m_NumVidPnSources",
      5851LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v17 = *(_QWORD *)(v16 + 128);
  v18 = v17 + v14;
  if ( *(_DWORD *)(v17 + v14 + 1048) == -2 && *(_DWORD *)(v18 + 1052) == -2 )
  {
    a3[6] = 1;
    a3[5] = 64;
    a3[7] = 64;
    a3[8] = 1;
  }
  else
  {
    a3[5] = *(_DWORD *)(v17 + v14 + 1056);
    a3[6] = *(_DWORD *)(v17 + v14 + 1060);
    a3[7] = *(_DWORD *)(v17 + v14 + 1048);
    a3[8] = *(_DWORD *)(v18 + 1052);
    v12 = *(_DWORD *)(v17 + v14 + 1064);
  }
  a3[9] = v12;
  if ( v26 )
  {
    v19 = (char *)v25 + 136;
    _InterlockedDecrement((volatile signed __int32 *)v25 + 38);
    ExReleasePushLockSharedEx(v19, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference(v25);
    v7 = v22;
  }
  if ( LOBYTE(v27.LowPart) )
    DxgkReleaseSessionModeChangeLock();
  if ( v7 )
    DXGADAPTER::ReleaseReference(v7);
  return 0LL;
}
