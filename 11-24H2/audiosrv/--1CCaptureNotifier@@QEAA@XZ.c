/*
 * XREFs of ??1CCaptureNotifier@@QEAA@XZ @ 0x1801099FC
 * Callers:
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x180109A64 (--1CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x180065858 (-PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1801099A8 (--1-$_Tree@V-$_Tmap_traits@KUAPPLICATION_REF_DATA@@U-$less@K@std@@V-$allocator@U-$pair@$$CBKUAPP.c)
 */

void __fastcall CCaptureNotifier::~CCaptureNotifier(char **this)
{
  CCaptureNotifier::PublishCaptureAudioStatus((CCaptureNotifier *)this);
  std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>(this + 4);
  _Mtx_destroy_in_situ((_Mtx_t)this);
}
