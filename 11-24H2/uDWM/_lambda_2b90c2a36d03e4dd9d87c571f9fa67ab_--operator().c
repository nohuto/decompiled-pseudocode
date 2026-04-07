/*
 * XREFs of _lambda_2b90c2a36d03e4dd9d87c571f9fa67ab_::operator() @ 0x18000720C
 * Callers:
 *     wil::details::lambda_call__lambda_2b90c2a36d03e4dd9d87c571f9fa67ab___::_lambda_call__lambda_2b90c2a36d03e4dd9d87c571f9fa67ab___ @ 0x180006F28 (wil--details--lambda_call__lambda_2b90c2a36d03e4dd9d87c571f9fa67ab___--_lambda_call__lambda_2b90.c)
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x180007130 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall lambda_2b90c2a36d03e4dd9d87c571f9fa67ab_::operator()(CTopLevelWindow ***a1)
{
  CTopLevelWindow::OnSnapshotCompleted(**a1);
}
