/*
 * XREFs of LdrpInitializeSmtDelayedSleep @ 0x1800F70A8
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpInitializeSmtDelayedSleepQueryRegistry @ 0x1800F7164 (LdrpInitializeSmtDelayedSleepQueryRegistry.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 */

NTSTATUS LdrpInitializeSmtDelayedSleep()
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = 0LL;
  result = NtOpenKey(&Handle, 1LL, &unk_180173E00);
  if ( result >= 0 )
  {
    LdrpInitializeSmtDelayedSleepQueryRegistry(Handle, L"68", &SmtDelayedConfiguration);
    LdrpInitializeSmtDelayedSleepQueryRegistry(Handle, L"46", &dword_1801D3EC4);
    LdrpInitializeSmtDelayedSleepQueryRegistry(Handle, L"\"$", &dword_1801D3EC8);
    LdrpInitializeSmtDelayedSleepQueryRegistry(Handle, &unk_180173E50, &dword_1801D3ECC);
    result = LdrpInitializeSmtDelayedSleepQueryRegistry(Handle, L" \"", &dword_1801D3ED0);
  }
  if ( Handle )
    return NtClose(Handle);
  return result;
}
