/*
 * XREFs of DpiDxgkDdiDisplayDetectControl @ 0x140375ABC
 * Callers:
 *     DpiFdoInvalidateChildStatus @ 0x14023D4E4 (DpiFdoInvalidateChildStatus.c)
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1402412FC (DpiFdoStopAdapter.c)
 *     DpiFdoInvalidateChildRelations @ 0x140375560 (DpiFdoInvalidateChildRelations.c)
 * Callees:
 *     DpiFdoHandleDisplayDetectControl @ 0x1400272AC (DpiFdoHandleDisplayDetectControl.c)
 *     DxgkQueryConnectionChanges @ 0x140027940 (DxgkQueryConnectionChanges.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x14003ECE0 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiDisplayDetectControl(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  char v8; // di
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbp
  _QWORD *v15; // rax
  unsigned __int64 v16; // rcx
  bool v17; // zf
  unsigned __int8 v18; // r8
  int ConnectionChanges; // eax
  __int64 v21; // [rsp+20h] [rbp-38h]
  __int64 v22; // [rsp+28h] [rbp-30h]
  __int64 v23; // [rsp+30h] [rbp-28h]
  __int64 v24; // [rsp+38h] [rbp-20h]

  if ( (*(_BYTE *)(a1 + 4041) & 8) == 0 )
    return DpiFdoHandleDisplayDetectControl(a1, a4, a3);
  v8 = 1;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqtqq_EtwWriteTransfer(
      HIBYTE(*a4) & 0xF,
      &EventEnterDdiDisplayDetectControl,
      *a4 & 0xFFFFFF,
      a3,
      HIBYTE(*a4) & 0xF,
      *a4 & 0xFFFFFF,
      (*a4 >> 28) & 1,
      0);
  v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(a2 + 1128))(a3, a4);
  v14 = v9;
  if ( bTracingEnabled )
  {
    v10 = *a4 >> 28;
    v12 = *a4 & 0xFFFFFF;
    v11 = HIBYTE(*a4) & 0xF;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v24) = v9;
      LODWORD(v23) = (*a4 & 0x10000000) != 0;
      LODWORD(v22) = *a4 & 0xFFFFFF;
      LODWORD(v21) = HIBYTE(*a4) & 0xF;
      McTemplateK0pqtqq_EtwWriteTransfer(v11, &EventExitDdiDisplayDetectControl, v12, a3, v21, v22, v23, v24);
    }
  }
  v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
  v15[3] = a2;
  v15[4] = HIBYTE(*a4) & 0xF;
  v15[5] = *a4 & 0xFFFFFF;
  v16 = ((unsigned __int64)*a4 >> 28) & 1;
  v15[7] = v14;
  v15[6] = v16;
  v17 = *((_BYTE *)a4 + 22) == 0;
  WdLogGlobalForLineNumber = 781;
  if ( !v17 )
  {
    v18 = *((_BYTE *)a4 + 20);
    if ( (*a4 & 0xF000000) != 0x2000000 || !v18 )
      v8 = 0;
    ConnectionChanges = DxgkQueryConnectionChanges(
                          *(_QWORD *)(a1 + 24),
                          v8,
                          v18,
                          *((_BYTE *)a4 + 21),
                          0,
                          *((_BYTE *)a4 + 23));
    if ( ConnectionChanges < 0 )
    {
      WdLogSingleEntry1(2LL, ConnectionChanges);
      WdLogGlobalForLineNumber = 812;
    }
  }
  return (unsigned int)v14;
}
