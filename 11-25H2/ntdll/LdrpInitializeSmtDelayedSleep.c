/*
 * XREFs of LdrpInitializeSmtDelayedSleep @ 0x1800F8D08
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpInitializeSmtDelayedSleepQueryRegistry @ 0x1800F8DC4 (LdrpInitializeSmtDelayedSleepQueryRegistry.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 */

int LdrpInitializeSmtDelayedSleep()
{
  int result; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp+8h] BYREF

  KeyHandle = 0LL;
  result = NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_180175E20);
  if ( result >= 0 )
  {
    LdrpInitializeSmtDelayedSleepQueryRegistry(KeyHandle, L"68", &SmtDelayedConfiguration);
    LdrpInitializeSmtDelayedSleepQueryRegistry(KeyHandle, L"46", &dword_1801D5F24);
    LdrpInitializeSmtDelayedSleepQueryRegistry(KeyHandle, L"\"$", &dword_1801D5F28);
    LdrpInitializeSmtDelayedSleepQueryRegistry(KeyHandle, &unk_180175E70, &dword_1801D5F2C);
    result = LdrpInitializeSmtDelayedSleepQueryRegistry(KeyHandle, L" \"", &dword_1801D5F30);
  }
  if ( KeyHandle )
    return NtClose(KeyHandle);
  return result;
}
