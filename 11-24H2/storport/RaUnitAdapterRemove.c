/*
 * XREFs of RaUnitAdapterRemove @ 0x140091490
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     RaidDeleteUnit @ 0x1400381B0 (RaidDeleteUnit.c)
 *     RaUnitWaitForRemoveLock @ 0x14003E098 (RaUnitWaitForRemoveLock.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitAdapterRemove(__int64 a1)
{
  char IsUnitControlSupported; // al
  __int64 v3; // rcx
  _DWORD *v4; // rdx

  if ( *(_DWORD *)(a1 + 56) != 5 )
  {
    _InterlockedExchange((volatile __int32 *)(a1 + 56), 6);
    RaUnitWaitForRemoveLock(a1);
    IsUnitControlSupported = RaidIsUnitControlSupported(a1, 9);
    v3 = 0LL;
    if ( IsUnitControlSupported )
    {
      v4 = *(_DWORD **)(a1 + 24);
      if ( *v4 == 1094997074 )
      {
        v3 = (__int64)(v4 + 94);
      }
      else if ( *v4 == 1314275652 )
      {
        v3 = (__int64)(v4 + 42);
      }
      RaCallMiniportUnitControl(v3);
    }
    RaidDeleteUnit(a1);
  }
  return 0LL;
}
