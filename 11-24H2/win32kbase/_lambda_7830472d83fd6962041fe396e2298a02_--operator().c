/*
 * XREFs of _lambda_7830472d83fd6962041fe396e2298a02_::operator() @ 0x1401BF1F0
 * Callers:
 *     W32ExecuteUsingSessionGlobal__lambda_7830472d83fd6962041fe396e2298a02___ @ 0x1401BF12C (W32ExecuteUsingSessionGlobal__lambda_7830472d83fd6962041fe396e2298a02___.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1400BBF50 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

__int64 __fastcall lambda_7830472d83fd6962041fe396e2298a02_::operator()(__int64 a1, __int64 a2)
{
  __int64 QuotaZInit; // rax

  QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                 (NSInstrumentation::CLeakTrackingAllocator *)(a2 + 72288),
                 *(_QWORD *)(a1 + 8),
                 *(_QWORD *)(a1 + 16),
                 *(_DWORD *)(a1 + 24));
  **(_QWORD **)a1 = QuotaZInit;
  return QuotaZInit == 0 ? 0xC0000017 : 0;
}
