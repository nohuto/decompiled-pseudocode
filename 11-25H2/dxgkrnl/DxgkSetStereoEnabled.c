/*
 * XREFs of DxgkSetStereoEnabled @ 0x1401D2480
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetStereoEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  struct DXGPROCESS *Current; // rax
  unsigned int updated; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // [rsp+50h] [rbp-20h] BYREF
  __int64 v13; // [rsp+58h] [rbp-18h]
  char v14; // [rsp+60h] [rbp-10h]
  int v15; // [rsp+88h] [rbp+18h] BYREF
  BOOL v16; // [rsp+90h] [rbp+20h] BYREF

  v12 = -1;
  v3 = a1;
  v13 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v14 = 1;
    v12 = 2089;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2089);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v12, 2089);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    updated = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 5327;
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
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
    if ( v14 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit, v7, v12);
    }
    return updated;
  }
  v15 = 0;
  v9 = (*(__int64 (__fastcall **)(int *, _QWORD, _QWORD))(*((_QWORD *)Current + 11) + 240LL))(&v15, 0LL, 0LL);
  if ( v15 && !v9 )
  {
    v16 = v3 != 0;
    updated = ZwUpdateWnfStateData(&WNF_DX_STEREO_CONFIG, &v16, 4LL, 0LL, 0LL, 0, 0);
    goto LABEL_7;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
  if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v12);
  return 3221225659LL;
}
