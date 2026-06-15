/*
 * XREFs of _CMonitorManager::CaptureMonitor::Initialize_::_1_::catch$25 @ 0x180167A5E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorManager::CaptureMonitor::Initialize_::_1_::catch_25(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 120);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 248) = *v3;
  return 0LL;
}
