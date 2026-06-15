/*
 * XREFs of _GraphStreamingResourceManager::RegisterDevice_::_1_::catch$8 @ 0x140092BFD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GraphStreamingResourceManager::RegisterDevice_::_1_::catch_8(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 104);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 200) = *v3;
  return 0LL;
}
