/*
 * XREFs of DxgkFinalizePathsModality @ 0x1403E9B80
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x14031B384 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x140344ACC (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkFinalizePathsModality(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // [rsp+20h] [rbp-39h] BYREF
  __int64 v11; // [rsp+28h] [rbp-31h]
  char v12; // [rsp+30h] [rbp-29h]
  int v13; // [rsp+40h] [rbp-19h] BYREF
  __int128 v14; // [rsp+48h] [rbp-11h]
  __int64 v15; // [rsp+58h] [rbp-1h]
  __int16 v16; // [rsp+60h] [rbp+7h]
  __int128 v17; // [rsp+68h] [rbp+Fh]
  __int64 v18; // [rsp+78h] [rbp+1Fh]
  __int64 v19; // [rsp+80h] [rbp+27h]
  char v20; // [rsp+88h] [rbp+2Fh]
  int v21; // [rsp+8Ch] [rbp+33h]
  int v22; // [rsp+90h] [rbp+37h]
  __int64 v23; // [rsp+94h] [rbp+3Bh]
  __int64 v24; // [rsp+A0h] [rbp+47h]

  v10 = -1;
  v11 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v12 = 1;
    v10 = 2170;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2170);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v10, 2170);
  if ( a1 )
  {
    v13 = 0;
    v14 = 0LL;
    v15 = 0LL;
    v17 = 0LL;
    v16 = 0;
    v18 = 0LL;
    v19 = a1;
    v20 = 0;
    v21 = 0;
    v22 = 1;
    v23 = 0LL;
    v24 = 0LL;
    v7 = CCD_TOPOLOGY::FinalizeTopology((CCD_TOPOLOGY *)&v13);
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v13);
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
