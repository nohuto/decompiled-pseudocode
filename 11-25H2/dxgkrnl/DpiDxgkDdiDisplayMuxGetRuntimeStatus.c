/*
 * XREFs of DpiDxgkDdiDisplayMuxGetRuntimeStatus @ 0x14008B37C
 * Callers:
 *     DpiMdmProcessStartAdapter @ 0x140088D14 (DpiMdmProcessStartAdapter.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140014AA8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiDisplayMuxGetRuntimeStatus(__int64 a1, int *a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v13; // [rsp+20h] [rbp-18h]
  __int64 v14; // [rsp+28h] [rbp-10h]
  unsigned int v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = 0;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(
      a1,
      (__int64)&EventEnterDdiDisplayMuxGetRuntimeStatus,
      a3,
      *(_QWORD *)(a1 + 48),
      0,
      0);
  v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(a1 + 5936))(*(_QWORD *)(a1 + 48), &v15);
  v10 = v5;
  if ( bTracingEnabled )
  {
    v9 = *(_QWORD *)(a1 + 48);
    if ( v5 < 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        goto LABEL_11;
      LODWORD(v14) = v5;
      LODWORD(v13) = 0;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        goto LABEL_11;
      v7 = v15;
      LODWORD(v14) = v5;
      LODWORD(v13) = v15;
    }
    McTemplateK0pqq_EtwWriteTransfer(v7, (__int64)&EventExitDdiDisplayMuxGetRuntimeStatus, v8, v9, v13, v14);
  }
LABEL_11:
  v11 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  *(_QWORD *)(v11 + 24) = a1;
  *(_QWORD *)(v11 + 32) = (int)v15;
  *(_QWORD *)(v11 + 40) = v10;
  *(_OWORD *)(v11 + 48) = 0LL;
  WdLogGlobalForLineNumber = 985;
  if ( (int)v10 >= 0 )
  {
    switch ( v15 )
    {
      case 1u:
        *a2 = 1;
        break;
      case 2u:
        *a2 = 2;
        break;
      case 3u:
        *a2 = 3;
        break;
      case 4u:
        *a2 = 4;
        break;
      default:
        WdLogSingleEntry1(1LL, *a2);
        WdLogGlobalForLineNumber = 1016;
        LODWORD(v10) = -1073739509;
        break;
    }
  }
  return (unsigned int)v10;
}
