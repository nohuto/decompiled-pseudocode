/*
 * XREFs of DpiDxgkDdiStartDevice @ 0x14040BCF4
 * Callers:
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 * Callees:
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x140016724 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiStartDevice(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, _DWORD *a5, _DWORD *a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+28h] [rbp-30h]
  __int64 v20; // [rsp+30h] [rbp-28h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqtq_EtwWriteTransfer(a1, &EventEnterDdiStartDevice, (__int64)a3, a2, *a3, 0, 0);
  v12 = (*(int (__fastcall **)(__int64, unsigned int *, __int64, _DWORD *, _DWORD *))(a1 + 152))(a2, a3, a4, a5, a6);
  if ( bTracingEnabled )
  {
    v10 = (unsigned int)*a5;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v20) = v12;
      LODWORD(v19) = *a6;
      LODWORD(v18) = *a5;
      McTemplateK0pqtq_EtwWriteTransfer(v11, &EventExitDdiStartDevice, v13, a2, v18, v19, v20);
    }
  }
  v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v13, v14);
  v15[3] = a1;
  v15[4] = *a3;
  v15[5] = (unsigned int)*a5;
  v16 = (unsigned int)*a6;
  v15[7] = v12;
  v15[6] = v16;
  result = (unsigned int)v12;
  WdLogGlobalForLineNumber = 106;
  return result;
}
