/*
 * XREFs of ?DecrementCounter@CDwmNotifyBatch@@IEAAXPEAUHWND__@@@Z @ 0x1402D1A7C
 * Callers:
 *     ??0CDwmSwpNotifyBatch@@QEAA@PEAUtagSMWP@@@Z @ 0x1400886D8 (--0CDwmSwpNotifyBatch@@QEAA@PEAUtagSMWP@@@Z.c)
 *     _lambda_d3317ad6738a121a75864f2401651563_::_lambda_invoker_cdecl_ @ 0x1402D19B0 (_lambda_d3317ad6738a121a75864f2401651563_--_lambda_invoker_cdecl_.c)
 *     _lambda_d8af0bc767968272ab227b7dacb99926_::_lambda_invoker_cdecl_ @ 0x1402D1A10 (_lambda_d8af0bc767968272ab227b7dacb99926_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ??$GetProp@VCDwmWindowNotifyBatchProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCDwmWindowNotifyBatchProp@@@Z @ 0x1402D1A2C (--$GetProp@VCDwmWindowNotifyBatchProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCDwmWindowNotifyBatch.c)
 *     ?DecrementCounter@CDwmWindowNotifyBatchProp@@QEAAXXZ @ 0x1402D1ACC (-DecrementCounter@CDwmWindowNotifyBatchProp@@QEAAXXZ.c)
 */

void __fastcall CDwmNotifyBatch::DecrementCounter(CDwmNotifyBatch *this, __int64 a2)
{
  HWND v2; // rcx
  __int64 v3; // rax
  CDwmWindowNotifyBatchProp *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = this;
  v2 = (HWND)a2;
  LOBYTE(a2) = 1;
  v3 = HMValidateHandleNoSecure((__int64)v2, a2);
  if ( v3 && *(char *)(*(_QWORD *)(v3 + 40) + 19LL) >= 0 )
  {
    v4 = 0LL;
    if ( CWindowProp::GetProp<CDwmWindowNotifyBatchProp>(v3, (__int64 *)&v4) )
      CDwmWindowNotifyBatchProp::DecrementCounter(v4);
  }
}
