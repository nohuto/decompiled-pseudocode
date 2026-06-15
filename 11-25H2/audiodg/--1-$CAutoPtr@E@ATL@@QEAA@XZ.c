/*
 * XREFs of ??1?$CAutoPtr@E@ATL@@QEAA@XZ @ 0x140069CEC
 * Callers:
 *     _SerializeDeviceGraphs_::_1_::dtor$0 @ 0x14009681E (_SerializeDeviceGraphs_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CAutoPtr<unsigned char>::~CAutoPtr<unsigned char>(void **a1)
{
  operator delete(*a1);
  *a1 = 0LL;
}
