/*
 * XREFs of ?ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z @ 0x14016CA30
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x14008AE90 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     RtlUnicodeStringInitWorker @ 0x1400A0BEC (RtlUnicodeStringInitWorker.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x14016CCE0 (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

NTSTATUS __fastcall ndisCheckIfDeviceNeedsUpdates(KRegKey *this, bool *a2, size_t a3, ULONG a4)
{
  unsigned int v6; // edi
  NTSTATUS result; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0;
  v9 = 0;
  DestinationString = 0LL;
  result = RtlUnicodeStringInitWorker(&DestinationString, L"DriverUpdated", a3, a4);
  if ( result >= 0 )
  {
    result = KRegKey::QueryValueUlong(this, &DestinationString, &v9);
    v6 = v9;
  }
  if ( result == -1073741772 )
  {
    *a2 = 0;
    return 0;
  }
  else if ( !result )
  {
    *a2 = v6 != 0;
    return 0;
  }
  return result;
}
