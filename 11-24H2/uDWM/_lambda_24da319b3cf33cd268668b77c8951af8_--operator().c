/*
 * XREFs of _lambda_24da319b3cf33cd268668b77c8951af8_::operator() @ 0x1800C2E74
 * Callers:
 *     ?CreateTextBrush@CDWriteText@@IEAAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x1800352FC (-CreateTextBrush@CDWriteText@@IEAAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z.c)
 *     wil::details::lambda_call__lambda_24da319b3cf33cd268668b77c8951af8___::_lambda_call__lambda_24da319b3cf33cd268668b77c8951af8___ @ 0x1800C2E54 (wil--details--lambda_call__lambda_24da319b3cf33cd268668b77c8951af8___--_lambda_call__lambda_24da.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_24da319b3cf33cd268668b77c8951af8_::operator()(__int64 **a1)
{
  __int64 v2; // rbx

  v2 = **a1;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 64) + 32LL))(*(_QWORD *)(v2 + 64));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 24) + 40LL))(*(_QWORD *)(v2 + 24));
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1[1] + 32LL))(*a1[1]);
}
