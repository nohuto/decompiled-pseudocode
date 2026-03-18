/*
 * XREFs of PopWnfAirplaneModeCallback @ 0x1405CB480
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x140A36E60 (ExQueryWnfStateData.c)
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
      byte_140F0B764 = (_DWORD)v6 == 0;
      KeReleaseSpinLock(&PopCsResiliencyStatsLock, v2);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v1;
}
