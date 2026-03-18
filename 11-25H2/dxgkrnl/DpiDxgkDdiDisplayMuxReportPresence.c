/*
 * XREFs of DpiDxgkDdiDisplayMuxReportPresence @ 0x14008B8D8
 * Callers:
 *     DpiFdoInitializeFdo @ 0x14023C19C (DpiFdoInitializeFdo.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140015210 (McTemplateK0pt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

_QWORD *__fastcall DpiDxgkDdiDisplayMuxReportPresence(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *result; // rax

  v4 = (unsigned __int8)a2;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pt_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      (__int64)&EventDdiDisplayMuxReportPresence,
      a3,
      *(_QWORD *)(a1 + 48),
      (unsigned __int8)a2);
  LOBYTE(a2) = v4;
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 6008))(*(_QWORD *)(a1 + 48), a2);
  result = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  result[5] = 0LL;
  result[6] = 0LL;
  result[7] = 0LL;
  result[3] = a1;
  result[4] = v4;
  WdLogGlobalForLineNumber = 1041;
  return result;
}
