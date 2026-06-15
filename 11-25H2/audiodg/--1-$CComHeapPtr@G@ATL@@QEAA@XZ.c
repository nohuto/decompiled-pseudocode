/*
 * XREFs of ??1?$CComHeapPtr@G@ATL@@QEAA@XZ @ 0x140040130
 * Callers:
 *     _CPipeInstance::InitializeSilenceMonitorInterface_::_1_::dtor$1 @ 0x140091ADE (_CPipeInstance--InitializeSilenceMonitorInterface_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComHeapPtr<unsigned short>::~CComHeapPtr<unsigned short>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
  *a1 = 0LL;
}
