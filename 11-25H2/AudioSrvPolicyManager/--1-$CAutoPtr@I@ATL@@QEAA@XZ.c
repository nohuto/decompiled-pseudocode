/*
 * XREFs of ??1?$CAutoPtr@I@ATL@@QEAA@XZ @ 0x180032F44
 * Callers:
 *     _CApplicationManager::OnStreamStarted_::_1_::dtor$4 @ 0x18004B4B0 (_CApplicationManager--OnStreamStarted_--_1_--dtor$4.c)
 *     _CApplicationManager::OnStreamStopped_::_1_::dtor$4 @ 0x18004B6B0 (_CApplicationManager--OnStreamStopped_--_1_--dtor$4.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CAutoPtr<unsigned int>::~CAutoPtr<unsigned int>(void **a1)
{
  operator delete(*a1, (const struct std::nothrow_t *)4);
  *a1 = 0LL;
}
