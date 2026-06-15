/*
 * XREFs of ??0CFadeWindowLUT@@QEAA@XZ @ 0x1400376A4
 * Callers:
 *     ??0?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@QEAA@PEAX@Z @ 0x140053620 (--0-$CComObject@V-$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_.c)
 *     ??0?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@@ATL@@QEAA@PEAX@Z @ 0x1400808C0 (--0-$CComObject@V-$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_.c)
 * Callees:
 *     ?Initialize@CFadeWindowLUT@@AEAAXXZ @ 0x1400376E0 (-Initialize@CFadeWindowLUT@@AEAAXXZ.c)
 */

CFadeWindowLUT *__fastcall CFadeWindowLUT::CFadeWindowLUT(CFadeWindowLUT *this)
{
  *((_QWORD *)this + 18) = 16LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 38) = 1065353216;
  CFadeWindowLUT::Initialize(this);
  return this;
}
