/*
 * XREFs of ?EnterWait@DWM@KST@InputTraceLogging@@SAXXZ @ 0x180010254
 * Callers:
 *     ?RunKernelThreadStatic@CKstBase@@CAKPEAX@Z @ 0x180010870 (-RunKernelThreadStatic@CKstBase@@CAKPEAX@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000133C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800021B0 (__security_check_cookie.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800104AC (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void InputTraceLogging::KST::DWM::EnterWait(void)
{
  const struct _tlgProvider_t *v0; // rax
  struct _EVENT_DATA_DESCRIPTOR v1; // [rsp+30h] [rbp-38h] BYREF

  v0 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v0 > 4u && (*((_BYTE *)v0 + 16) & 2) != 0 && (*((_QWORD *)v0 + 3) & 2LL) == *((_QWORD *)v0 + 3) )
    tlgWriteTransfer_EventWriteTransfer((__int64)v0, byte_180015B93, 0LL, 0LL, 2u, &v1);
}
