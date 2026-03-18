/*
 * XREFs of DxgkFunctionalizePathsModality @ 0x14031FD60
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x14031B384 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x14031FF34 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 */

__int64 __fastcall DxgkFunctionalizePathsModality(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // [rsp+58h] [rbp-39h] BYREF
  __int64 v13; // [rsp+60h] [rbp-31h]
  char v14; // [rsp+68h] [rbp-29h]
  int v15; // [rsp+78h] [rbp-19h] BYREF
  __int128 v16; // [rsp+80h] [rbp-11h]
  __int64 v17; // [rsp+90h] [rbp-1h]
  __int16 v18; // [rsp+98h] [rbp+7h]
  __int128 v19; // [rsp+A0h] [rbp+Fh]
  __int64 v20; // [rsp+B0h] [rbp+1Fh]
  __int64 v21; // [rsp+B8h] [rbp+27h]
  char v22; // [rsp+C0h] [rbp+2Fh]
  BOOL v23; // [rsp+C4h] [rbp+33h]
  int v24; // [rsp+C8h] [rbp+37h]
  _BOOL8 v25; // [rsp+CCh] [rbp+3Bh]
  __int64 v26; // [rsp+D8h] [rbp+47h]

  v12 = -1;
  v4 = a1;
  v13 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v14 = 1;
    v12 = 2168;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2168);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v12, 2168);
  if ( a2 )
  {
    if ( (v4 & 0xDEFD7FFF) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 239;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"(Flags & ~(D3DKMT_GETPATHSMODALITY_FUNCTIONALIZE_FLAGS)) == 0",
        239LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v21 = a2;
    v15 = 0;
    v17 = 0LL;
    v18 = 0;
    v20 = 0LL;
    v22 = 0;
    v26 = 0LL;
    v16 = 0LL;
    v19 = 0LL;
    v24 = 1;
    v23 = (v4 & 0x8000) != 0;
    v25 = (v4 & 0x1000000) != 0;
    v5 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)&v15, v4, 0);
    v23 = 0;
    v6 = v5;
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v15);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
    if ( v14 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit, v8, v12);
    }
    return v6;
  }
  else
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
    if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v12);
    return 3221225485LL;
  }
}
