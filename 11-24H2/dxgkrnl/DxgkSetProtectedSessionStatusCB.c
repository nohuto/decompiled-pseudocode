/*
 * XREFs of DxgkSetProtectedSessionStatusCB @ 0x1401F2770
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z @ 0x1400780D0 (-SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z.c)
 */

__int64 __fastcall DxgkSetProtectedSessionStatusCB(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+38h] [rbp-18h]
  char v12; // [rsp+40h] [rbp-10h]

  if ( KeGetCurrentIrql() >= 2u )
  {
    WdLogSingleEntry5(0LL, 275LL, 20LL, DxgkSetProtectedSessionStatusCB, 0LL, 0LL);
    WdLogGlobalForLineNumber = 32;
  }
  v10 = -1;
  v11 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v12 = 1;
    v10 = 15000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter, v3, 15000);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v10, 15000);
  if ( *(_QWORD *)a1 )
  {
    v7 = DXGPROTECTEDSESSION::SetSessionStatus(
           *(DXGPROTECTEDSESSION **)a1,
           (enum _DXGK_PROTECTED_SESSION_STATUS)*(_DWORD *)(a1 + 8));
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
    if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit, v9, v10);
    return v7;
  }
  else
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
    if ( v12 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerExit, v5, v10);
    }
    return 3221225485LL;
  }
}
