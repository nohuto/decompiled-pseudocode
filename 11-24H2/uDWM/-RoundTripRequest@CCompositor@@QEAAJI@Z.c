/*
 * XREFs of ?RoundTripRequest@CCompositor@@QEAAJI@Z @ 0x180076B34
 * Callers:
 *     ?SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z @ 0x180076AC0 (-SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::RoundTripRequest(CCompositor *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 120LL))(*((_QWORD *)this + 3));
}
