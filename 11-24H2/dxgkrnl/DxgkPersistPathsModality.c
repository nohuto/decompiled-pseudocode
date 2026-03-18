/*
 * XREFs of DxgkPersistPathsModality @ 0x140341B10
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x14031B384 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x140341C24 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkPersistPathsModality(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v9; // [rsp+28h] [rbp-39h] BYREF
  __int64 v10; // [rsp+30h] [rbp-31h]
  char v11; // [rsp+38h] [rbp-29h]
  int v12; // [rsp+48h] [rbp-19h] BYREF
  __int128 v13; // [rsp+50h] [rbp-11h]
  __int64 v14; // [rsp+60h] [rbp-1h]
  __int16 v15; // [rsp+68h] [rbp+7h]
  __int128 v16; // [rsp+70h] [rbp+Fh]
  __int64 v17; // [rsp+80h] [rbp+1Fh]
  __int64 v18; // [rsp+88h] [rbp+27h]
  bool v19; // [rsp+90h] [rbp+2Fh]
  int v20; // [rsp+94h] [rbp+33h]
  int v21; // [rsp+98h] [rbp+37h]
  __int64 v22; // [rsp+9Ch] [rbp+3Bh]
  __int64 v23; // [rsp+A8h] [rbp+47h]

  v9 = -1;
  v4 = a1;
  v10 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v11 = 1;
    v9 = 2167;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2167);
  }
  else
  {
    v11 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v9, 2167);
  v12 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v19 = a2 == 0;
  v18 = a2;
  v20 = 0;
  v21 = 1;
  v22 = 0LL;
  v23 = 0LL;
  v5 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)&v12, v4);
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v12);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9);
  if ( v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit, v7, v9);
  return v5;
}
