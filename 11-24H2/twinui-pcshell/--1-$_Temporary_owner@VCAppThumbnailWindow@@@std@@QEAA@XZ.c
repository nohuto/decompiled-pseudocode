/*
 * XREFs of ??1?$_Temporary_owner@VCAppThumbnailWindow@@@std@@QEAA@XZ @ 0x18049C27C
 * Callers:
 *     ??$?0VCAppThumbnailWindow@@$0A@@?$shared_ptr@VCAppThumbnailWindow@@@std@@QEAA@PEAVCAppThumbnailWindow@@@Z @ 0x18049B0EC (--$-0VCAppThumbnailWindow@@$0A@@-$shared_ptr@VCAppThumbnailWindow@@@std@@QEAA@PEAVCAppThumbnailW.c)
 *     _std::shared_ptr_CAppThumbnailWindow_::shared_ptr_CAppThumbnailWindow__CAppThumbnailWindow_0__::_1_::dtor$0 @ 0x1806EE153 (_std--shared_ptr_CAppThumbnailWindow_--shared_ptr_CAppThumbnailWindow__CAppThumbnailWindow_0__--.c)
 * Callees:
 *     ??_GCAppThumbnailWindow@@QEAAPEAXI@Z @ 0x18049CF1C (--_GCAppThumbnailWindow@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::_Temporary_owner<CAppThumbnailWindow>::~_Temporary_owner<CAppThumbnailWindow>(
        CAppThumbnailWindow **a1,
        unsigned int a2)
{
  CAppThumbnailWindow *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return CAppThumbnailWindow::`scalar deleting destructor'(v2, a2);
  return result;
}
