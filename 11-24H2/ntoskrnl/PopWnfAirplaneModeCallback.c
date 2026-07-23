/*
 * XREFs of PopWnfAirplaneModeCallback @ 0x1405CD2F0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x140A31340 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopWnfAirplaneModeCallback(__int64 a1)
{
  int v1; // ebx
  KIRQL v2; // al
  unsigned int v4; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+28h] [rbp-30h] BYREF
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]

  v4 = 12;
  v6 = 0LL;
  v7 = 0;
  v1 = ExQueryWnfStateData(a1, &v5, &v6, &v4);
  if ( v1 >= 0 )
  {
    if ( v4 >= 0xC )
    {
      v2 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
      byte_140F0B3E4 = (_DWORD)v6 == 0;
      KeReleaseSpinLock(&PopCsResiliencyStatsLock, v2);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v1;
}
