/*
 * XREFs of ?SetValueBlob@KRegKey@@QEAAJPEB_WKPEBE@Z @ 0x140140EC0
 * Callers:
 *     ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1401718B0 (-ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$defaul.c)
 * Callees:
 *     RtlUnicodeStringInitWorker @ 0x1400A0BEC (RtlUnicodeStringInitWorker.c)
 */

int __fastcall KRegKey::SetValueBlob(KRegKey *this, const wchar_t *a2, size_t a3, unsigned __int8 *a4)
{
  ULONG DataSize; // edi
  int result; // eax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  DataSize = a3;
  result = RtlUnicodeStringInitWorker(&DestinationString, a2, a3, (ULONG)a4);
  if ( result >= 0 )
    return ZwSetValueKey(this->m_ptr, &DestinationString, 0, 3u, a4, DataSize);
  return result;
}
