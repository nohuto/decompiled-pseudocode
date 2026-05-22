/*
 * XREFs of _InputSinkDataCache::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__ @ 0x1801DA030
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Tidy@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAXXZ @ 0x180053B54 (-_Tidy@-$vector@VNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall InputSinkDataCache::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__()
{
  __int64 v0; // rdx

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&qword_180251D40);
  std::vector<NotificationData>::_Tidy((char **)&qword_180251D28, v0);
  std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::~_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>((__int64)&unk_180251CE8);
}
