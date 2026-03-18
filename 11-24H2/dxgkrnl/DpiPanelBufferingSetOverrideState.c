/*
 * XREFs of DpiPanelBufferingSetOverrideState @ 0x14008AB54
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1404150A0 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline @ 0x14006E0E0 (Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402C78D0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402CA36C (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiPanelBufferingSetOverrideState(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  int v5; // r14d
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebx
  __int64 v15; // rdx
  unsigned int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r15
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r15
  int v28; // ecx
  unsigned int v29; // edi
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // [rsp+30h] [rbp-40h] BYREF
  int v37; // [rsp+34h] [rbp-3Ch] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+38h] [rbp-38h] BYREF
  int v39; // [rsp+40h] [rbp-30h] BYREF
  __int64 v40; // [rsp+48h] [rbp-28h]
  char v41; // [rsp+50h] [rbp-20h]
  struct _KEVENT Event; // [rsp+58h] [rbp-18h] BYREF

  v39 = -1;
  v5 = a3;
  v40 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v41 = 1;
    v39 = 2230;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2230);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v39, 2230);
  if ( !(unsigned int)Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline() )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( v41 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit, v9, v39);
    }
    return 2147500033LL;
  }
  if ( !a1 || !v5 && a4 )
    goto LABEL_63;
  v11 = *(_QWORD *)(a1 + 64);
  if ( !v11 || *(_DWORD *)(v11 + 16) != 1953656900 || *(_DWORD *)(v11 + 20) != 2 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 54;
LABEL_63:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit, v35, v39);
    return 3221225485LL;
  }
  if ( !*(_BYTE *)(v11 + 6512) )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v39);
    return 3221225659LL;
  }
  v14 = 0;
  if ( v5 )
    v14 = (a4 != 0) + 1;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  LOBYTE(v15) = 1;
  v16 = DpiAcquireCoreSyncAccessSafe(a1, v15);
  if ( (v16 & 0xC0000000) == 0xC0000000 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v39);
    return v16;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct _KEVENT *))(v11 + 6488))(
          *(_QWORD *)(v11 + 6456),
          a2,
          v14,
          &Event);
  LOBYTE(v20) = 1;
  v21 = v19;
  DpiReleaseCoreSyncAccessSafe(a1, v20);
  if ( (v21 & 0xC0000000) == 0xC0000000 )
  {
    if ( !v14 && (_DWORD)v21 != -1071774920 )
    {
      WdLogSingleEntry3(0LL, 275LL, 21LL, v21);
      WdLogGlobalForLineNumber = 105;
    }
LABEL_32:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v39);
    return (unsigned int)v21;
  }
  Timeout.QuadPart = -20000000LL;
  if ( KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout) == 258 )
  {
    WdLogSingleEntry3(0LL, 275LL, 21LL, 258LL);
    WdLogGlobalForLineNumber = 121;
  }
  LOBYTE(v24) = 1;
  LODWORD(v21) = DpiAcquireCoreSyncAccessSafe(a1, v24);
  if ( (v21 & 0xC0000000) == 0xC0000000 )
    goto LABEL_32;
  v36 = 0;
  v37 = -1073741822;
  v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, int *))(v11 + 6496))(*(_QWORD *)(v11 + 6456), a2, &v37, &v36);
  LOBYTE(v26) = 1;
  v27 = v25;
  DpiReleaseCoreSyncAccessSafe(a1, v26);
  if ( (v27 & 0xC0000000) == 0xC0000000 )
  {
    WdLogSingleEntry2(2LL, v27, v14);
    WdLogGlobalForLineNumber = 146;
    if ( !v14 && (_DWORD)v27 != -1071774920 )
    {
      WdLogSingleEntry3(0LL, 275LL, 21LL, v27);
      WdLogGlobalForLineNumber = 165;
    }
    goto LABEL_50;
  }
  v28 = v36;
  if ( !v14 && v36 )
  {
    WdLogSingleEntry3(0LL, 275LL, 21LL, v37);
    v28 = v36;
    WdLogGlobalForLineNumber = 180;
  }
  v29 = v37;
  if ( (v37 & 0xC0000000) == 0xC0000000 && v28 && v37 != -1071774920 )
  {
    WdLogSingleEntry1(2LL, v37);
    WdLogGlobalForLineNumber = 189;
LABEL_50:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit, v31, v39);
    return 0LL;
  }
  if ( v37 >= 0 && v14 && !v28 )
  {
    WdLogSingleEntry1(2LL, v37);
    v29 = v37;
    WdLogGlobalForLineNumber = 202;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventProfilerExit, v33, v39);
  return v29;
}
