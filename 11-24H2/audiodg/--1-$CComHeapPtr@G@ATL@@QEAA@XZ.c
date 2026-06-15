/*
 * XREFs of ??1?$CComHeapPtr@G@ATL@@QEAA@XZ @ 0x14003FE30
 * Callers:
 *     _CPipeInstance::InitializeSilenceMonitorInterface_::_1_::dtor$1 @ 0x14009155E (_CPipeInstance--InitializeSilenceMonitorInterface_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComHeapPtr<unsigned short>::~CComHeapPtr<unsigned short>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
  *a1 = 0LL;
}
