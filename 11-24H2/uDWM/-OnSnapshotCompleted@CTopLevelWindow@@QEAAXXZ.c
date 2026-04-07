/*
 * XREFs of ?OnSnapshotCompleted@CTopLevelWindow@@QEAAXXZ @ 0x1800852E8
 * Callers:
 *     _lambda_2b90c2a36d03e4dd9d87c571f9fa67ab_::operator() @ 0x18000720C (_lambda_2b90c2a36d03e4dd9d87c571f9fa67ab_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnSnapshotCompleted(CTopLevelWindow *this)
{
  *((_BYTE *)this + 201) &= ~0x80u;
}
