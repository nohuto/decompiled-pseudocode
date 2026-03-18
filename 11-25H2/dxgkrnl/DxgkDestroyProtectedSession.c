/*
 * XREFs of DxgkDestroyProtectedSession @ 0x1401EBAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z @ 0x1400761A8 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1401843BC (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyProtectedSession(const void *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  struct DXGPROCESS *Current; // r14
  struct DXGGLOBAL *Global; // rax
  unsigned int v6; // edi
  unsigned int v7; // eax
  __int64 v8; // r8
  int v9; // ecx
  struct DXGPROTECTEDSESSION *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  _BYTE v16[16]; // [rsp+50h] [rbp-48h] BYREF
  int v17; // [rsp+60h] [rbp-38h] BYREF
  __int64 v18; // [rsp+68h] [rbp-30h]
  char v19; // [rsp+70h] [rbp-28h]
  unsigned int v20; // [rsp+A8h] [rbp+10h] BYREF

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 399;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"PsGetCurrentThreadPreviousMode() == UserMode",
      399LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v17 = -1;
  v18 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2149;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter, v3, 2149);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2149);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 408;
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
LABEL_20:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v17);
    }
    return 3221225485LL;
  }
  v20 = 0;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v20, a1, 4uLL);
  Global = DXGGLOBAL::GetGlobal();
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v16, Global);
  v6 = v20;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v7 = (v6 >> 6) & 0xFFFFFF;
  if ( v7 >= *((_DWORD *)Current + 74) )
    goto LABEL_17;
  v8 = *((_QWORD *)Current + 35);
  if ( ((v6 >> 25) & 0x60) != (*(_BYTE *)(v8 + 16LL * v7 + 8) & 0x60) )
    goto LABEL_17;
  if ( (*(_DWORD *)(v8 + 16LL * v7 + 8) & 0x2000) != 0 )
    goto LABEL_17;
  v9 = *(_DWORD *)(v8 + 16LL * v7 + 8) & 0x1F;
  if ( !v9 )
    goto LABEL_17;
  if ( v9 != 14 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_17:
    v10 = 0LL;
    goto LABEL_18;
  }
  v10 = *(struct DXGPROTECTEDSESSION **)(v8 + 16LL * v7);
LABEL_18:
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v10 )
  {
    WdLogSingleEntry2(3LL, v20, -1073741811LL);
    WdLogGlobalForLineNumber = 437;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v16);
    goto LABEL_20;
  }
  DXGPROTECTEDSESSION::DestroyProtectedSession(v10, v20);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v16);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v17);
  return 0LL;
}
