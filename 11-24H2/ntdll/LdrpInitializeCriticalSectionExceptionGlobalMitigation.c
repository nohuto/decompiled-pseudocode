/*
 * XREFs of LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x18008942C
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800887A8 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

void LdrpInitializeCriticalSectionExceptionGlobalMitigation()
{
  int v0; // ebx
  int v1; // [rsp+30h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v3[4]; // [rsp+40h] [rbp-68h] BYREF
  int v4; // [rsp+44h] [rbp-64h]
  int v5; // [rsp+48h] [rbp-60h]
  int v6; // [rsp+4Ch] [rbp-5Ch]

  if ( LdrpIsSecureProcess
    || (Handle = 0LL, v1 = 0,
                      RtlpRaiseExceptionOnPossibleDeadlock = 0,
                      (int)NtOpenKey(&Handle, 1LL, &unk_180173A88) >= 0)
    && (v0 = NtQueryValueKey(Handle, L"@B", 2LL, v3, 80, &v1), NtClose(Handle), v0 >= 0)
    && v4 == 4
    && v5 == 4
    && v6 )
  {
    RtlpRaiseExceptionOnPossibleDeadlock = 1;
  }
}
