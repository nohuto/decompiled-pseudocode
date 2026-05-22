/*
 * XREFs of ?OnAttachedToInputSite@ShellGesturesClientProxy@@UEAAXPEAVInputSite@@@Z @ 0x180083A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ShellGesturesClientProxy::OnAttachedToInputSite(ShellGesturesClientProxy *this, struct InputSite *a2)
{
  *((_QWORD *)this + 5) = a2;
}
