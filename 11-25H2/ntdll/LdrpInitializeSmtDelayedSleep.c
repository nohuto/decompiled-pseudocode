/*
 * XREFs of LdrpInitializeSmtDelayedSleep @ 0x1800F8D08
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpInitializeSmtDelayedSleepQueryRegistry @ 0x1800F8DC4 (LdrpInitializeSmtDelayedSleepQueryRegistry.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 */

NTSTATUS LdrpInitializeSmtDelayedSleep()
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = 0LL;
  result = NtOpenKey(&Handle, 1LL, &unk_180175E20);
  if ( result >= 0 )
  {
    LdrpInitializeSmtDelayedSleepQueryRegistry(Handle, L"68", &SmtDelayedConfiguration);
    LdrpInitializeSmtDelayedSleepQueryRegistry(Handle, L"46", &dword_1801D5F24);
    LdrpInitializeSmtDelayedSleepQueryRegistry(Handle, L"\"$", &dword_1801D5F28);
    LdrpInitializeSmtDelayedSleepQueryRegistry(Handle, &unk_180175E70, &dword_1801D5F2C);
    result = LdrpInitializeSmtDelayedSleepQueryRegistry(Handle, L" \"", &dword_1801D5F30);
  }
  if ( Handle )
    return NtClose(Handle);
  return result;
}
