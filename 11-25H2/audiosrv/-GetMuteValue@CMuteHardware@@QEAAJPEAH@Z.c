/*
 * XREFs of ?GetMuteValue@CMuteHardware@@QEAAJPEAH@Z @ 0x1800800EC
 * Callers:
 *     ?OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z @ 0x18007FF70 (-OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?GetLevelData@CMuteHardware@@MEAAJXZ @ 0x1800FDE90 (-GetLevelData@CMuteHardware@@MEAAJXZ.c)
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
