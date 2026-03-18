/*
 * XREFs of ?Assign@FxString@@QEAAJPEBG@Z @ 0x140083A68
 * Callers:
 *     imp_WdfRegistryQueryMultiString @ 0x140062110 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfDriverRetrieveVersionString @ 0x140093AE0 (imp_WdfDriverRetrieveVersionString.c)
 * Callees:
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x140031530 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 */

__int64 __fastcall FxString::Assign(FxString *this, const wchar_t *SourceString)
{
  _UNICODE_STRING string; // [rsp+20h] [rbp-18h] BYREF

  string = 0LL;
  RtlInitUnicodeString(&string, SourceString);
  return FxDuplicateUnicodeString(this->m_Globals, &string, &this->m_UnicodeString);
}
