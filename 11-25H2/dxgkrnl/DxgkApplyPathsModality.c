/*
 * XREFs of DxgkApplyPathsModality @ 0x14031A340
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402CDFF8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031B21C (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall DxgkApplyPathsModality(__int64 a1, __int64 a2, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // [rsp+28h] [rbp-49h] BYREF
  __int64 v13; // [rsp+30h] [rbp-41h]
  char v14; // [rsp+38h] [rbp-39h]
  int v15; // [rsp+48h] [rbp-29h] BYREF
  __int128 v16; // [rsp+50h] [rbp-21h]
  __int64 v17; // [rsp+60h] [rbp-11h]
  __int16 v18; // [rsp+68h] [rbp-9h]
  __int128 v19; // [rsp+70h] [rbp-1h]
  __int64 v20; // [rsp+80h] [rbp+Fh]
  __int64 v21; // [rsp+88h] [rbp+17h]
  char v22; // [rsp+90h] [rbp+1Fh]
  int v23; // [rsp+94h] [rbp+23h]
  int v24; // [rsp+98h] [rbp+27h]
  BOOL v25; // [rsp+9Ch] [rbp+2Bh]
  int v26; // [rsp+A0h] [rbp+2Fh]
  __int64 v27; // [rsp+A8h] [rbp+37h]

  v12 = -1;
  v13 = 0LL;
  v5 = a1;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v14 = 1;
    v12 = 2169;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, (__int64)a3, 2169);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v12, 2169);
  if ( a2 )
  {
    v15 = 0;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0;
    v19 = 0LL;
    v20 = 0LL;
    v21 = a2;
    v22 = 0;
    v23 = 0;
    v25 = (v5 & 0x1000000) != 0;
    v24 = 1;
    v26 = 0;
    v27 = 0LL;
    v9 = CCD_TOPOLOGY::ApplyTopology((CCD_TOPOLOGY *)&v15, v5, a3);
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v15);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
    if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v12);
    return v9;
  }
  else
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
    if ( v14 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit, v7, v12);
    }
    return 3221225485LL;
  }
}
