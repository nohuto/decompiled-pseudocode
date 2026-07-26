/*
 * XREFs of ?ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z @ 0x140135680
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x14006E990 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     RtlUnicodeStringInitWorker @ 0x140096778 (RtlUnicodeStringInitWorker.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x140160C40 (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

NTSTATUS __fastcall ndisCheckAlwaysStartFlag(KRegKey *this, bool *a2, size_t a3, ULONG a4)
{
  unsigned int v6; // edi
  NTSTATUS result; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0;
  v9 = 0;
  DestinationString = 0LL;
  result = RtlUnicodeStringInitWorker(&DestinationString, L"AlwaysStartDevice", a3, a4);
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
