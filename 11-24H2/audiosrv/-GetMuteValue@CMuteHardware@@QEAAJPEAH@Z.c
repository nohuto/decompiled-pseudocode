/*
 * XREFs of ?GetMuteValue@CMuteHardware@@QEAAJPEAH@Z @ 0x18006FFDC
 * Callers:
 *     ?OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z @ 0x18007D6E0 (-OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?GetLevelData@CMuteHardware@@MEAAJXZ @ 0x180101EA0 (-GetLevelData@CMuteHardware@@MEAAJXZ.c)
 *     ?ReloadMuteState@CMuteHardware@@MEAAXXZ @ 0x180102CD0 (-ReloadMuteState@CMuteHardware@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMuteHardware::GetMuteValue(CMuteHardware *this, int *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 7);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 32LL))(v2, a2);
  else
    return 2147500035LL;
}
