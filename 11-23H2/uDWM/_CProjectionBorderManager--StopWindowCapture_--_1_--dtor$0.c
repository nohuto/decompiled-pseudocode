/*
 * XREFs of _CProjectionBorderManager::StopWindowCapture_::_1_::dtor$0 @ 0x1800D2B49
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProjectionBorderManager::StopWindowCapture_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)(a2 + 32));
}
