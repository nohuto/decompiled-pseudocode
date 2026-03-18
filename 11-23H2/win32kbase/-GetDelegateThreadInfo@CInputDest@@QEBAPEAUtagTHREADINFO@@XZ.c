/*
 * XREFs of ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C01B559C
 * Callers:
 *     NtUserReportInertia @ 0x1C000E690 (NtUserReportInertia.c)
 *     ?AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingInfo@@HHAEBUINERTIA_INFO@@NPEBUtagRECT@@PEBU_D3DMATRIX@@@Z @ 0x1C01E1664 (-AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingI.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01E1BC4 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01F62EC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 * Callees:
 *     <none>
 */

struct tagTHREADINFO *__fastcall CInputDest::GetDelegateThreadInfo(CInputDest *this)
{
  __int64 v1; // r8

  v1 = 0LL;
  if ( *((_DWORD *)this + 23) == 1 )
    return *(struct tagTHREADINFO **)(*((_QWORD *)this + 10) + 64LL);
  if ( *((_DWORD *)this + 23) == 2 )
    return *(struct tagTHREADINFO **)(*((_QWORD *)this + 10) + 264LL);
  return (struct tagTHREADINFO *)v1;
}
