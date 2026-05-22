/*
 * XREFs of ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x1800621B4
 * Callers:
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x180038534 (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800F5540 (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?GetInputSinkHandle@DWMInputTarget@@AEBAPEAXXZ @ 0x1800F5780 (-GetInputSinkHandle@DWMInputTarget@@AEBAPEAXXZ.c)
 *     ?GetDuplicatedInputSinkHandle@LegacyInputSinkData@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@XZ @ 0x18013036C (-GetDuplicatedInputSinkHandle@LegacyInputSinkData@@QEBA-AV-$unique_any_t@V-$unique_storage@U-$ha.c)
 * Callees:
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x18009B814 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 */

void *__fastcall LegacyInputSinkData::GetWeakInputSinkHandle(LegacyInputSinkData *this)
{
  if ( *((_BYTE *)this + 8) > 1u )
    std::_Throw_bad_variant_access();
  return *(void **)this;
}
