/*
 * XREFs of ??1CPlaybackNotifier@@QEAA@XZ @ 0x180109A30
 * Callers:
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x180109A64 (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$2 @ 0x18016E249 (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$2.c)
 * Callees:
 *     ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x18001059C (-PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18009F444 (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UENDPOI.c)
 */

void __fastcall CPlaybackNotifier::~CPlaybackNotifier(char **this)
{
  CPlaybackNotifier::PublishPlaybackAudioStatus((CPlaybackNotifier *)this);
  std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>(this + 4);
  _Mtx_destroy_in_situ((_Mtx_t)this);
}
