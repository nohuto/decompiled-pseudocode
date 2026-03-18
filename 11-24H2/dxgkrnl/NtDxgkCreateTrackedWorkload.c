/*
 * XREFs of NtDxgkCreateTrackedWorkload @ 0x140204360
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtDxgkCreateTrackedWorkload(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  const wchar_t *v4; // r9
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  int v9; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+58h] [rbp-B0h]
  char v11; // [rsp+60h] [rbp-A8h]
  __int64 v12; // [rsp+68h] [rbp-A0h]
  __int128 v13; // [rsp+70h] [rbp-98h]
  __int128 v14; // [rsp+80h] [rbp-88h]
  __int128 v15; // [rsp+90h] [rbp-78h]
  PVOID P; // [rsp+A0h] [rbp-68h]
  char v17; // [rsp+A8h] [rbp-60h] BYREF
  int v18; // [rsp+E8h] [rbp-20h]

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v9 = -1;
  v10 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v11 = 1;
    v9 = 2206;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2206);
  }
  else
  {
    v11 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v9, 2206);
  P = 0LL;
  v18 = 0;
  if ( DXGPROCESS::GetCurrent() )
  {
    v5 = -1073741637LL;
    v3 = -1073741637;
    WdLogSingleEntry1(2LL, -1073741637LL);
    WdLogGlobalForLineNumber = 146;
    v4 = L"Tracked workload not supported, returning 0x%I64x";
  }
  else
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 139;
    v4 = L"Invalid process context, returning 0x%I64x";
    v5 = -1073741811LL;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v4, v5, 0LL, 0LL, 0LL, 0LL);
  if ( P != &v17 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v18 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9);
  if ( v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit, v7, v9);
  return v3;
}
