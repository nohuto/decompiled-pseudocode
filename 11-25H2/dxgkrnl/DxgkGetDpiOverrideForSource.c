/*
 * XREFs of DxgkGetDpiOverrideForSource @ 0x1403669B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003EC00 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x140283874 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x140287094 (DxgkAcquireSessionModeChangeLock.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1403680C0 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 */

__int64 __fastcall DxgkGetDpiOverrideForSource(DpiPersistence *this, struct _LUID *a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v5; // eax
  bool v6; // di
  __int64 v7; // rbx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int *v14; // [rsp+20h] [rbp-50h]
  int v15; // [rsp+50h] [rbp-20h] BYREF
  __int64 v16; // [rsp+58h] [rbp-18h]
  char v17; // [rsp+60h] [rbp-10h]
  bool v18; // [rsp+A0h] [rbp+30h] BYREF
  int v19; // [rsp+A8h] [rbp+38h] BYREF

  v15 = -1;
  v3 = (unsigned int)a2;
  v16 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 2193;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 2193);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 2193);
  v5 = DxgkAcquireSessionModeChangeLock(0);
  v6 = v5 >= 0;
  v18 = v5 >= 0;
  if ( v5 < 0 )
  {
    v7 = v5;
    WdLogSingleEntry1(2LL, v5);
    WdLogGlobalForLineNumber = 2446;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v6 )
      DxgkReleaseSessionModeChangeLock();
    goto LABEL_16;
  }
  v19 = 0;
  if ( (int)DpiPersistence::ReadDpiFromRegistry(this, (const struct _LUID *)v3, 0, (int)&v19, v14) < 0 )
  {
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v18);
LABEL_16:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
    if ( v17 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v15);
    }
    return 0LL;
  }
  v8 = v19;
  if ( v6 )
    DxgkReleaseSessionModeChangeLock();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v15);
  return v8;
}
