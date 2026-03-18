/*
 * XREFs of DpiPanelBufferingSetAutomaticPolicy @ 0x14008A96C
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

__int64 __fastcall DpiPanelBufferingSetAutomaticPolicy(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r14d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v10; // esi
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // [rsp+20h] [rbp-20h] BYREF
  __int64 v22; // [rsp+28h] [rbp-18h]
  char v23; // [rsp+30h] [rbp-10h]

  v21 = -1;
  v3 = a3;
  v22 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 2231;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2231);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 2231);
  if ( !(unsigned int)Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline() )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit, v8, v21);
    }
    return 2147500033LL;
  }
  v10 = -1073741811;
  if ( a1 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    if ( v11 && *(_DWORD *)(v11 + 16) == 1953656900 && *(_DWORD *)(v11 + 20) == 2 )
    {
      if ( !*(_BYTE *)(v11 + 6512) )
      {
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
        if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v21);
        return 3221225659LL;
      }
      LOBYTE(v6) = 1;
      v10 = DpiAcquireCoreSyncAccessSafe(a1, v6);
      if ( (v10 & 0xC0000000) != 0xC0000000 )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v11 + 6504))(*(_QWORD *)(v11 + 6456), a2, v3);
        LOBYTE(v15) = 1;
        v16 = v14;
        DpiReleaseCoreSyncAccessSafe(a1, v15);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
        if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v21);
        return v16;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 239;
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v21);
  return v10;
}
