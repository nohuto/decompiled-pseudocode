/*
 * XREFs of DpiDxgkDdiProtectedCallback @ 0x1403E5C54
 * Callers:
 *     DpiFdoExcludeAdapterAccess @ 0x140240710 (DpiFdoExcludeAdapterAccess.c)
 * Callees:
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x14006199C (McTemplateK0ppq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

NTSTATUS __fastcall DpiDxgkDdiProtectedCallback(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64, _QWORD),
        __int64 a3,
        unsigned int a4)
{
  NTSTATUS result; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // [rsp+28h] [rbp-10h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0ppq_EtwWriteTransfer(a1, &EventEnterDdiProtectedCallback, a3, a1, a3, a4);
  result = a2(a1, a3, a4);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v11) = a4;
      return McTemplateK0ppq_EtwWriteTransfer(v9, &EventExitDdiProtectedCallback, v10, a1, a3, v11);
    }
  }
  return result;
}
