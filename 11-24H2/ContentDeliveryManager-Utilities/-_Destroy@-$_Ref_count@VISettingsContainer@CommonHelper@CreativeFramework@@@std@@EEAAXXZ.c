/*
 * XREFs of ?_Destroy@?$_Ref_count@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@EEAAXXZ @ 0x180088000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count<CreativeFramework::CommonHelper::ISettingsContainer>::_Destroy(__int64 a1)
{
  operator delete(*(void **)(a1 + 16));
}
