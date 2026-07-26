/*
 * XREFs of ?DeleteValue@KRegKey@@QEAAJPEB_W@Z @ 0x140142478
 * Callers:
 *     ?ClearKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@@Z @ 0x140149EA0 (-ClearKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@@Z.c)
 *     ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1401655B0 (-ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$defaul.c)
 * Callees:
 *     RtlUnicodeStringInitWorker @ 0x140096778 (RtlUnicodeStringInitWorker.c)
 */

int __fastcall KRegKey::DeleteValue(KRegKey *this, const wchar_t *a2, size_t a3, ULONG a4)
{
  int result; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  result = RtlUnicodeStringInitWorker(&DestinationString, a2, a3, a4);
  if ( result >= 0 )
    return ZwDeleteValueKey(this->m_ptr, &DestinationString);
  return result;
}
