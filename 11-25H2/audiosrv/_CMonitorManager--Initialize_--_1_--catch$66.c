/*
 * XREFs of _CMonitorManager::Initialize_::_1_::catch$66 @ 0x1801679A8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorManager::Initialize_::_1_::catch_66(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 192);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 296) = *v3;
  return 0LL;
}
